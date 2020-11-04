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

/* Altera - ALT_NOC_MPU_DDR_T_PRB */

#ifndef __ALT_SOCAL_NOC_MPU_DDR_H__
#define __ALT_SOCAL_NOC_MPU_DDR_H__

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
 * Component : ALT_NOC_MPU_DDR_T_PRB
 * 
 */
/*
 * Register : ddr_T_main_Probe_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                          
 * :-------|:-------|:---------|:--------------------------------------
 *  [7:0]  | R      | 0x6      | ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID  
 *  [31:8] | R      | 0xfa9ecc | ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_RESET      0x6
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_RESET      0xfa9ecc
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_COREID.
 */
struct ALT_NOC_MPU_DDR_T_PRB_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_DDR_T_PRB_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_DDR_T_PRB_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_COREID. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_COREID_s  ALT_NOC_MPU_DDR_T_PRB_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_COREID register. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_RESET       0xfa9ecc06
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_COREID_OFST        0x0

/*
 * Register : ddr_T_main_Probe_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                          
 * :-------|:-------|:--------|:--------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_DDR_T_PRB_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_REVID_UID register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_REVID_UID register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_REVID_UID field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_REVID.
 */
struct ALT_NOC_MPU_DDR_T_PRB_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_DDR_T_PRB_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_DDR_T_PRB_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_REVID. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_REVID_s  ALT_NOC_MPU_DDR_T_PRB_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_REVID register. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_REVID_OFST        0x4

/*
 * Register : ddr_T_main_Probe_MainCtl
 * 
 * Register MainCtl contains probe global control bits. The register has seven bit
 * fields:
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                            
 * :-------|:-------|:--------|:--------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN                    
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN                  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN                  
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN                   
 *  [4]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN                  
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP             
 *  [6]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD             
 *  [7]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TRACEEN
 * 
 * Register field TraceEn enables the probe to send filtered packets (Trace) on the
 * ObsTx observation output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : PAYLOADEN
 * 
 * Register field PayloadEn, when set to 1, enables traces to contain headers and
 * payload. When set ot 0, only headers are reported.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN_SET(value) (((value) << 2) & 0x00000004)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN_SET(value) (((value) << 3) & 0x00000008)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN_SET(value) (((value) << 4) & 0x00000010)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_MSB        5
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP_SET(value) (((value) << 5) & 0x00000020)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_MSB        6
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD_SET(value) (((value) << 6) & 0x00000040)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_MSB        7
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_MAINCTL.
 */
struct ALT_NOC_MPU_DDR_T_PRB_MAINCTL_s
{
    uint32_t  ERREN                     :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ERREN */
    uint32_t  TRACEEN                   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_TRACEEN */
    uint32_t  PAYLOADEN                 :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_PAYLDEN */
    uint32_t  STATEN                    :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATEN */
    uint32_t  ALARMEN                   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_ALARMEN */
    uint32_t  STATCONDDUMP              :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_STATCONDDUMP */
    uint32_t  INTRUSIVEMODE             :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_INTRUSIVEMOD */
    uint32_t  FILTBYTEALWAYSCHAINABLEEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL_FILTBYTEALWAYSCHAINABLEEN */
    uint32_t                            : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_MAINCTL. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_MAINCTL_s  ALT_NOC_MPU_DDR_T_PRB_MAINCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL register. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_MAINCTL register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_MAINCTL_OFST        0x8

/*
 * Register : ddr_T_main_Probe_CfgCtl
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                        
 * :-------|:-------|:--------|:------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN
 *  [1]    | R      | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT   
 *  [31:2] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : GLOBALEN
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ACTIVE
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_CFGCTL.
 */
struct ALT_NOC_MPU_DDR_T_PRB_CFGCTL_s
{
    uint32_t        GLOBALEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_CFGCTL_GLOBEN */
    const uint32_t  ACTIVE   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_CFGCTL_ACT */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_CFGCTL. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_CFGCTL_s  ALT_NOC_MPU_DDR_T_PRB_CFGCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL register. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_CFGCTL register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_CFGCTL_OFST        0xc

/*
 * Register : ddr_T_main_Probe_FilterLut
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [15:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT
 *  [31:16] | ???    | Unknown | *UNDEFINED*                        
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_MSB        15
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTLUT.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTLUT_s
{
    uint32_t  FILTERLUT : 16;  /* ALT_NOC_MPU_DDR_T_PRB_FLTLUT_FLTLUT */
    uint32_t            : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTLUT. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTLUT_s  ALT_NOC_MPU_DDR_T_PRB_FLTLUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTLUT register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTLUT register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTLUT_OFST        0x14

/*
 * Register : ddr_T_main_Probe_TraceAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                    
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN.
 */
struct ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_s
{
    uint32_t  TRACEALARMEN :  5;  /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_TRACEALARMEN */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_s  ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_OFST        0x18

/*
 * Register : ddr_T_main_Probe_TraceAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                        
 * :-------|:-------|:--------|:----------------------------------------------------
 *  [4:0]  | R      | 0x0     | ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                        
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT.
 */
struct ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_s
{
    const uint32_t  TRACEALARMSTATUS :  5;  /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_TRACEALARMSTAT */
    uint32_t                         : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_s  ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_OFST        0x1c

/*
 * Register : ddr_T_main_Probe_TraceAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                      
 * :-------|:-------|:--------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                      
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR.
 */
struct ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_s
{
    uint32_t  TRACEALARMCLR :  5;  /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_TRACEALARMCLR */
    uint32_t                : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_s  ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR register. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_OFST        0x20

/*
 * Register : ddr_T_main_Probe_StatPeriod
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                
 * :-------|:-------|:--------|:--------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD
 *  [31:5] | ???    | Unknown | *UNDEFINED*                                
 * 
 */
/*
 * Field : STATPERIOD
 * 
 * Register StatPeriod is a 5-bit register that sets a period, within a range of 2
 * cycles to 2 gigacycles, during which statistics are collected before being
 * dumped automatically. Setting the register implicitly enables automatic mode
 * operation for statistics collection. The period is calculated with the formula:
 * N_Cycle = 2**StatPeriodWhen register StatPeriod is set to its default value 0,
 * automatic dump mode is disabled, and register StatGo is activated for manual
 * mode operation. Note: When parameter statisticsCollection is set to False,
 * StatPeriod is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_STATPERIOD.
 */
struct ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_s
{
    uint32_t  STATPERIOD :  5;  /* ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_STATPERIOD */
    uint32_t             : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_STATPERIOD. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_s  ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_STATPERIOD register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_OFST        0x24

/*
 * Register : ddr_T_main_Probe_StatGo
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                        
 * :-------|:-------|:--------|:------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_STATGO.
 */
struct ALT_NOC_MPU_DDR_T_PRB_STATGO_s
{
    uint32_t  STATGO :  1;  /* ALT_NOC_MPU_DDR_T_PRB_STATGO_STATGO */
    uint32_t         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_STATGO. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_STATGO_s  ALT_NOC_MPU_DDR_T_PRB_STATGO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATGO register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_STATGO register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_STATGO_OFST        0x28

/*
 * Register : ddr_T_main_Probe_StatAlarmMin
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                    
 * :-------|:-------|:------|:------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN
 * 
 */
/*
 * Field : STATALARMMIN
 * 
 * Register StatAlarmMin contains the minimum count value used in statistics alarm
 * comparisons. The number of bits is equal to twice the value set forparameter
 * wStatisticsCounter. When parameter statisticsCounterAlarm is set to False,
 * StatAlarmMin is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN.
 */
struct ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_s
{
    uint32_t  STATALARMMIN : 32;  /* ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_STATALARMMIN */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_s  ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_OFST        0x2c

/*
 * Register : ddr_T_main_Probe_StatAlarmMax
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                    
 * :-------|:-------|:------|:------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX
 * 
 */
/*
 * Field : STATALARMMAX
 * 
 * Register StatAlarmMax contains the maximum count value used in statistics alarm
 * comparisons.The number of bits is equal to twice the value set for parameter
 * wStatisticsCounter. When parameter statisticsCounterAlarm is set to False,
 * StatAlarmMax is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX.
 */
struct ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_s
{
    uint32_t  STATALARMMAX : 32;  /* ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_STATALARMMAX */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_s  ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_OFST        0x30

/*
 * Register : ddr_T_main_Probe_StatAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                      
 * :-------|:-------|:--------|:--------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                      
 * 
 */
/*
 * Field : STATALARMSTATUS
 * 
 * Register StatAlarmStatus is a read-only 1-bit register indicating that at least
 * one statistics counter has exceeded the programmed values for registers
 * StatAlarmMin or StatAlarmMax. Output signal StatAlarm is equal to the values
 * stored in register MainCtl fields StatAlarmStatus and AlarmEn. When parameter
 * statisticsCounterAlarm is set to False, StatAlarmStatus is reserved.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT.
 */
struct ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_s
{
    const uint32_t  STATALARMSTATUS :  1;  /* ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_STATALARMSTAT */
    uint32_t                        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_s  ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_OFST        0x34

/*
 * Register : ddr_T_main_Probe_StatAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                    
 * 
 */
/*
 * Field : STATALARMCLR
 * 
 * Register StatAlarmClr is a 1-bit register. Writing a 1 to this register clears
 * the StatAlarmStatus register bit.When parameter statisticsCounterAlarm is set to
 * False, StatAlarmClr is reserved.NOTE  The written value is not stored in
 * StatAlarmClr. A read always returns 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR.
 */
struct ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_s
{
    uint32_t  STATALARMCLR :  1;  /* ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_STATALARMCLR */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_s  ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_OFST        0x38

/*
 * Register : ddr_T_main_Probe_StatAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [0]    | RW     | 0x1     | ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : STATALARMEN
 * 
 * Register StatAlarmEn is a 1-bit register. When set to 0 it masks StatAlarm and
 * CtiTrigOut(1) signal interrupts.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_RESET      0x1
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMEN.
 */
struct ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_s
{
    uint32_t  STATALARMEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_STATALARMEN */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_STATALARMEN. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_s  ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN register. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_RESET       0x00000001
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_STATALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_OFST        0x3c

/*
 * Register : ddr_T_main_Probe_Filters_0_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                
 * :--------|:-------|:--------|:------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                                
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_s
{
    uint32_t  FILTERS_0_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_OFST        0x44

/*
 * Register : ddr_T_main_Probe_Filters_0_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                              
 * :--------|:-------|:--------|:----------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                              
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_s
{
    uint32_t  FILTERS_0_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_OFST        0x48

/*
 * Register : ddr_T_main_Probe_Filters_0_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                  
 * :-------|:-------|:------|:--------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_0_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_OFST        0x4c

/*
 * Register : ddr_T_main_Probe_Filters_0_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                              
 * :-------|:-------|:--------|:----------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_s
{
    uint32_t  FILTERS_0_WINDOWSIZE :  6;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_OFST        0x54

/*
 * Register : ddr_T_main_Probe_Filters_0_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                  
 * :-------|:-------|:--------|:--------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                  
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_s
{
    uint32_t  FILTERS_0_SECURITYBASE :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_OFST        0x58

/*
 * Register : ddr_T_main_Probe_Filters_0_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                
 * :-------|:-------|:--------|:------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_s
{
    uint32_t  FILTERS_0_SECURITYMASK :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_OFST        0x5c

/*
 * Register : ddr_T_main_Probe_Filters_0_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_OFST        0x60

/*
 * Register : ddr_T_main_Probe_Filters_0_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_OFST        0x64

/*
 * Register : ddr_T_main_Probe_Filters_0_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                
 * :-------|:-------|:--------|:--------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_s
{
    uint32_t  FILTERS_0_LENGTH :  4;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_FLTS_0_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_OFST        0x68

/*
 * Register : ddr_T_main_Probe_Filters_0_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                        
 * :-------|:-------|:--------|:----------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_s
{
    uint32_t  FILTERS_0_URGENCY :  2;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_FLTS_0_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_OFST        0x6c

/*
 * Register : ddr_T_main_Probe_Filters_1_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                
 * :--------|:-------|:--------|:------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : FILTERS_1_ROUTEIDBASE
 * 
 * Register RouteIdBase contains the RouteId-lsbFilterRouteId bits base used to
 * filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_s
{
    uint32_t  FILTERS_1_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_OFST        0x80

/*
 * Register : ddr_T_main_Probe_Filters_1_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                              
 * :--------|:-------|:--------|:----------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : FILTERS_1_ROUTEIDMASK
 * 
 * Register RouteIdMask contains the RouteId-lsbFilterRouteId mask used to filter
 * packets. A packet is a candidate when packet.RouteId>>lsbFilterRouteId &
 * RouteIdMask = RouteIdBase & RouteIdMask.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_s
{
    uint32_t  FILTERS_1_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_OFST        0x84

/*
 * Register : ddr_T_main_Probe_Filters_1_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                  
 * :-------|:-------|:------|:--------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW
 * 
 */
/*
 * Field : FILTERS_1_ADDRBASE_LOW
 * 
 * Address LSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_1_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_OFST        0x88

/*
 * Register : ddr_T_main_Probe_Filters_1_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                              
 * :-------|:-------|:--------|:----------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : FILTERS_1_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_s
{
    uint32_t  FILTERS_1_WINDOWSIZE :  6;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_OFST        0x90

/*
 * Register : ddr_T_main_Probe_Filters_1_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                  
 * :-------|:-------|:--------|:--------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                  
 * 
 */
/*
 * Field : FILTERS_1_SECURITYBASE
 * 
 * Register SecurityBase contains the security base used to filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_s
{
    uint32_t  FILTERS_1_SECURITYBASE :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_OFST        0x94

/*
 * Register : ddr_T_main_Probe_Filters_1_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                
 * :-------|:-------|:--------|:------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : FILTERS_1_SECURITYMASK
 * 
 * Register SecurityMask is contains the security mask used to filter packets. A
 * packet is a candidate when: packet.Security & SecurityMask = SecurityBase &
 * SecurityMasks.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_s
{
    uint32_t  FILTERS_1_SECURITYMASK :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_OFST        0x98

/*
 * Register : ddr_T_main_Probe_Filters_1_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_OFST        0x9c

/*
 * Register : ddr_T_main_Probe_Filters_1_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_OFST        0xa0

/*
 * Register : ddr_T_main_Probe_Filters_1_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                
 * :-------|:-------|:--------|:--------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN
 *  [31:4] | ???    | Unknown | *UNDEFINED*                                
 * 
 */
/*
 * Field : FILTERS_1_LENGTH
 * 
 * Register Length is 4-bit register that selects candidate packets if their number
 * of bytes is less than or equal to 2**Length.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_s
{
    uint32_t  FILTERS_1_LENGTH :  4;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_FLTS_1_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_OFST        0xa4

/*
 * Register : ddr_T_main_Probe_Filters_1_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                        
 * :-------|:-------|:--------|:----------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                        
 * 
 */
/*
 * Field : FILTERS_1_URGENCY
 * 
 * Register Urgency contains the minimum urgency level used to filter packets. A
 * packet is a candidate when its socket urgency is greater than or equal to the
 * urgency specified in the register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_s
{
    uint32_t  FILTERS_1_URGENCY :  2;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_FLTS_1_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_OFST        0xa8

/*
 * Register : ddr_T_main_Probe_Filters_2_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                
 * :--------|:-------|:--------|:------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : FILTERS_2_ROUTEIDBASE
 * 
 * Register RouteIdBase contains the RouteId-lsbFilterRouteId bits base used to
 * filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_s
{
    uint32_t  FILTERS_2_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_FLTS_2_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_OFST        0xbc

/*
 * Register : ddr_T_main_Probe_Filters_2_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                              
 * :--------|:-------|:--------|:----------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : FILTERS_2_ROUTEIDMASK
 * 
 * Register RouteIdMask contains the RouteId-lsbFilterRouteId mask used to filter
 * packets. A packet is a candidate when packet.RouteId>>lsbFilterRouteId &
 * RouteIdMask = RouteIdBase & RouteIdMask.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_s
{
    uint32_t  FILTERS_2_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_FLTS_2_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_OFST        0xc0

/*
 * Register : ddr_T_main_Probe_Filters_2_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                  
 * :-------|:-------|:------|:--------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW
 * 
 */
/*
 * Field : FILTERS_2_ADDRBASE_LOW
 * 
 * Address LSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_2_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_FLTS_2_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_OFST        0xc4

/*
 * Register : ddr_T_main_Probe_Filters_2_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                              
 * :-------|:-------|:--------|:----------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : FILTERS_2_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_s
{
    uint32_t  FILTERS_2_WINDOWSIZE :  6;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_FLTS_2_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_OFST        0xcc

/*
 * Register : ddr_T_main_Probe_Filters_2_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                  
 * :-------|:-------|:--------|:--------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                  
 * 
 */
/*
 * Field : FILTERS_2_SECURITYBASE
 * 
 * Register SecurityBase contains the security base used to filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_s
{
    uint32_t  FILTERS_2_SECURITYBASE :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_FLTS_2_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_OFST        0xd0

/*
 * Register : ddr_T_main_Probe_Filters_2_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                
 * :-------|:-------|:--------|:------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : FILTERS_2_SECURITYMASK
 * 
 * Register SecurityMask is contains the security mask used to filter packets. A
 * packet is a candidate when: packet.Security & SecurityMask = SecurityBase &
 * SecurityMasks.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_s
{
    uint32_t  FILTERS_2_SECURITYMASK :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_FLTS_2_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_OFST        0xd4

/*
 * Register : ddr_T_main_Probe_Filters_2_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_OFST        0xd8

/*
 * Register : ddr_T_main_Probe_Filters_2_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_OFST        0xdc

/*
 * Register : ddr_T_main_Probe_Filters_2_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                
 * :-------|:-------|:--------|:--------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN
 *  [31:4] | ???    | Unknown | *UNDEFINED*                                
 * 
 */
/*
 * Field : FILTERS_2_LENGTH
 * 
 * Register Length is 4-bit register that selects candidate packets if their number
 * of bytes is less than or equal to 2**Length.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_s
{
    uint32_t  FILTERS_2_LENGTH :  4;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_FLTS_2_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_OFST        0xe0

/*
 * Register : ddr_T_main_Probe_Filters_2_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                        
 * :-------|:-------|:--------|:----------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                        
 * 
 */
/*
 * Field : FILTERS_2_URGENCY
 * 
 * Register Urgency contains the minimum urgency level used to filter packets. A
 * packet is a candidate when its socket urgency is greater than or equal to the
 * urgency specified in the register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_s
{
    uint32_t  FILTERS_2_URGENCY :  2;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_FLTS_2_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_OFST        0xe4

/*
 * Register : ddr_T_main_Probe_Filters_3_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                
 * :--------|:-------|:--------|:------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : FILTERS_3_ROUTEIDBASE
 * 
 * Register RouteIdBase contains the RouteId-lsbFilterRouteId bits base used to
 * filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_s
{
    uint32_t  FILTERS_3_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_FLTS_3_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_OFST        0xf8

/*
 * Register : ddr_T_main_Probe_Filters_3_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                              
 * :--------|:-------|:--------|:----------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK
 *  [31:19] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : FILTERS_3_ROUTEIDMASK
 * 
 * Register RouteIdMask contains the RouteId-lsbFilterRouteId mask used to filter
 * packets. A packet is a candidate when packet.RouteId>>lsbFilterRouteId &
 * RouteIdMask = RouteIdBase & RouteIdMask.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_s
{
    uint32_t  FILTERS_3_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_FLTS_3_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_OFST        0xfc

/*
 * Register : ddr_T_main_Probe_Filters_3_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                  
 * :-------|:-------|:------|:--------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW
 * 
 */
/*
 * Field : FILTERS_3_ADDRBASE_LOW
 * 
 * Address LSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_3_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_FLTS_3_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_OFST        0x100

/*
 * Register : ddr_T_main_Probe_Filters_3_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                              
 * :-------|:-------|:--------|:----------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : FILTERS_3_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_s
{
    uint32_t  FILTERS_3_WINDOWSIZE :  6;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_FLTS_3_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_OFST        0x108

/*
 * Register : ddr_T_main_Probe_Filters_3_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                  
 * :-------|:-------|:--------|:--------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                  
 * 
 */
/*
 * Field : FILTERS_3_SECURITYBASE
 * 
 * Register SecurityBase contains the security base used to filter packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_s
{
    uint32_t  FILTERS_3_SECURITYBASE :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_FLTS_3_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_OFST        0x10c

/*
 * Register : ddr_T_main_Probe_Filters_3_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                
 * :-------|:-------|:--------|:------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : FILTERS_3_SECURITYMASK
 * 
 * Register SecurityMask is contains the security mask used to filter packets. A
 * packet is a candidate when: packet.Security & SecurityMask = SecurityBase &
 * SecurityMasks.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_s
{
    uint32_t  FILTERS_3_SECURITYMASK :  3;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_FLTS_3_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_OFST        0x110

/*
 * Register : ddr_T_main_Probe_Filters_3_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_OFST        0x114

/*
 * Register : ddr_T_main_Probe_Filters_3_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_OFST        0x118

/*
 * Register : ddr_T_main_Probe_Filters_3_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                
 * :-------|:-------|:--------|:--------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN
 *  [31:4] | ???    | Unknown | *UNDEFINED*                                
 * 
 */
/*
 * Field : FILTERS_3_LENGTH
 * 
 * Register Length is 4-bit register that selects candidate packets if their number
 * of bytes is less than or equal to 2**Length.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_s
{
    uint32_t  FILTERS_3_LENGTH :  4;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_FLTS_3_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_OFST        0x11c

/*
 * Register : ddr_T_main_Probe_Filters_3_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                        
 * :-------|:-------|:--------|:----------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                        
 * 
 */
/*
 * Field : FILTERS_3_URGENCY
 * 
 * Register Urgency contains the minimum urgency level used to filter packets. A
 * packet is a candidate when its socket urgency is greater than or equal to the
 * urgency specified in the register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY register field. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY.
 */
struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_s
{
    uint32_t  FILTERS_3_URGENCY :  2;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_FLTS_3_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_s  ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY register. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_OFST        0x120

/*
 * Register : ddr_T_main_Probe_Counters_0_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT
 *  [31:5] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : INTEVENT
 * 
 * Internal packet event
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC.
 */
struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_s  ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_OFST        0x138

/*
 * Register : ddr_T_main_Probe_Counters_0_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                            
 * :-------|:-------|:--------|:--------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                            
 * 
 */
/*
 * Field : COUNTERS_0_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD.
 */
struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_s
{
    uint32_t  COUNTERS_0_ALARMMODE :  2;  /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_s  ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_OFST        0x13c

/*
 * Register : ddr_T_main_Probe_Counters_0_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                  
 * :--------|:-------|:--------|:----------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : COUNTERS_0_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL.
 */
struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_s
{
    const uint32_t  COUNTERS_0_VAL : 16;  /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_CNTRS_0_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_s  ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_OFST        0x140

/*
 * Register : ddr_T_main_Probe_Counters_1_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT
 *  [31:5] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : INTEVENT
 * 
 * Internal packet event
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC.
 */
struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_s  ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_OFST        0x14c

/*
 * Register : ddr_T_main_Probe_Counters_1_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                            
 * :-------|:-------|:--------|:--------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                            
 * 
 */
/*
 * Field : COUNTERS_1_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD.
 */
struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_s
{
    uint32_t  COUNTERS_1_ALARMMODE :  2;  /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_s  ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_OFST        0x150

/*
 * Register : ddr_T_main_Probe_Counters_1_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                  
 * :--------|:-------|:--------|:----------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : COUNTERS_1_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL field value from a register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL.
 */
struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_s
{
    const uint32_t  COUNTERS_1_VAL : 16;  /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_CNTRS_1_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_s  ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL register. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_OFST        0x154

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_DDR_T_PRB.
 */
struct ALT_NOC_MPU_DDR_T_PRB_s
{
    ALT_NOC_MPU_DDR_T_PRB_COREID_t               ddr_T_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_DDR_T_PRB_COREID */
    ALT_NOC_MPU_DDR_T_PRB_REVID_t                ddr_T_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_DDR_T_PRB_REVID */
    ALT_NOC_MPU_DDR_T_PRB_MAINCTL_t              ddr_T_main_Probe_MainCtl;                 /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL */
    ALT_NOC_MPU_DDR_T_PRB_CFGCTL_t               ddr_T_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_DDR_T_PRB_CFGCTL */
    volatile uint32_t                            _pad_0x10_0x13;                           /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTLUT_t               ddr_T_main_Probe_FilterLut;               /* ALT_NOC_MPU_DDR_T_PRB_FLTLUT */
    ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN_t         ddr_T_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN */
    ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT_t       ddr_T_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT */
    ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR_t        ddr_T_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR */
    ALT_NOC_MPU_DDR_T_PRB_STATPERIOD_t           ddr_T_main_Probe_StatPeriod;              /* ALT_NOC_MPU_DDR_T_PRB_STATPERIOD */
    ALT_NOC_MPU_DDR_T_PRB_STATGO_t               ddr_T_main_Probe_StatGo;                  /* ALT_NOC_MPU_DDR_T_PRB_STATGO */
    ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN_t         ddr_T_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN */
    ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX_t         ddr_T_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX */
    ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT_t        ddr_T_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT */
    ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR_t         ddr_T_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR */
    ALT_NOC_MPU_DDR_T_PRB_STATALARMEN_t          ddr_T_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_DDR_T_PRB_STATALARMEN */
    volatile uint32_t                            _pad_0x40_0x43;                           /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE_t   ddr_T_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK_t    ddr_T_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW_t  ddr_T_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW */
    volatile uint32_t                            _pad_0x50_0x53;                           /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE_t    ddr_T_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE_t  ddr_T_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK_t   ddr_T_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE_t        ddr_T_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT_t          ddr_T_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN_t           ddr_T_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY_t       ddr_T_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY */
    volatile uint32_t                            _pad_0x70_0x7f[4];                        /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE_t   ddr_T_main_Probe_Filters_1_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK_t    ddr_T_main_Probe_Filters_1_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW_t  ddr_T_main_Probe_Filters_1_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW */
    volatile uint32_t                            _pad_0x8c_0x8f;                           /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE_t    ddr_T_main_Probe_Filters_1_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE_t  ddr_T_main_Probe_Filters_1_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK_t   ddr_T_main_Probe_Filters_1_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE_t        ddr_T_main_Probe_Filters_1_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT_t          ddr_T_main_Probe_Filters_1_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN_t           ddr_T_main_Probe_Filters_1_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY_t       ddr_T_main_Probe_Filters_1_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY */
    volatile uint32_t                            _pad_0xac_0xbb[4];                        /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE_t   ddr_T_main_Probe_Filters_2_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK_t    ddr_T_main_Probe_Filters_2_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW_t  ddr_T_main_Probe_Filters_2_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW */
    volatile uint32_t                            _pad_0xc8_0xcb;                           /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE_t    ddr_T_main_Probe_Filters_2_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE_t  ddr_T_main_Probe_Filters_2_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK_t   ddr_T_main_Probe_Filters_2_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE_t        ddr_T_main_Probe_Filters_2_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT_t          ddr_T_main_Probe_Filters_2_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN_t           ddr_T_main_Probe_Filters_2_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY_t       ddr_T_main_Probe_Filters_2_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY */
    volatile uint32_t                            _pad_0xe8_0xf7[4];                        /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE_t   ddr_T_main_Probe_Filters_3_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK_t    ddr_T_main_Probe_Filters_3_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW_t  ddr_T_main_Probe_Filters_3_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW */
    volatile uint32_t                            _pad_0x104_0x107;                         /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE_t    ddr_T_main_Probe_Filters_3_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE_t  ddr_T_main_Probe_Filters_3_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK_t   ddr_T_main_Probe_Filters_3_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE_t        ddr_T_main_Probe_Filters_3_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT_t          ddr_T_main_Probe_Filters_3_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN_t           ddr_T_main_Probe_Filters_3_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN */
    ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY_t       ddr_T_main_Probe_Filters_3_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY */
    volatile uint32_t                            _pad_0x124_0x137[5];                      /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC_t          ddr_T_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC */
    ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD_t     ddr_T_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD */
    ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL_t          ddr_T_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL */
    volatile uint32_t                            _pad_0x144_0x14b[2];                      /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC_t          ddr_T_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC */
    ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD_t     ddr_T_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD */
    ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL_t          ddr_T_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL */
    volatile uint32_t                            _pad_0x158_0x400[170];                    /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_DDR_T_PRB. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_s  ALT_NOC_MPU_DDR_T_PRB_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_DDR_T_PRB. */
struct ALT_NOC_MPU_DDR_T_PRB_raw_s
{
    volatile uint32_t  ddr_T_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_DDR_T_PRB_COREID */
    volatile uint32_t  ddr_T_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_DDR_T_PRB_REVID */
    volatile uint32_t  ddr_T_main_Probe_MainCtl;                 /* ALT_NOC_MPU_DDR_T_PRB_MAINCTL */
    volatile uint32_t  ddr_T_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_DDR_T_PRB_CFGCTL */
    uint32_t           _pad_0x10_0x13;                           /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_FilterLut;               /* ALT_NOC_MPU_DDR_T_PRB_FLTLUT */
    volatile uint32_t  ddr_T_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMEN */
    volatile uint32_t  ddr_T_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMSTAT */
    volatile uint32_t  ddr_T_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_DDR_T_PRB_TRACEALARMCLR */
    volatile uint32_t  ddr_T_main_Probe_StatPeriod;              /* ALT_NOC_MPU_DDR_T_PRB_STATPERIOD */
    volatile uint32_t  ddr_T_main_Probe_StatGo;                  /* ALT_NOC_MPU_DDR_T_PRB_STATGO */
    volatile uint32_t  ddr_T_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_DDR_T_PRB_STATALARMMIN */
    volatile uint32_t  ddr_T_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_DDR_T_PRB_STATALARMMAX */
    volatile uint32_t  ddr_T_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_DDR_T_PRB_STATALARMSTAT */
    volatile uint32_t  ddr_T_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_DDR_T_PRB_STATALARMCLR */
    volatile uint32_t  ddr_T_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_DDR_T_PRB_STATALARMEN */
    uint32_t           _pad_0x40_0x43;                           /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ROUTEIDMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_ADDRBASE_LOW */
    uint32_t           _pad_0x50_0x53;                           /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_WINDOWSIZE */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_SECURITYMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_OPCODE */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_STAT */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_LEN */
    volatile uint32_t  ddr_T_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_0_URGENCY */
    uint32_t           _pad_0x70_0x7f[4];                        /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ROUTEIDMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_ADDRBASE_LOW */
    uint32_t           _pad_0x8c_0x8f;                           /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_WINDOWSIZE */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_SECURITYMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_OPCODE */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_STAT */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_LEN */
    volatile uint32_t  ddr_T_main_Probe_Filters_1_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_1_URGENCY */
    uint32_t           _pad_0xac_0xbb[4];                        /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ROUTEIDMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_ADDRBASE_LOW */
    uint32_t           _pad_0xc8_0xcb;                           /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_WINDOWSIZE */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_SECURITYMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_OPCODE */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_STAT */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_LEN */
    volatile uint32_t  ddr_T_main_Probe_Filters_2_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_2_URGENCY */
    uint32_t           _pad_0xe8_0xf7[4];                        /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_RouteIdBase;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_RouteIdMask;   /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ROUTEIDMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_AddrBase_Low;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_ADDRBASE_LOW */
    uint32_t           _pad_0x104_0x107;                         /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_WindowSize;    /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_WINDOWSIZE */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_SecurityBase;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYBASE */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_SecurityMask;  /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_SECURITYMSK */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_Opcode;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_OPCODE */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_Status;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_STAT */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_Length;        /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_LEN */
    volatile uint32_t  ddr_T_main_Probe_Filters_3_Urgency;       /* ALT_NOC_MPU_DDR_T_PRB_FLTS_3_URGENCY */
    uint32_t           _pad_0x124_0x137[5];                      /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_SRC */
    volatile uint32_t  ddr_T_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_ALARMMOD */
    volatile uint32_t  ddr_T_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_0_VAL */
    uint32_t           _pad_0x144_0x14b[2];                      /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_SRC */
    volatile uint32_t  ddr_T_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_ALARMMOD */
    volatile uint32_t  ddr_T_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_DDR_T_PRB_CNTRS_1_VAL */
    uint32_t           _pad_0x158_0x400[170];                    /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_DDR_T_PRB. */
typedef volatile struct ALT_NOC_MPU_DDR_T_PRB_raw_s  ALT_NOC_MPU_DDR_T_PRB_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_NOC_MPU_DDR_T_SCHED
 * 
 */
/*
 * Register : ddr_T_main_Scheduler_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                            
 * :-------|:-------|:---------|:----------------------------------------
 *  [7:0]  | R      | 0x2      | ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID  
 *  [31:8] | R      | 0x7242e2 | ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_RESET      0x2
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_RESET      0x7242e2
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_COREID.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_DDR_T_SCHED_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_DDR_T_SCHED_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_COREID. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_COREID_s  ALT_NOC_MPU_DDR_T_SCHED_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_COREID register. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_RESET       0x7242e202
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_COREID_OFST        0x0

/*
 * Register : ddr_T_main_Scheduler_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_DDR_T_SCHED_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_REVID_UID register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_REVID_UID register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_REVID_UID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_REVID_UID field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_REVID.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_DDR_T_SCHED_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_DDR_T_SCHED_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_REVID. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_REVID_s  ALT_NOC_MPU_DDR_T_SCHED_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_REVID register. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_REVID_OFST        0x4

/*
 * Register : ddr_T_main_Scheduler_DdrConf
 * 
 * ddr configuration definition.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 *  [31:5] | ???    | Unknown | *UNDEFINED*                            
 * 
 */
/*
 * Field : DDRCONF
 * 
 * Selector of predefined ddrConf configuration
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R12_B3_C10 | 0x00  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R13_B3_C10 | 0x01  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R14_B3_C10 | 0x02  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B3_C10 | 0x03  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R16_B3_C10 | 0x04  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R17_B3_C10 | 0x05  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R14_B3_C11 | 0x06  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B3_C11 | 0x07  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R16_B3_C11 | 0x08  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B3_C12 | 0x09  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R14_B4_C10 | 0x0A  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B4_C10 | 0x0B  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R16_B4_C10 | 0x0C  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R17_B4_C10 | 0x0D  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R12_C10 | 0x0E  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R13_C10 | 0x0F  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R14_C10 | 0x10  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R15_C10 | 0x11  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R16_C10 | 0x12  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R17_C10 | 0x13  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R14_C11 | 0x14  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R15_C11 | 0x15  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R16_C11 | 0x16  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R15_C12 | 0x17  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R14_C10 | 0x18  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R15_C10 | 0x19  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R16_C10 | 0x1A  |            
 *  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R17_C10 | 0x1B  |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * All types
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R12_B3_C10    0x00
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * All types
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R13_B3_C10    0x01
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * All types
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R14_B3_C10    0x02
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * All types
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B3_C10    0x03
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * All types
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R16_B3_C10    0x04
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * All types
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R17_B3_C10    0x05
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * LPDDR x16
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R14_B3_C11    0x06
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * LPDDR x16/x32
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B3_C11    0x07
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR3 8Gb
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R16_B3_C11    0x08
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * LPDDR3 16Gb x16 only
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B3_C12    0x09
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 only
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R14_B4_C10    0x0A
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 only
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R15_B4_C10    0x0B
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 only
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R16_B4_C10    0x0C
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 only
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_R17_B4_C10    0x0D
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * Min DDR3 512Mbit x16
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R12_C10    0x0E
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR3 512Mb x8 or 1Gb x16
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R13_C10    0x0F
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * Min DDR4 1Gb x8 or DDR3 1Gb x8 or 2Gb x16
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R14_C10    0x10
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR3 2Gb x8 & 4Gb x16 or LPDDR3 8Gb x32
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R15_C10    0x11
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR3 4Gb x8 & 8Gb x16
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R16_C10    0x12
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 16Gb x16
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R17_C10    0x13
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * LPDDR3 4Gb x16
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R14_C11    0x14
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * LPDDR3 8Gb x16 or 16Gb x32
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R15_C11    0x15
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR3 8Gb x8
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R16_C11    0x16
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * LPDDR3 16Gb x16 only
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B3_R15_C12    0x17
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 2Gb x8
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R14_C10    0x18
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 4Gb x8
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R15_C10    0x19
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 8Gb x8
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R16_C10    0x1A
/*
 * Enumerated value for register field ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF
 * 
 * DDR4 16Gb x8
 */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_E_B4_R17_C10    0x1B

/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_MSB        4
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_DDRCONF.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_s
{
    uint32_t  DDRCONF :  5;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_DDRCONF */
    uint32_t          : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_DDRCONF. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_s  ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_DDRCONF register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_OFST        0x8

/*
 * Register : ddr_T_main_Scheduler_DdrTiming
 * 
 * ddr timing definition.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                               
 * :--------|:-------|:------|:-------------------------------------------
 *  [5:0]   | RW     | 0x1c  | ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT
 *  [11:6]  | RW     | 0x13  | ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS
 *  [17:12] | RW     | 0x21  | ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS
 *  [20:18] | RW     | 0x2   | ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN
 *  [25:21] | RW     | 0x1   | ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR  
 *  [30:26] | RW     | 0xb   | ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD  
 *  [31]    | RW     | 0x1   | ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO 
 * 
 */
/*
 * Field : ACTTOACT
 * 
 * Minimum number of scheduler clock cycles between two consecutive DRAM Activate
 * commands on the same bank.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_MSB        5
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_RESET      0x1c
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : RDTOMISS
 * 
 * Minimum number of scheduler clock cycles between the last DRAM Read command and
 * a new Read or Write command in another page of the same bank.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_MSB        11
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_SET_MSK    0x00000fc0
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_CLR_MSK    0xfffff03f
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_RESET      0x13
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_GET(value) (((value) & 0x00000fc0) >> 6)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_SET(value) (((value) << 6) & 0x00000fc0)

/*
 * Field : WRTOMISS
 * 
 * Minimum number of scheduler clock cycles between the last DRAM Write command and
 * a new Read or Write command in another page of the same bank.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_MSB        17
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_SET_MSK    0x0003f000
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_CLR_MSK    0xfffc0fff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_RESET      0x21
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_GET(value) (((value) & 0x0003f000) >> 12)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_SET(value) (((value) << 12) & 0x0003f000)

/*
 * Field : BURSTLEN
 * 
 * DRAM burst duration on the DRAM data bus in scheduler clock cycles. Also equal
 * to scheduler clock cycles between two DRAM commands.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_MSB        20
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_SET_MSK    0x001c0000
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_CLR_MSK    0xffe3ffff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_RESET      0x2
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_GET(value) (((value) & 0x001c0000) >> 18)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_SET(value) (((value) << 18) & 0x001c0000)

/*
 * Field : RDTOWR
 * 
 * Minimum number of scheduler clock cycles between the last DRAM Read command and
 * a Write command.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_MSB        25
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_SET_MSK    0x03e00000
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_CLR_MSK    0xfc1fffff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_RESET      0x1
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_GET(value) (((value) & 0x03e00000) >> 21)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_SET(value) (((value) << 21) & 0x03e00000)

/*
 * Field : WRTORD
 * 
 * Minimum number of scheduler clock cycles between the last DRAM Write command and
 * a Read command.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_MSB        30
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_SET_MSK    0x7c000000
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_CLR_MSK    0x83ffffff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_RESET      0xb
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_GET(value) (((value) & 0x7c000000) >> 26)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_SET(value) (((value) << 26) & 0x7c000000)

/*
 * Field : BWRATIO
 * 
 * Number of cycle minus 1 the DDR chip needs to process one Generic socket word.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_MSB        31
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_SET_MSK    0x80000000
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_CLR_MSK    0x7fffffff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_RESET      0x1
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_s
{
    uint32_t  ACTTOACT :  6;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT */
    uint32_t  RDTOMISS :  6;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS */
    uint32_t  WRTOMISS :  6;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS */
    uint32_t  BURSTLEN :  3;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN */
    uint32_t  RDTOWR   :  5;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR */
    uint32_t  WRTORD   :  5;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD */
    uint32_t  BWRATIO  :  1;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_s  ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RESET       0xac2a14dc
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_OFST        0xc

/*
 * Register : ddr_T_main_Scheduler_DdrMode
 * 
 * ddr mode definition.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                   
 * 
 */
/*
 * Field : AUTOPRECHARGE
 * 
 * When set to one, pages are automatically closed after each access, when set to
 * zero, pages are left opened until an access in a different page occurs
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_MSB        0
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : BWRATIOEXTENDED
 * 
 * When set to 1, support for 4x Bwratio.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_RESET      0x0
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_DDRMOD.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_s
{
    uint32_t  AUTOPRECHARGE   :  1;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE */
    uint32_t  BWRATIOEXTENDED :  1;  /* ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED */
    uint32_t                  : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_DDRMOD. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_s  ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_DDRMOD register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_OFST        0x10

/*
 * Register : ddr_T_main_Scheduler_ReadLatency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                
 * :-------|:-------|:--------|:--------------------------------------------
 *  [7:0]  | RW     | 0x13    | ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY
 *  [31:8] | ???    | Unknown | *UNDEFINED*                                
 * 
 */
/*
 * Field : READLATENCY
 * 
 * Maximun delay between a read request and the first data response.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_MSB        7
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_RESET      0x13
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_s
{
    uint32_t  READLATENCY :  8;  /* ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RDLATENCY */
    uint32_t              : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_s  ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY register. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_RESET       0x00000013
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_OFST        0x14

/*
 * Register : ddr_T_main_Scheduler_Activate
 * 
 * timing values concerning Activate commands, in Generic clock unit.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [3:0]   | RW     | 0x2     | ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD    
 *  [9:4]   | RW     | 0xd     | ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW    
 *  [10]    | RW     | 0x1     | ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK
 *  [31:11] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : RRD
 * 
 * Number of cycle between two consecutive Activate commands on different Banks of
 * the same device.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_RESET      0x2
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : FAW
 * 
 * Number of cycle of the FAW period.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_MSB        9
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_SET_MSK    0x000003f0
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_CLR_MSK    0xfffffc0f
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_RESET      0xd
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_GET(value) (((value) & 0x000003f0) >> 4)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_SET(value) (((value) << 4) & 0x000003f0)

/*
 * Field : FAWBANK
 * 
 * Number of Bank of a given device involved in the FAW period.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_MSB        10
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_RESET      0x1
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_SET(value) (((value) << 10) & 0x00000400)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_s
{
    uint32_t  RRD     :  4;  /* ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD */
    uint32_t  FAW     :  6;  /* ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW */
    uint32_t  FAWBANK :  1;  /* ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK */
    uint32_t          : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_s  ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE register. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RESET       0x000004d2
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_OFST        0x38

/*
 * Register : ddr_T_main_Scheduler_DevToDev
 * 
 * timing values concerning device to device data bus ownership change, in Generic
 * clock unit.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [1:0]  | RW     | 0x1     | ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD
 *  [3:2]  | RW     | 0x1     | ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR
 *  [5:4]  | RW     | 0x1     | ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD
 *  [31:6] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : BUSRDTORD
 * 
 * number of cycle between the last read data of a device and the first read data
 * of another device.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_MSB        1
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_RESET      0x1
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : BUSRDTOWR
 * 
 * number of cycle between the last read data of a device and the first write data
 * to another device.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_MSB        3
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_SET_MSK    0x0000000c
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_CLR_MSK    0xfffffff3
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_RESET      0x1
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : BUSWRTORD
 * 
 * number of cycle between the last write data to a device and the first read data
 * of another device.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_MSB        5
/* The width in bits of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_SET_MSK    0x00000030
/* The mask used to clear the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD register field value. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_CLR_MSK    0xffffffcf
/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD register field. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_RESET      0x1
/* Extracts the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD field value from a register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD register field value suitable for setting the register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_SET(value) (((value) << 4) & 0x00000030)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_s
{
    uint32_t  BUSRDTORD :  2;  /* ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD */
    uint32_t  BUSRDTOWR :  2;  /* ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR */
    uint32_t  BUSWRTORD :  2;  /* ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD */
    uint32_t            : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_s  ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV register. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_RESET       0x00000015
/* The byte offset of the ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV register from the beginning of the component. */
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_OFST        0x3c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_DDR_T_SCHED.
 */
struct ALT_NOC_MPU_DDR_T_SCHED_s
{
    ALT_NOC_MPU_DDR_T_SCHED_COREID_t     ddr_T_main_Scheduler_Id_CoreId;      /* ALT_NOC_MPU_DDR_T_SCHED_COREID */
    ALT_NOC_MPU_DDR_T_SCHED_REVID_t      ddr_T_main_Scheduler_Id_RevisionId;  /* ALT_NOC_MPU_DDR_T_SCHED_REVID */
    ALT_NOC_MPU_DDR_T_SCHED_DDRCONF_t    ddr_T_main_Scheduler_DdrConf;        /* ALT_NOC_MPU_DDR_T_SCHED_DDRCONF */
    ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_t  ddr_T_main_Scheduler_DdrTiming;      /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING */
    ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_t     ddr_T_main_Scheduler_DdrMode;        /* ALT_NOC_MPU_DDR_T_SCHED_DDRMOD */
    ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY_t  ddr_T_main_Scheduler_ReadLatency;    /* ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY */
    volatile uint32_t                    _pad_0x18_0x37[8];                   /* *UNDEFINED* */
    ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_t   ddr_T_main_Scheduler_Activate;       /* ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE */
    ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_t   ddr_T_main_Scheduler_DevToDev;       /* ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV */
    volatile uint32_t                    _pad_0x40_0x80[16];                  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_DDR_T_SCHED. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_s  ALT_NOC_MPU_DDR_T_SCHED_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_DDR_T_SCHED. */
struct ALT_NOC_MPU_DDR_T_SCHED_raw_s
{
    volatile uint32_t  ddr_T_main_Scheduler_Id_CoreId;      /* ALT_NOC_MPU_DDR_T_SCHED_COREID */
    volatile uint32_t  ddr_T_main_Scheduler_Id_RevisionId;  /* ALT_NOC_MPU_DDR_T_SCHED_REVID */
    volatile uint32_t  ddr_T_main_Scheduler_DdrConf;        /* ALT_NOC_MPU_DDR_T_SCHED_DDRCONF */
    volatile uint32_t  ddr_T_main_Scheduler_DdrTiming;      /* ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING */
    volatile uint32_t  ddr_T_main_Scheduler_DdrMode;        /* ALT_NOC_MPU_DDR_T_SCHED_DDRMOD */
    volatile uint32_t  ddr_T_main_Scheduler_ReadLatency;    /* ALT_NOC_MPU_DDR_T_SCHED_RDLATENCY */
    uint32_t           _pad_0x18_0x37[8];                   /* *UNDEFINED* */
    volatile uint32_t  ddr_T_main_Scheduler_Activate;       /* ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE */
    volatile uint32_t  ddr_T_main_Scheduler_DevToDev;       /* ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV */
    uint32_t           _pad_0x40_0x80[16];                  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_DDR_T_SCHED. */
typedef volatile struct ALT_NOC_MPU_DDR_T_SCHED_raw_s  ALT_NOC_MPU_DDR_T_SCHED_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_MPU_DDR_H__ */

