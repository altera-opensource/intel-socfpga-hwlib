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

/* Altera - ALT_NOC_MPU_PRB_H2F_MAIN_PRB */

#ifndef __ALT_SOCAL_NOC_MPU_PRB_H__
#define __ALT_SOCAL_NOC_MPU_PRB_H__

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
 * Component : ALT_NOC_MPU_PRB_H2F_MAIN_PRB
 * 
 */
/*
 * Register : Probe_SoC2FPGA_main_Probe_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                             
 * :-------|:-------|:--------|:-----------------------------------------
 *  [7:0]  | R      | 0x6     | ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID  
 *  [31:8] | R      | 0x567d6 | ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_RESET      0x6
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_RESET      0x567d6
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_COREID.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_PRB_H2F_MAIN_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_PRB_H2F_MAIN_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_COREID. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_COREID_s  ALT_NOC_MPU_PRB_H2F_MAIN_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_RESET       0x0567d606
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_COREID_OFST        0x0

/*
 * Register : Probe_SoC2FPGA_main_Probe_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                             
 * :-------|:-------|:--------|:-----------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_REVID.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_PRB_H2F_MAIN_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_PRB_H2F_MAIN_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_REVID. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_REVID_s  ALT_NOC_MPU_PRB_H2F_MAIN_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_REVID_OFST        0x4

/*
 * Register : Probe_SoC2FPGA_main_Probe_MainCtl
 * 
 * Register MainCtl contains probe global control bits. The register has seven bit
 * fields:
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN                    
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN                  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN                  
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN                   
 *  [4]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN                  
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP             
 *  [6]    | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD             
 *  [7]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TRACEEN
 * 
 * Register field TraceEn enables the probe to send filtered packets (Trace) on the
 * ObsTx observation output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : PAYLOADEN
 * 
 * Register field PayloadEn, when set to 1, enables traces to contain headers and
 * payload. When set ot 0, only headers are reported.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN_SET(value) (((value) << 2) & 0x00000004)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN_SET(value) (((value) << 3) & 0x00000008)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN_SET(value) (((value) << 4) & 0x00000010)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP_SET(value) (((value) << 5) & 0x00000020)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_MSB        6
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD_SET(value) (((value) << 6) & 0x00000040)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_s
{
    uint32_t        ERREN                     :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ERREN */
    uint32_t        TRACEEN                   :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_TRACEEN */
    uint32_t        PAYLOADEN                 :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_PAYLDEN */
    uint32_t        STATEN                    :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATEN */
    uint32_t        ALARMEN                   :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_ALARMEN */
    uint32_t        STATCONDDUMP              :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_STATCONDDUMP */
    const uint32_t  INTRUSIVEMODE             :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_INTRUSIVEMOD */
    uint32_t        FILTBYTEALWAYSCHAINABLEEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN */
    uint32_t                                  : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_s  ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_OFST        0x8

/*
 * Register : Probe_SoC2FPGA_main_Probe_CfgCtl
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                           
 * :-------|:-------|:--------|:---------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN
 *  [1]    | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT   
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ACTIVE
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_s
{
    uint32_t        GLOBALEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_GLOBEN */
    const uint32_t  ACTIVE   :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_ACT */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_OFST        0xc

/*
 * Register : Probe_SoC2FPGA_main_Probe_TracePortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                       
 * 
 */
/*
 * Field : TRACEPORTSEL
 * 
 * Register TracePortSel indicates which generic protocol link is currently being
 * observed by trace logic.The number of bits in register TracePortSel is equal to
 * log2 of the value set for parameter nPort.The register can be updated at any
 * time, but changes only become effective at packet boundaries.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_s
{
    uint32_t  TRACEPORTSEL :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_TRACEPORTSEL */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_s  ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_OFST        0x10

/*
 * Register : Probe_SoC2FPGA_main_Probe_FilterLut
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                           
 * :-------|:-------|:--------|:---------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT
 *  [31:4] | ???    | Unknown | *UNDEFINED*                           
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_s
{
    uint32_t  FILTERLUT :  4;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_FLTLUT */
    uint32_t            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_OFST        0x14

/*
 * Register : Probe_SoC2FPGA_main_Probe_TraceAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                       
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_s
{
    uint32_t  TRACEALARMEN :  3;  /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_TRACEALARMEN */
    uint32_t               : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_s  ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_OFST        0x18

/*
 * Register : Probe_SoC2FPGA_main_Probe_TraceAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [2:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                           
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_s
{
    const uint32_t  TRACEALARMSTATUS :  3;  /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_TRACEALARMSTAT */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_s  ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_OFST        0x1c

/*
 * Register : Probe_SoC2FPGA_main_Probe_TraceAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                         
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_s
{
    uint32_t  TRACEALARMCLR :  3;  /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_TRACEALARMCLR */
    uint32_t                : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_s  ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_OFST        0x20

/*
 * Register : Probe_SoC2FPGA_main_Probe_StatPeriod
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_s
{
    uint32_t  STATPERIOD :  5;  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_STATPERIOD */
    uint32_t             : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_s  ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_OFST        0x24

/*
 * Register : Probe_SoC2FPGA_main_Probe_StatGo
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                           
 * :-------|:-------|:--------|:---------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATGO.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_s
{
    uint32_t  STATGO :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_STATGO */
    uint32_t         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATGO. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_s  ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_STATGO register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_OFST        0x28

/*
 * Register : Probe_SoC2FPGA_main_Probe_StatAlarmMin
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_s
{
    uint32_t  STATALARMMIN : 32;  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_STATALARMMIN */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_s  ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_OFST        0x2c

/*
 * Register : Probe_SoC2FPGA_main_Probe_StatAlarmMax
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_s
{
    uint32_t  STATALARMMAX : 32;  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_STATALARMMAX */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_s  ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_OFST        0x30

/*
 * Register : Probe_SoC2FPGA_main_Probe_StatAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_s
{
    const uint32_t  STATALARMSTATUS :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_STATALARMSTAT */
    uint32_t                        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_s  ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_OFST        0x34

/*
 * Register : Probe_SoC2FPGA_main_Probe_StatAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_s
{
    uint32_t  STATALARMCLR :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_STATALARMCLR */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_s  ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_OFST        0x38

/*
 * Register : Probe_SoC2FPGA_main_Probe_StatAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                     
 * :-------|:-------|:--------|:-------------------------------------------------
 *  [0]    | RW     | 0x1     | ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_RESET      0x1
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_s
{
    uint32_t  STATALARMEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_STATALARMEN */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_s  ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_RESET       0x00000001
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_OFST        0x3c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                   
 * :--------|:-------|:--------|:---------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_s
{
    uint32_t  FILTERS_0_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_OFST        0x44

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                 
 * :--------|:-------|:--------|:-------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_s
{
    uint32_t  FILTERS_0_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_OFST        0x48

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                     
 * :-------|:-------|:------|:-----------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_0_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_OFST        0x4c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_s
{
    uint32_t  FILTERS_0_WINDOWSIZE :  6;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_OFST        0x54

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                     
 * :-------|:-------|:--------|:-----------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_s
{
    uint32_t  FILTERS_0_SECURITYBASE :  3;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_OFST        0x58

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_s
{
    uint32_t  FILTERS_0_SECURITYMASK :  3;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_OFST        0x5c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_OFST        0x60

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_OFST        0x64

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_s
{
    uint32_t  FILTERS_0_LENGTH :  4;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_FLTS_0_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_OFST        0x68

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_0_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_s
{
    uint32_t  FILTERS_0_URGENCY :  2;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_OFST        0x6c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                   
 * :--------|:-------|:--------|:---------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_s
{
    uint32_t  FILTERS_1_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_OFST        0x80

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                 
 * :--------|:-------|:--------|:-------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_s
{
    uint32_t  FILTERS_1_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_OFST        0x84

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                     
 * :-------|:-------|:------|:-----------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_1_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_OFST        0x88

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_s
{
    uint32_t  FILTERS_1_WINDOWSIZE :  6;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_OFST        0x90

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                     
 * :-------|:-------|:--------|:-----------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_s
{
    uint32_t  FILTERS_1_SECURITYBASE :  3;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_OFST        0x94

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_s
{
    uint32_t  FILTERS_1_SECURITYMASK :  3;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_OFST        0x98

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_OFST        0x9c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_OFST        0xa0

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_s
{
    uint32_t  FILTERS_1_LENGTH :  4;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_FLTS_1_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_OFST        0xa4

/*
 * Register : Probe_SoC2FPGA_main_Probe_Filters_1_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_s
{
    uint32_t  FILTERS_1_URGENCY :  2;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_s  ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_OFST        0xa8

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_0_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : COUNTERS_0_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_s
{
    uint32_t  COUNTERS_0_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_OFST        0x134

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_0_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_OFST        0x138

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_0_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_s
{
    uint32_t  COUNTERS_0_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_OFST        0x13c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_0_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_s
{
    const uint32_t  COUNTERS_0_VAL : 16;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_CNTRS_0_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_OFST        0x140

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_1_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : COUNTERS_1_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_s
{
    uint32_t  COUNTERS_1_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_OFST        0x148

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_1_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_OFST        0x14c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_1_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_s
{
    uint32_t  COUNTERS_1_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_OFST        0x150

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_1_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_s
{
    const uint32_t  COUNTERS_1_VAL : 16;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_CNTRS_1_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_OFST        0x154

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_2_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : COUNTERS_2_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_s
{
    uint32_t  COUNTERS_2_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_OFST        0x15c

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_2_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_OFST        0x160

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_2_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_2_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_s
{
    uint32_t  COUNTERS_2_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_OFST        0x164

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_2_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                     
 * 
 */
/*
 * Field : COUNTERS_2_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_s
{
    const uint32_t  COUNTERS_2_VAL : 16;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_CNTRS_2_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_OFST        0x168

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_3_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                             
 * 
 */
/*
 * Field : COUNTERS_3_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_s
{
    uint32_t  COUNTERS_3_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_OFST        0x170

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_3_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_OFST        0x174

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_3_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_3_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_s
{
    uint32_t  COUNTERS_3_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_OFST        0x178

/*
 * Register : Probe_SoC2FPGA_main_Probe_Counters_3_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                     
 * 
 */
/*
 * Field : COUNTERS_3_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_s
{
    const uint32_t  COUNTERS_3_VAL : 16;  /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_CNTRS_3_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_s  ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL register. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_OFST        0x17c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_PRB_H2F_MAIN_PRB.
 */
struct ALT_NOC_MPU_PRB_H2F_MAIN_PRB_s
{
    ALT_NOC_MPU_PRB_H2F_MAIN_COREID_t               Probe_SoC2FPGA_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_PRB_H2F_MAIN_COREID */
    ALT_NOC_MPU_PRB_H2F_MAIN_REVID_t                Probe_SoC2FPGA_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_PRB_H2F_MAIN_REVID */
    ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL_t              Probe_SoC2FPGA_main_Probe_MainCtl;                 /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL */
    ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL_t               Probe_SoC2FPGA_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL */
    ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL_t         Probe_SoC2FPGA_main_Probe_TracePortSel;            /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT_t               Probe_SoC2FPGA_main_Probe_FilterLut;               /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT */
    ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN_t         Probe_SoC2FPGA_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN */
    ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT_t       Probe_SoC2FPGA_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT */
    ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR_t        Probe_SoC2FPGA_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR */
    ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD_t           Probe_SoC2FPGA_main_Probe_StatPeriod;              /* ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD */
    ALT_NOC_MPU_PRB_H2F_MAIN_STATGO_t               Probe_SoC2FPGA_main_Probe_StatGo;                  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATGO */
    ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN_t         Probe_SoC2FPGA_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN */
    ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX_t         Probe_SoC2FPGA_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX */
    ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT_t        Probe_SoC2FPGA_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT */
    ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR_t         Probe_SoC2FPGA_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR */
    ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN_t          Probe_SoC2FPGA_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN */
    volatile uint32_t                               _pad_0x40_0x43;                                    /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE_t   Probe_SoC2FPGA_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK_t    Probe_SoC2FPGA_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW_t  Probe_SoC2FPGA_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW */
    volatile uint32_t                               _pad_0x50_0x53;                                    /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE_t    Probe_SoC2FPGA_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE_t  Probe_SoC2FPGA_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK_t   Probe_SoC2FPGA_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE_t        Probe_SoC2FPGA_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT_t          Probe_SoC2FPGA_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN_t           Probe_SoC2FPGA_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY_t       Probe_SoC2FPGA_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY */
    volatile uint32_t                               _pad_0x70_0x7f[4];                                 /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE_t   Probe_SoC2FPGA_main_Probe_Filters_1_RouteIdBase;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK_t    Probe_SoC2FPGA_main_Probe_Filters_1_RouteIdMask;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW_t  Probe_SoC2FPGA_main_Probe_Filters_1_AddrBase_Low;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW */
    volatile uint32_t                               _pad_0x8c_0x8f;                                    /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE_t    Probe_SoC2FPGA_main_Probe_Filters_1_WindowSize;    /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE_t  Probe_SoC2FPGA_main_Probe_Filters_1_SecurityBase;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK_t   Probe_SoC2FPGA_main_Probe_Filters_1_SecurityMask;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE_t        Probe_SoC2FPGA_main_Probe_Filters_1_Opcode;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT_t          Probe_SoC2FPGA_main_Probe_Filters_1_Status;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN_t           Probe_SoC2FPGA_main_Probe_Filters_1_Length;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN */
    ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY_t       Probe_SoC2FPGA_main_Probe_Filters_1_Urgency;       /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY */
    volatile uint32_t                               _pad_0xac_0x133[34];                               /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL_t      Probe_SoC2FPGA_main_Probe_Counters_0_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC_t          Probe_SoC2FPGA_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD_t     Probe_SoC2FPGA_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL_t          Probe_SoC2FPGA_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL */
    volatile uint32_t                               _pad_0x144_0x147;                                  /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL_t      Probe_SoC2FPGA_main_Probe_Counters_1_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC_t          Probe_SoC2FPGA_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD_t     Probe_SoC2FPGA_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL_t          Probe_SoC2FPGA_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL */
    volatile uint32_t                               _pad_0x158_0x15b;                                  /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL_t      Probe_SoC2FPGA_main_Probe_Counters_2_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC_t          Probe_SoC2FPGA_main_Probe_Counters_2_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD_t     Probe_SoC2FPGA_main_Probe_Counters_2_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL_t          Probe_SoC2FPGA_main_Probe_Counters_2_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL */
    volatile uint32_t                               _pad_0x16c_0x16f;                                  /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL_t      Probe_SoC2FPGA_main_Probe_Counters_3_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC_t          Probe_SoC2FPGA_main_Probe_Counters_3_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD_t     Probe_SoC2FPGA_main_Probe_Counters_3_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD */
    ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL_t          Probe_SoC2FPGA_main_Probe_Counters_3_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL */
    volatile uint32_t                               _pad_0x180_0x400[160];                             /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_PRB_H2F_MAIN_PRB. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_PRB_s  ALT_NOC_MPU_PRB_H2F_MAIN_PRB_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_PRB_H2F_MAIN_PRB. */
struct ALT_NOC_MPU_PRB_H2F_MAIN_PRB_raw_s
{
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_PRB_H2F_MAIN_COREID */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_PRB_H2F_MAIN_REVID */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_MainCtl;                 /* ALT_NOC_MPU_PRB_H2F_MAIN_MAINCTL */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_PRB_H2F_MAIN_CFGCTL */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_TracePortSel;            /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEPORTSEL */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_FilterLut;               /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTLUT */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMEN */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMSTAT */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_PRB_H2F_MAIN_TRACEALARMCLR */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_StatPeriod;              /* ALT_NOC_MPU_PRB_H2F_MAIN_STATPERIOD */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_StatGo;                  /* ALT_NOC_MPU_PRB_H2F_MAIN_STATGO */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMIN */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMMAX */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMSTAT */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMCLR */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_PRB_H2F_MAIN_STATALARMEN */
    uint32_t           _pad_0x40_0x43;                                    /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDBASE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ROUTEIDMSK */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_ADDRBASE_LOW */
    uint32_t           _pad_0x50_0x53;                                    /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_WINDOWSIZE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYBASE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_SECURITYMSK */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_OPCODE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_STAT */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_LEN */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_0_URGENCY */
    uint32_t           _pad_0x70_0x7f[4];                                 /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_RouteIdBase;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDBASE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_RouteIdMask;   /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ROUTEIDMSK */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_AddrBase_Low;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_ADDRBASE_LOW */
    uint32_t           _pad_0x8c_0x8f;                                    /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_WindowSize;    /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_WINDOWSIZE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_SecurityBase;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYBASE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_SecurityMask;  /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_SECURITYMSK */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_Opcode;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_OPCODE */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_Status;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_STAT */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_Length;        /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_LEN */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Filters_1_Urgency;       /* ALT_NOC_MPU_PRB_H2F_MAIN_FLTS_1_URGENCY */
    uint32_t           _pad_0xac_0x133[34];                               /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_0_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_PORTSEL */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_SRC */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_ALARMMOD */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_0_VAL */
    uint32_t           _pad_0x144_0x147;                                  /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_1_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_PORTSEL */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_SRC */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_ALARMMOD */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_1_VAL */
    uint32_t           _pad_0x158_0x15b;                                  /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_2_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_PORTSEL */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_2_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_SRC */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_2_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_ALARMMOD */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_2_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_2_VAL */
    uint32_t           _pad_0x16c_0x16f;                                  /* *UNDEFINED* */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_3_PortSel;      /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_PORTSEL */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_3_Src;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_SRC */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_3_AlarmMode;    /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_ALARMMOD */
    volatile uint32_t  Probe_SoC2FPGA_main_Probe_Counters_3_Val;          /* ALT_NOC_MPU_PRB_H2F_MAIN_CNTRS_3_VAL */
    uint32_t           _pad_0x180_0x400[160];                             /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_PRB_H2F_MAIN_PRB. */
typedef volatile struct ALT_NOC_MPU_PRB_H2F_MAIN_PRB_raw_s  ALT_NOC_MPU_PRB_H2F_MAIN_PRB_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_NOC_MPU_PRB_EMACS_MAIN_PRB
 * 
 */
/*
 * Register : Probe_emacs_main_Probe_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                               
 * :-------|:-------|:---------|:-------------------------------------------
 *  [7:0]  | R      | 0x6      | ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID  
 *  [31:8] | R      | 0xf46f63 | ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_RESET      0x6
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_RESET      0xf46f63
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_COREID.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_COREID. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_s  ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_RESET       0xf46f6306
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_OFST        0x0

/*
 * Register : Probe_emacs_main_Probe_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_REVID.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_REVID. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_s  ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_OFST        0x4

/*
 * Register : Probe_emacs_main_Probe_MainCtl
 * 
 * Register MainCtl contains probe global control bits. The register has seven bit
 * fields:
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN                    
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN                  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN                  
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN                   
 *  [4]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN                  
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP             
 *  [6]    | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD             
 *  [7]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TRACEEN
 * 
 * Register field TraceEn enables the probe to send filtered packets (Trace) on the
 * ObsTx observation output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : PAYLOADEN
 * 
 * Register field PayloadEn, when set to 1, enables traces to contain headers and
 * payload. When set ot 0, only headers are reported.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN_SET(value) (((value) << 2) & 0x00000004)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN_SET(value) (((value) << 3) & 0x00000008)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN_SET(value) (((value) << 4) & 0x00000010)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP_SET(value) (((value) << 5) & 0x00000020)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_MSB        6
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD_SET(value) (((value) << 6) & 0x00000040)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_s
{
    uint32_t        ERREN                     :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ERREN */
    uint32_t        TRACEEN                   :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_TRACEEN */
    uint32_t        PAYLOADEN                 :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_PAYLDEN */
    uint32_t        STATEN                    :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATEN */
    uint32_t        ALARMEN                   :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_ALARMEN */
    uint32_t        STATCONDDUMP              :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_STATCONDDUMP */
    const uint32_t  INTRUSIVEMODE             :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_INTRUSIVEMOD */
    uint32_t        FILTBYTEALWAYSCHAINABLEEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN */
    uint32_t                                  : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_OFST        0x8

/*
 * Register : Probe_emacs_main_Probe_CfgCtl
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                             
 * :-------|:-------|:--------|:-----------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN
 *  [1]    | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT   
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ACTIVE
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_s
{
    uint32_t        GLOBALEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_GLOBEN */
    const uint32_t  ACTIVE   :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_ACT */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_OFST        0xc

/*
 * Register : Probe_emacs_main_Probe_TracePortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                         
 * 
 */
/*
 * Field : TRACEPORTSEL
 * 
 * Register TracePortSel indicates which generic protocol link is currently being
 * observed by trace logic.The number of bits in register TracePortSel is equal to
 * log2 of the value set for parameter nPort.The register can be updated at any
 * time, but changes only become effective at packet boundaries.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_s
{
    uint32_t  TRACEPORTSEL :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_TRACEPORTSEL */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_OFST        0x10

/*
 * Register : Probe_emacs_main_Probe_FilterLut
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                             
 * :-------|:-------|:--------|:-----------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT
 *  [31:4] | ???    | Unknown | *UNDEFINED*                             
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_s
{
    uint32_t  FILTERLUT :  4;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_FLTLUT */
    uint32_t            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_OFST        0x14

/*
 * Register : Probe_emacs_main_Probe_TraceAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                         
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_s
{
    uint32_t  TRACEALARMEN :  3;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_TRACEALARMEN */
    uint32_t               : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_s  ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_OFST        0x18

/*
 * Register : Probe_emacs_main_Probe_TraceAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [2:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                             
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_s
{
    const uint32_t  TRACEALARMSTATUS :  3;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_TRACEALARMSTAT */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_s  ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_OFST        0x1c

/*
 * Register : Probe_emacs_main_Probe_TraceAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                           
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_s
{
    uint32_t  TRACEALARMCLR :  3;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_TRACEALARMCLR */
    uint32_t                : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_s  ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_OFST        0x20

/*
 * Register : Probe_emacs_main_Probe_StatPeriod
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                     
 * :-------|:-------|:--------|:-------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_s
{
    uint32_t  STATPERIOD :  5;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_STATPERIOD */
    uint32_t             : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_s  ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_OFST        0x24

/*
 * Register : Probe_emacs_main_Probe_StatGo
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                             
 * :-------|:-------|:--------|:-----------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_s
{
    uint32_t  STATGO :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_STATGO */
    uint32_t         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_s  ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_OFST        0x28

/*
 * Register : Probe_emacs_main_Probe_StatAlarmMin
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_s
{
    uint32_t  STATALARMMIN : 32;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_STATALARMMIN */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_s  ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_OFST        0x2c

/*
 * Register : Probe_emacs_main_Probe_StatAlarmMax
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_s
{
    uint32_t  STATALARMMAX : 32;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_STATALARMMAX */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_s  ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_OFST        0x30

/*
 * Register : Probe_emacs_main_Probe_StatAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_s
{
    const uint32_t  STATALARMSTATUS :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_STATALARMSTAT */
    uint32_t                        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_s  ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_OFST        0x34

/*
 * Register : Probe_emacs_main_Probe_StatAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_s
{
    uint32_t  STATALARMCLR :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_STATALARMCLR */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_s  ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_OFST        0x38

/*
 * Register : Probe_emacs_main_Probe_StatAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [0]    | RW     | 0x1     | ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_RESET      0x1
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_s
{
    uint32_t  STATALARMEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_STATALARMEN */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_s  ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_RESET       0x00000001
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_OFST        0x3c

/*
 * Register : Probe_emacs_main_Probe_Filters_0_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                     
 * :--------|:-------|:--------|:-----------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_s
{
    uint32_t  FILTERS_0_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_OFST        0x44

/*
 * Register : Probe_emacs_main_Probe_Filters_0_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                   
 * :--------|:-------|:--------|:---------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_s
{
    uint32_t  FILTERS_0_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_OFST        0x48

/*
 * Register : Probe_emacs_main_Probe_Filters_0_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                       
 * :-------|:-------|:------|:-------------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_0_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_OFST        0x4c

/*
 * Register : Probe_emacs_main_Probe_Filters_0_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_s
{
    uint32_t  FILTERS_0_WINDOWSIZE :  6;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_OFST        0x54

/*
 * Register : Probe_emacs_main_Probe_Filters_0_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_s
{
    uint32_t  FILTERS_0_SECURITYBASE :  3;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_OFST        0x58

/*
 * Register : Probe_emacs_main_Probe_Filters_0_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                     
 * :-------|:-------|:--------|:-----------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_s
{
    uint32_t  FILTERS_0_SECURITYMASK :  3;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_OFST        0x5c

/*
 * Register : Probe_emacs_main_Probe_Filters_0_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_OFST        0x60

/*
 * Register : Probe_emacs_main_Probe_Filters_0_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                 
 * :-------|:-------|:--------|:---------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_OFST        0x64

/*
 * Register : Probe_emacs_main_Probe_Filters_0_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                     
 * :-------|:-------|:--------|:-------------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_s
{
    uint32_t  FILTERS_0_LENGTH :  4;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_FLTS_0_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_OFST        0x68

/*
 * Register : Probe_emacs_main_Probe_Filters_0_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_s
{
    uint32_t  FILTERS_0_URGENCY :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_OFST        0x6c

/*
 * Register : Probe_emacs_main_Probe_Filters_1_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                     
 * :--------|:-------|:--------|:-----------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_s
{
    uint32_t  FILTERS_1_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_FLTS_1_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_OFST        0x80

/*
 * Register : Probe_emacs_main_Probe_Filters_1_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                   
 * :--------|:-------|:--------|:---------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_s
{
    uint32_t  FILTERS_1_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_FLTS_1_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_OFST        0x84

/*
 * Register : Probe_emacs_main_Probe_Filters_1_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                       
 * :-------|:-------|:------|:-------------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_1_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_FLTS_1_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_OFST        0x88

/*
 * Register : Probe_emacs_main_Probe_Filters_1_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_s
{
    uint32_t  FILTERS_1_WINDOWSIZE :  6;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_FLTS_1_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_OFST        0x90

/*
 * Register : Probe_emacs_main_Probe_Filters_1_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                       
 * :-------|:-------|:--------|:-------------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_s
{
    uint32_t  FILTERS_1_SECURITYBASE :  3;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_FLTS_1_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_OFST        0x94

/*
 * Register : Probe_emacs_main_Probe_Filters_1_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                     
 * :-------|:-------|:--------|:-----------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_s
{
    uint32_t  FILTERS_1_SECURITYMASK :  3;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_FLTS_1_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_OFST        0x98

/*
 * Register : Probe_emacs_main_Probe_Filters_1_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_OFST        0x9c

/*
 * Register : Probe_emacs_main_Probe_Filters_1_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                 
 * :-------|:-------|:--------|:---------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_OFST        0xa0

/*
 * Register : Probe_emacs_main_Probe_Filters_1_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                     
 * :-------|:-------|:--------|:-------------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_s
{
    uint32_t  FILTERS_1_LENGTH :  4;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_FLTS_1_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_OFST        0xa4

/*
 * Register : Probe_emacs_main_Probe_Filters_1_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                             
 * :-------|:-------|:--------|:---------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_s
{
    uint32_t  FILTERS_1_URGENCY :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_FLTS_1_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_s  ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_OFST        0xa8

/*
 * Register : Probe_emacs_main_Probe_Counters_0_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_0_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_s
{
    uint32_t  COUNTERS_0_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_CNTRS_0_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_OFST        0x134

/*
 * Register : Probe_emacs_main_Probe_Counters_0_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                    
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : EXTEVENT
 * 
 * When set to 1 counts the cycles where ExtEvent[IntEvent] = 1. It exists when
 * nExtEvent > 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_INTEVENT */
    uint32_t  EXTEVENT :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_EXTEVENT */
    uint32_t           : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_OFST        0x138

/*
 * Register : Probe_emacs_main_Probe_Counters_0_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_s
{
    uint32_t  COUNTERS_0_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_OFST        0x13c

/*
 * Register : Probe_emacs_main_Probe_Counters_0_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                       
 * :--------|:-------|:--------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_s
{
    const uint32_t  COUNTERS_0_VAL : 16;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_CNTRS_0_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_OFST        0x140

/*
 * Register : Probe_emacs_main_Probe_Counters_1_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_1_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_s
{
    uint32_t  COUNTERS_1_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_CNTRS_1_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_OFST        0x148

/*
 * Register : Probe_emacs_main_Probe_Counters_1_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                    
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : EXTEVENT
 * 
 * When set to 1 counts the cycles where ExtEvent[IntEvent] = 1. It exists when
 * nExtEvent > 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_INTEVENT */
    uint32_t  EXTEVENT :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_EXTEVENT */
    uint32_t           : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_OFST        0x14c

/*
 * Register : Probe_emacs_main_Probe_Counters_1_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_s
{
    uint32_t  COUNTERS_1_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_OFST        0x150

/*
 * Register : Probe_emacs_main_Probe_Counters_1_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                       
 * :--------|:-------|:--------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_s
{
    const uint32_t  COUNTERS_1_VAL : 16;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_CNTRS_1_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_OFST        0x154

/*
 * Register : Probe_emacs_main_Probe_Counters_2_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_2_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_s
{
    uint32_t  COUNTERS_2_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_CNTRS_2_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_OFST        0x15c

/*
 * Register : Probe_emacs_main_Probe_Counters_2_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                    
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : EXTEVENT
 * 
 * When set to 1 counts the cycles where ExtEvent[IntEvent] = 1. It exists when
 * nExtEvent > 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_INTEVENT */
    uint32_t  EXTEVENT :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_EXTEVENT */
    uint32_t           : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_OFST        0x160

/*
 * Register : Probe_emacs_main_Probe_Counters_2_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : COUNTERS_2_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_s
{
    uint32_t  COUNTERS_2_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_OFST        0x164

/*
 * Register : Probe_emacs_main_Probe_Counters_2_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                       
 * :--------|:-------|:--------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                       
 * 
 */
/*
 * Field : COUNTERS_2_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_s
{
    const uint32_t  COUNTERS_2_VAL : 16;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_CNTRS_2_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_OFST        0x168

/*
 * Register : Probe_emacs_main_Probe_Counters_3_PortSel
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_3_PORTSEL
 * 
 * Register PortSel indicates which NTTP link is associated with the counter. The
 * register can be changed at any time, with the change effective immediately. The
 * LUT and FILTx sources do not depend on this NTTP port selection.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_s
{
    uint32_t  COUNTERS_3_PORTSEL :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_CNTRS_3_PORTSEL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_OFST        0x170

/*
 * Register : Probe_emacs_main_Probe_Counters_3_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                    
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : EXTEVENT
 * 
 * When set to 1 counts the cycles where ExtEvent[IntEvent] = 1. It exists when
 * nExtEvent > 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_INTEVENT */
    uint32_t  EXTEVENT :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_EXTEVENT */
    uint32_t           : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_OFST        0x174

/*
 * Register : Probe_emacs_main_Probe_Counters_3_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                 
 * 
 */
/*
 * Field : COUNTERS_3_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_s
{
    uint32_t  COUNTERS_3_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_OFST        0x178

/*
 * Register : Probe_emacs_main_Probe_Counters_3_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                       
 * :--------|:-------|:--------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                       
 * 
 */
/*
 * Field : COUNTERS_3_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_s
{
    const uint32_t  COUNTERS_3_VAL : 16;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_CNTRS_3_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_s  ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_OFST        0x17c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_PRB_EMACS_MAIN_PRB.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_PRB_s
{
    ALT_NOC_MPU_PRB_EMACS_MAIN_COREID_t               Probe_emacs_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_PRB_EMACS_MAIN_COREID */
    ALT_NOC_MPU_PRB_EMACS_MAIN_REVID_t                Probe_emacs_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_PRB_EMACS_MAIN_REVID */
    ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL_t              Probe_emacs_main_Probe_MainCtl;                 /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL_t               Probe_emacs_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL */
    ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL_t         Probe_emacs_main_Probe_TracePortSel;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT_t               Probe_emacs_main_Probe_FilterLut;               /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT */
    ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN_t         Probe_emacs_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN */
    ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT_t       Probe_emacs_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT */
    ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR_t        Probe_emacs_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR */
    ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD_t           Probe_emacs_main_Probe_StatPeriod;              /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD */
    ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO_t               Probe_emacs_main_Probe_StatGo;                  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO */
    ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN_t         Probe_emacs_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN */
    ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX_t         Probe_emacs_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX */
    ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT_t        Probe_emacs_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT */
    ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR_t         Probe_emacs_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR */
    ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN_t          Probe_emacs_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN */
    volatile uint32_t                                 _pad_0x40_0x43;                                 /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE_t   Probe_emacs_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK_t    Probe_emacs_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW_t  Probe_emacs_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW */
    volatile uint32_t                                 _pad_0x50_0x53;                                 /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE_t    Probe_emacs_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE_t  Probe_emacs_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK_t   Probe_emacs_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE_t        Probe_emacs_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT_t          Probe_emacs_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN_t           Probe_emacs_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY_t       Probe_emacs_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY */
    volatile uint32_t                                 _pad_0x70_0x7f[4];                              /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE_t   Probe_emacs_main_Probe_Filters_1_RouteIdBase;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK_t    Probe_emacs_main_Probe_Filters_1_RouteIdMask;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW_t  Probe_emacs_main_Probe_Filters_1_AddrBase_Low;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW */
    volatile uint32_t                                 _pad_0x8c_0x8f;                                 /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE_t    Probe_emacs_main_Probe_Filters_1_WindowSize;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE_t  Probe_emacs_main_Probe_Filters_1_SecurityBase;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK_t   Probe_emacs_main_Probe_Filters_1_SecurityMask;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE_t        Probe_emacs_main_Probe_Filters_1_Opcode;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT_t          Probe_emacs_main_Probe_Filters_1_Status;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN_t           Probe_emacs_main_Probe_Filters_1_Length;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN */
    ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY_t       Probe_emacs_main_Probe_Filters_1_Urgency;       /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY */
    volatile uint32_t                                 _pad_0xac_0x133[34];                            /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL_t      Probe_emacs_main_Probe_Counters_0_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC_t          Probe_emacs_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD_t     Probe_emacs_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL_t          Probe_emacs_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL */
    volatile uint32_t                                 _pad_0x144_0x147;                               /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL_t      Probe_emacs_main_Probe_Counters_1_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC_t          Probe_emacs_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD_t     Probe_emacs_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL_t          Probe_emacs_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL */
    volatile uint32_t                                 _pad_0x158_0x15b;                               /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL_t      Probe_emacs_main_Probe_Counters_2_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC_t          Probe_emacs_main_Probe_Counters_2_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD_t     Probe_emacs_main_Probe_Counters_2_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL_t          Probe_emacs_main_Probe_Counters_2_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL */
    volatile uint32_t                                 _pad_0x16c_0x16f;                               /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL_t      Probe_emacs_main_Probe_Counters_3_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC_t          Probe_emacs_main_Probe_Counters_3_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD_t     Probe_emacs_main_Probe_Counters_3_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD */
    ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL_t          Probe_emacs_main_Probe_Counters_3_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL */
    volatile uint32_t                                 _pad_0x180_0x400[160];                          /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_PRB_EMACS_MAIN_PRB. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_PRB_s  ALT_NOC_MPU_PRB_EMACS_MAIN_PRB_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_PRB_EMACS_MAIN_PRB. */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_PRB_raw_s
{
    volatile uint32_t  Probe_emacs_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_PRB_EMACS_MAIN_COREID */
    volatile uint32_t  Probe_emacs_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_PRB_EMACS_MAIN_REVID */
    volatile uint32_t  Probe_emacs_main_Probe_MainCtl;                 /* ALT_NOC_MPU_PRB_EMACS_MAIN_MAINCTL */
    volatile uint32_t  Probe_emacs_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_PRB_EMACS_MAIN_CFGCTL */
    volatile uint32_t  Probe_emacs_main_Probe_TracePortSel;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEPORTSEL */
    volatile uint32_t  Probe_emacs_main_Probe_FilterLut;               /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTLUT */
    volatile uint32_t  Probe_emacs_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMEN */
    volatile uint32_t  Probe_emacs_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMSTAT */
    volatile uint32_t  Probe_emacs_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_PRB_EMACS_MAIN_TRACEALARMCLR */
    volatile uint32_t  Probe_emacs_main_Probe_StatPeriod;              /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATPERIOD */
    volatile uint32_t  Probe_emacs_main_Probe_StatGo;                  /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATGO */
    volatile uint32_t  Probe_emacs_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMIN */
    volatile uint32_t  Probe_emacs_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMMAX */
    volatile uint32_t  Probe_emacs_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMSTAT */
    volatile uint32_t  Probe_emacs_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMCLR */
    volatile uint32_t  Probe_emacs_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_PRB_EMACS_MAIN_STATALARMEN */
    uint32_t           _pad_0x40_0x43;                                 /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDBASE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ROUTEIDMSK */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_ADDRBASE_LOW */
    uint32_t           _pad_0x50_0x53;                                 /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_WINDOWSIZE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYBASE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_SECURITYMSK */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_OPCODE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_STAT */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_LEN */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_0_URGENCY */
    uint32_t           _pad_0x70_0x7f[4];                              /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_RouteIdBase;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDBASE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_RouteIdMask;   /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ROUTEIDMSK */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_AddrBase_Low;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_ADDRBASE_LOW */
    uint32_t           _pad_0x8c_0x8f;                                 /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_WindowSize;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_WINDOWSIZE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_SecurityBase;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYBASE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_SecurityMask;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_SECURITYMSK */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_Opcode;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_OPCODE */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_Status;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_STAT */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_Length;        /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_LEN */
    volatile uint32_t  Probe_emacs_main_Probe_Filters_1_Urgency;       /* ALT_NOC_MPU_PRB_EMACS_MAIN_FLTS_1_URGENCY */
    uint32_t           _pad_0xac_0x133[34];                            /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_0_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_PORTSEL */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_SRC */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_ALARMMOD */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_0_VAL */
    uint32_t           _pad_0x144_0x147;                               /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_1_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_PORTSEL */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_SRC */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_ALARMMOD */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_1_VAL */
    uint32_t           _pad_0x158_0x15b;                               /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_2_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_PORTSEL */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_2_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_SRC */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_2_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_ALARMMOD */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_2_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_2_VAL */
    uint32_t           _pad_0x16c_0x16f;                               /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_3_PortSel;      /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_PORTSEL */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_3_Src;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_SRC */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_3_AlarmMode;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_ALARMMOD */
    volatile uint32_t  Probe_emacs_main_Probe_Counters_3_Val;          /* ALT_NOC_MPU_PRB_EMACS_MAIN_CNTRS_3_VAL */
    uint32_t           _pad_0x180_0x400[160];                          /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_PRB_EMACS_MAIN_PRB. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_PRB_raw_s  ALT_NOC_MPU_PRB_EMACS_MAIN_PRB_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER
 * 
 */
/*
 * Register : Probe_emacs_main_TransactionStatProfiler_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                                
 * :-------|:-------|:---------|:------------------------------------------------------------
 *  [7:0]  | R      | 0xa      | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID  
 *  [31:8] | R      | 0xa6b796 | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_RESET      0xa
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_RESET      0xa6b796
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_RESET       0xa6b7960a
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_OFST        0x0

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                
 * :-------|:-------|:--------|:------------------------------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_OFST        0x4

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_En
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                      
 * :-------|:-------|:--------|:--------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                      
 * 
 */
/*
 * Field : EN
 * 
 * Register En is a 1-bit register that enables the transaction probe counter unit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_s
{
    uint32_t  EN :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_EN */
    uint32_t     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_OFST        0x8

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_Mode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                        
 * :-------|:-------|:--------|:----------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                        
 * 
 */
/*
 * Field : MODE
 * 
 * Register Mode sets the counting mode per observed port. Each bit per observation
 * port defines the incrementing mode. (Mode = 0 for Delay, Mode = 1 for Pending)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_s
{
    uint32_t  MODE :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_MOD */
    uint32_t       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_OFST        0xc

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_Thresholds_0_0
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                              
 * :-------|:-------|:--------|:--------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                              
 * 
 */
/*
 * Field : THRESHOLDS_0_0
 * 
 * Register Thresholds_i_j contains the threshold index "0" that allows computation
 * of threshold values.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_s
{
    uint32_t  THRESHOLDS_0_0 :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0 register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0 register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_OFST        0x2c

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_Thresholds_0_1
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                              
 * :-------|:-------|:--------|:--------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                              
 * 
 */
/*
 * Field : THRESHOLDS_0_1
 * 
 * Register Thresholds_i_j contains the threshold index "1" that allows computation
 * of threshold values.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_s
{
    uint32_t  THRESHOLDS_0_1 :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1 register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1 register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_OFST        0x30

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_Thresholds_0_2
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                              
 * :-------|:-------|:--------|:--------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                              
 * 
 */
/*
 * Field : THRESHOLDS_0_2
 * 
 * Register Thresholds_i_j contains the threshold index "2" that allows computation
 * of threshold values.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_s
{
    uint32_t  THRESHOLDS_0_2 :  2;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2 register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2 register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_OFST        0x34

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_OverflowStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                
 * :-------|:-------|:--------|:------------------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : OVERFLOWSTATUS
 * 
 * Bit n of register OverflowStatus is set to 1 if a start event occurs on observed
 * port n and eitherof the following conditions occurs: All tenure counters
 * allocated to the port are already in use. No tenure lines have been allocated to
 * the port. The number of bits in this register is equal to the value set for
 * parameter nObservable.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_s
{
    const uint32_t  OVERFLOWSTATUS :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OVFSTAT */
    uint32_t                       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_OFST        0x6c

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_OverflowReset
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                              
 * :-------|:-------|:--------|:----------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : OVERFLOWRESET
 * 
 * Register OverflowReset is a pulse register that clears overflow status bits per
 * observed port on each write access. OverflowReset = nObservable. Writing 0x2
 * clears the overflow status of observed port 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_s
{
    uint32_t  OVERFLOWRESET :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OVFRST */
    uint32_t                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_OFST        0x70

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_PendingEventMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                
 * :-------|:-------|:--------|:----------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                
 * 
 */
/*
 * Field : PENDINGEVENTMODE
 * 
 * Register pendingEventMode is a 1-bit register that configures the pending event
 * mode. When set to 0 (CYCLE), and when register mode is set to PENDING, the
 * pending event is generated on each cycle when the counter is greater than
 * zero.When set to 1 (STOP) the pending event is generated on each stop event.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_s
{
    uint32_t  PENDINGEVENTMODE :  1;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_PENDINGEVENTMOD */
    uint32_t                   : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_OFST        0x74

/*
 * Register : Probe_emacs_main_TransactionStatProfiler_PreScaler
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                    
 * :-------|:-------|:--------|:----------------------------------------------------------------
 *  [7:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER
 *  [31:8] | ???    | Unknown | *UNDEFINED*                                                    
 * 
 */
/*
 * Field : PRESCALER
 * 
 * 8Register Prescaler is an-bit pre-scaling register that accepts any pre-scaling
 * value between 1 (default) and 256. If set to 0, pre-scaling is disabled. If set
 * to any other supported value "n", the threshold counter value is divided by (n +
 * 1).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER register field value. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER field value from a register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_s
{
    uint32_t  PRESCALER :  8;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_PRESCALER */
    uint32_t            : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER register. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_OFST        0x78

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER.
 */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_s
{
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID_t           Probe_emacs_main_TransactionStatProfiler_Id_CoreId;         /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID_t            Probe_emacs_main_TransactionStatProfiler_Id_RevisionId;     /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN_t               Probe_emacs_main_TransactionStatProfiler_En;                /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD_t              Probe_emacs_main_TransactionStatProfiler_Mode;              /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD */
    volatile uint32_t                                              _pad_0x10_0x2b[7];                                          /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0_t   Probe_emacs_main_TransactionStatProfiler_Thresholds_0_0;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0 */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1_t   Probe_emacs_main_TransactionStatProfiler_Thresholds_0_1;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1 */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2_t   Probe_emacs_main_TransactionStatProfiler_Thresholds_0_2;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2 */
    volatile uint32_t                                              _pad_0x38_0x6b[13];                                         /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT_t          Probe_emacs_main_TransactionStatProfiler_OverflowStatus;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST_t           Probe_emacs_main_TransactionStatProfiler_OverflowReset;     /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD_t  Probe_emacs_main_TransactionStatProfiler_PendingEventMode;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD */
    ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER_t        Probe_emacs_main_TransactionStatProfiler_PreScaler;         /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER */
    volatile uint32_t                                              _pad_0x7c_0x80;                                             /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER. */
struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_raw_s
{
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_Id_CoreId;         /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_COREID */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_Id_RevisionId;     /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_REVID */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_En;                /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_EN */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_Mode;              /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_MOD */
    uint32_t           _pad_0x10_0x2b[7];                                          /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_Thresholds_0_0;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_0 */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_Thresholds_0_1;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_1 */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_Thresholds_0_2;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_THRESHOLDS_0_2 */
    uint32_t           _pad_0x38_0x6b[13];                                         /* *UNDEFINED* */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_OverflowStatus;    /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFSTAT */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_OverflowReset;     /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_OVFRST */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_PendingEventMode;  /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PENDINGEVENTMOD */
    volatile uint32_t  Probe_emacs_main_TransactionStatProfiler_PreScaler;         /* ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_PRESCALER */
    uint32_t           _pad_0x7c_0x80;                                             /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER. */
typedef volatile struct ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_raw_s  ALT_NOC_MPU_PRB_EMACS_MAIN_XACTSTATPROFILER_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_NOC_MPU_PRB_MPU_MAIN_PRB
 * 
 */
/*
 * Register : Probe_MPU_main_Probe_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                             
 * :-------|:-------|:---------|:-----------------------------------------
 *  [7:0]  | R      | 0x6      | ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID  
 *  [31:8] | R      | 0xc7360b | ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_RESET      0x6
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_RESET      0xc7360b
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_COREID.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_PRB_MPU_MAIN_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_PRB_MPU_MAIN_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_COREID. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_COREID_s  ALT_NOC_MPU_PRB_MPU_MAIN_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_RESET       0xc7360b06
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_COREID_OFST        0x0

/*
 * Register : Probe_MPU_main_Probe_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                             
 * :-------|:-------|:--------|:-----------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_REVID.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_PRB_MPU_MAIN_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_PRB_MPU_MAIN_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_REVID. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_REVID_s  ALT_NOC_MPU_PRB_MPU_MAIN_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_REVID_OFST        0x4

/*
 * Register : Probe_MPU_main_Probe_MainCtl
 * 
 * Register MainCtl contains probe global control bits. The register has seven bit
 * fields:
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN                    
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN                  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN                  
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN                   
 *  [4]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN                  
 *  [5]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP             
 *  [6]    | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD             
 *  [7]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TRACEEN
 * 
 * Register field TraceEn enables the probe to send filtered packets (Trace) on the
 * ObsTx observation output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : PAYLOADEN
 * 
 * Register field PayloadEn, when set to 1, enables traces to contain headers and
 * payload. When set ot 0, only headers are reported.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN_SET(value) (((value) << 2) & 0x00000004)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN_SET(value) (((value) << 3) & 0x00000008)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN_SET(value) (((value) << 4) & 0x00000010)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP_SET(value) (((value) << 5) & 0x00000020)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_MSB        6
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD_SET(value) (((value) << 6) & 0x00000040)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_MSB        7
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_s
{
    uint32_t        ERREN                     :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ERREN */
    uint32_t        TRACEEN                   :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_TRACEEN */
    uint32_t        PAYLOADEN                 :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_PAYLDEN */
    uint32_t        STATEN                    :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATEN */
    uint32_t        ALARMEN                   :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_ALARMEN */
    uint32_t        STATCONDDUMP              :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_STATCONDDUMP */
    const uint32_t  INTRUSIVEMODE             :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_INTRUSIVEMOD */
    uint32_t        FILTBYTEALWAYSCHAINABLEEN :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_FILTBYTEALWAYSCHAINABLEEN */
    uint32_t                                  : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_s  ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_OFST        0x8

/*
 * Register : Probe_MPU_main_Probe_CfgCtl
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                           
 * :-------|:-------|:--------|:---------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN
 *  [1]    | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT   
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : ACTIVE
 * 
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_s
{
    uint32_t        GLOBALEN :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_GLOBEN */
    const uint32_t  ACTIVE   :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_ACT */
    uint32_t                 : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_s  ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_OFST        0xc

/*
 * Register : Probe_MPU_main_Probe_FilterLut
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                           
 * :-------|:-------|:--------|:---------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_s
{
    uint32_t  FILTERLUT :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_FLTLUT */
    uint32_t            : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_OFST        0x14

/*
 * Register : Probe_MPU_main_Probe_TraceAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_s
{
    uint32_t  TRACEALARMEN :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_TRACEALARMEN */
    uint32_t               : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_s  ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_OFST        0x18

/*
 * Register : Probe_MPU_main_Probe_TraceAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [1:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_s
{
    const uint32_t  TRACEALARMSTATUS :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_TRACEALARMSTAT */
    uint32_t                         : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_s  ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_OFST        0x1c

/*
 * Register : Probe_MPU_main_Probe_TraceAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_s
{
    uint32_t  TRACEALARMCLR :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_TRACEALARMCLR */
    uint32_t                : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_s  ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_OFST        0x20

/*
 * Register : Probe_MPU_main_Probe_StatPeriod
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_s
{
    uint32_t  STATPERIOD :  5;  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_STATPERIOD */
    uint32_t             : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_s  ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_OFST        0x24

/*
 * Register : Probe_MPU_main_Probe_StatGo
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                           
 * :-------|:-------|:--------|:---------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATGO.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_s
{
    uint32_t  STATGO :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_STATGO */
    uint32_t         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATGO. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_s  ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_STATGO register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_OFST        0x28

/*
 * Register : Probe_MPU_main_Probe_StatAlarmMin
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_s
{
    uint32_t  STATALARMMIN : 32;  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_STATALARMMIN */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_s  ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_OFST        0x2c

/*
 * Register : Probe_MPU_main_Probe_StatAlarmMax
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_s
{
    uint32_t  STATALARMMAX : 32;  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_STATALARMMAX */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_s  ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_OFST        0x30

/*
 * Register : Probe_MPU_main_Probe_StatAlarmStatus
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                         
 * :-------|:-------|:--------|:-----------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_s
{
    const uint32_t  STATALARMSTATUS :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_STATALARMSTAT */
    uint32_t                        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_s  ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_OFST        0x34

/*
 * Register : Probe_MPU_main_Probe_StatAlarmClr
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_s
{
    uint32_t  STATALARMCLR :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_STATALARMCLR */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_s  ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_OFST        0x38

/*
 * Register : Probe_MPU_main_Probe_StatAlarmEn
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                     
 * :-------|:-------|:--------|:-------------------------------------------------
 *  [0]    | RW     | 0x1     | ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_RESET      0x1
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_s
{
    uint32_t  STATALARMEN :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_STATALARMEN */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_s  ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_RESET       0x00000001
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_OFST        0x3c

/*
 * Register : Probe_MPU_main_Probe_Filters_0_RouteIdBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                   
 * :--------|:-------|:--------|:---------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_s
{
    uint32_t  FILTERS_0_ROUTEIDBASE : 19;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_FLTS_0_ROUTEIDBASE */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_OFST        0x44

/*
 * Register : Probe_MPU_main_Probe_Filters_0_RouteIdMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                 
 * :--------|:-------|:--------|:-------------------------------------------------------------
 *  [18:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_MSB        18
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_WIDTH      19
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_CLR_MSK    0xfff80000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK_SET(value) (((value) << 0) & 0x0007ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_s
{
    uint32_t  FILTERS_0_ROUTEIDMASK : 19;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_FLTS_0_ROUTEIDMSK */
    uint32_t                        : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_OFST        0x48

/*
 * Register : Probe_MPU_main_Probe_Filters_0_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                     
 * :-------|:-------|:------|:-----------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_s
{
    uint32_t  FILTERS_0_ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_FLTS_0_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_OFST        0x4c

/*
 * Register : Probe_MPU_main_Probe_Filters_0_WindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                 
 * :-------|:-------|:--------|:-------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_s
{
    uint32_t  FILTERS_0_WINDOWSIZE :  6;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_FLTS_0_WINDOWSIZE */
    uint32_t                       : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_OFST        0x54

/*
 * Register : Probe_MPU_main_Probe_Filters_0_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                     
 * :-------|:-------|:--------|:-----------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_s
{
    uint32_t  FILTERS_0_SECURITYBASE :  3;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_FLTS_0_SECURITYBASE */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_OFST        0x58

/*
 * Register : Probe_MPU_main_Probe_Filters_0_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                   
 * :-------|:-------|:--------|:---------------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_s
{
    uint32_t  FILTERS_0_SECURITYMASK :  3;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_FLTS_0_SECURITYMSK */
    uint32_t                         : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_OFST        0x5c

/*
 * Register : Probe_MPU_main_Probe_Filters_0_Opcode
 * 
 * Packet Probe register Opcode is a 4-bit register that selects candidate packets
 * based on packet opcodes (0 disables the filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN  
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN  
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN
 *  [3]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN 
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * Selects WR packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : LOCKEN
 * 
 * Selects RDX-WR, RDL, WRC and Linked sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : URGEN
 * 
 * Selects URG packets (urgency).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_s
{
    uint32_t  RDEN   :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RDEN */
    uint32_t  WREN   :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_WREN */
    uint32_t  LOCKEN :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_LOCKEN */
    uint32_t  URGEN  :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_URGEN */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_OFST        0x60

/*
 * Register : Probe_MPU_main_Probe_Filters_0_Status
 * 
 * Register Status is 2-bit register that selects candidate packets based on packet
 * status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RSPEN
 * 
 * Selects RSP and FAIL-CONT status packets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_s
{
    uint32_t  REQEN :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_REQEN */
    uint32_t  RSPEN :  1;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RSPEN */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_OFST        0x64

/*
 * Register : Probe_MPU_main_Probe_Filters_0_Length
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                   
 * :-------|:-------|:--------|:-----------------------------------------------
 *  [3:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_MSB        3
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_WIDTH      4
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_SET_MSK    0x0000000f
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_CLR_MSK    0xfffffff0
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_s
{
    uint32_t  FILTERS_0_LENGTH :  4;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_FLTS_0_LEN */
    uint32_t                   : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_OFST        0x68

/*
 * Register : Probe_MPU_main_Probe_Filters_0_Urgency
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                           
 * :-------|:-------|:--------|:-------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_s
{
    uint32_t  FILTERS_0_URGENCY :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_FLTS_0_URGENCY */
    uint32_t                    : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_s  ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_OFST        0x6c

/*
 * Register : Probe_MPU_main_Probe_Counters_0_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_OFST        0x138

/*
 * Register : Probe_MPU_main_Probe_Counters_0_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_s
{
    uint32_t  COUNTERS_0_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_CNTRS_0_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_OFST        0x13c

/*
 * Register : Probe_MPU_main_Probe_Counters_0_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_s
{
    const uint32_t  COUNTERS_0_VAL : 16;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_CNTRS_0_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_OFST        0x140

/*
 * Register : Probe_MPU_main_Probe_Counters_1_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_OFST        0x14c

/*
 * Register : Probe_MPU_main_Probe_Counters_1_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_s
{
    uint32_t  COUNTERS_1_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_CNTRS_1_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_OFST        0x150

/*
 * Register : Probe_MPU_main_Probe_Counters_1_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_s
{
    const uint32_t  COUNTERS_1_VAL : 16;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_CNTRS_1_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_OFST        0x154

/*
 * Register : Probe_MPU_main_Probe_Counters_2_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_OFST        0x160

/*
 * Register : Probe_MPU_main_Probe_Counters_2_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_2_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_s
{
    uint32_t  COUNTERS_2_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_CNTRS_2_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_OFST        0x164

/*
 * Register : Probe_MPU_main_Probe_Counters_2_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                     
 * 
 */
/*
 * Field : COUNTERS_2_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_s
{
    const uint32_t  COUNTERS_2_VAL : 16;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_CNTRS_2_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_OFST        0x168

/*
 * Register : Probe_MPU_main_Probe_Counters_3_Src
 * 
 * Register CntSrc indicates the event source used to increment the counter.
 * Unassigned values (non-existing Press level or ExtEvent index, or unimplemented
 * Filter) are equivalent to OFF.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                  
 * :-------|:-------|:--------|:----------------------------------------------
 *  [4:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_MSB        4
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_WIDTH      5
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_s
{
    uint32_t  INTEVENT :  5;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_INTEVENT */
    uint32_t           : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_OFST        0x174

/*
 * Register : Probe_MPU_main_Probe_Counters_3_AlarmMode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                               
 * :-------|:-------|:--------|:-----------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                               
 * 
 */
/*
 * Field : COUNTERS_3_ALARMMODE
 * 
 * Register AlarmMode is a 2-bit register that is present when parameter
 * statisticsCounterAlarm is set to True. The register defines the statistics-alarm
 * behavior of the counter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_s
{
    uint32_t  COUNTERS_3_ALARMMODE :  2;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_CNTRS_3_ALARMMOD */
    uint32_t                       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_OFST        0x178

/*
 * Register : Probe_MPU_main_Probe_Counters_3_Val
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [15:0]  | R      | 0x0     | ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL
 *  [31:16] | ???    | Unknown | *UNDEFINED*                                     
 * 
 */
/*
 * Field : COUNTERS_3_VAL
 * 
 * Register Val is a read-only register that is always present. The register
 * containsthe statistics counter value either pending StatAlarm output, or when
 * statisticscollection is suspended subsequent to triggers or signal statSuspend.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_MSB        15
/* The width in bits of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_WIDTH      16
/* The mask used to set the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_RESET      0x0
/* Extracts the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL field value from a register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL register field value suitable for setting the register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_s
{
    const uint32_t  COUNTERS_3_VAL : 16;  /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_CNTRS_3_VAL */
    uint32_t                       : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_s  ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL register. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL register from the beginning of the component. */
#define ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_OFST        0x17c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_PRB_MPU_MAIN_PRB.
 */
struct ALT_NOC_MPU_PRB_MPU_MAIN_PRB_s
{
    ALT_NOC_MPU_PRB_MPU_MAIN_COREID_t               Probe_MPU_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_PRB_MPU_MAIN_COREID */
    ALT_NOC_MPU_PRB_MPU_MAIN_REVID_t                Probe_MPU_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_PRB_MPU_MAIN_REVID */
    ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL_t              Probe_MPU_main_Probe_MainCtl;                 /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL */
    ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL_t               Probe_MPU_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL */
    volatile uint32_t                               _pad_0x10_0x13;                               /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT_t               Probe_MPU_main_Probe_FilterLut;               /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT */
    ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN_t         Probe_MPU_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN */
    ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT_t       Probe_MPU_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT */
    ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR_t        Probe_MPU_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR */
    ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD_t           Probe_MPU_main_Probe_StatPeriod;              /* ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD */
    ALT_NOC_MPU_PRB_MPU_MAIN_STATGO_t               Probe_MPU_main_Probe_StatGo;                  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATGO */
    ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN_t         Probe_MPU_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN */
    ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX_t         Probe_MPU_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX */
    ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT_t        Probe_MPU_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT */
    ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR_t         Probe_MPU_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR */
    ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN_t          Probe_MPU_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN */
    volatile uint32_t                               _pad_0x40_0x43;                               /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE_t   Probe_MPU_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK_t    Probe_MPU_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW_t  Probe_MPU_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW */
    volatile uint32_t                               _pad_0x50_0x53;                               /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE_t    Probe_MPU_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE_t  Probe_MPU_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK_t   Probe_MPU_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE_t        Probe_MPU_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT_t          Probe_MPU_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN_t           Probe_MPU_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN */
    ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY_t       Probe_MPU_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY */
    volatile uint32_t                               _pad_0x70_0x137[50];                          /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC_t          Probe_MPU_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD_t     Probe_MPU_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL_t          Probe_MPU_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL */
    volatile uint32_t                               _pad_0x144_0x14b[2];                          /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC_t          Probe_MPU_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD_t     Probe_MPU_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL_t          Probe_MPU_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL */
    volatile uint32_t                               _pad_0x158_0x15f[2];                          /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC_t          Probe_MPU_main_Probe_Counters_2_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD_t     Probe_MPU_main_Probe_Counters_2_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL_t          Probe_MPU_main_Probe_Counters_2_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL */
    volatile uint32_t                               _pad_0x16c_0x173[2];                          /* *UNDEFINED* */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC_t          Probe_MPU_main_Probe_Counters_3_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD_t     Probe_MPU_main_Probe_Counters_3_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD */
    ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL_t          Probe_MPU_main_Probe_Counters_3_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL */
    volatile uint32_t                               _pad_0x180_0x400[160];                        /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_PRB_MPU_MAIN_PRB. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_PRB_s  ALT_NOC_MPU_PRB_MPU_MAIN_PRB_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_PRB_MPU_MAIN_PRB. */
struct ALT_NOC_MPU_PRB_MPU_MAIN_PRB_raw_s
{
    volatile uint32_t  Probe_MPU_main_Probe_Id_CoreId;               /* ALT_NOC_MPU_PRB_MPU_MAIN_COREID */
    volatile uint32_t  Probe_MPU_main_Probe_Id_RevisionId;           /* ALT_NOC_MPU_PRB_MPU_MAIN_REVID */
    volatile uint32_t  Probe_MPU_main_Probe_MainCtl;                 /* ALT_NOC_MPU_PRB_MPU_MAIN_MAINCTL */
    volatile uint32_t  Probe_MPU_main_Probe_CfgCtl;                  /* ALT_NOC_MPU_PRB_MPU_MAIN_CFGCTL */
    uint32_t           _pad_0x10_0x13;                               /* *UNDEFINED* */
    volatile uint32_t  Probe_MPU_main_Probe_FilterLut;               /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTLUT */
    volatile uint32_t  Probe_MPU_main_Probe_TraceAlarmEn;            /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMEN */
    volatile uint32_t  Probe_MPU_main_Probe_TraceAlarmStatus;        /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMSTAT */
    volatile uint32_t  Probe_MPU_main_Probe_TraceAlarmClr;           /* ALT_NOC_MPU_PRB_MPU_MAIN_TRACEALARMCLR */
    volatile uint32_t  Probe_MPU_main_Probe_StatPeriod;              /* ALT_NOC_MPU_PRB_MPU_MAIN_STATPERIOD */
    volatile uint32_t  Probe_MPU_main_Probe_StatGo;                  /* ALT_NOC_MPU_PRB_MPU_MAIN_STATGO */
    volatile uint32_t  Probe_MPU_main_Probe_StatAlarmMin;            /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMIN */
    volatile uint32_t  Probe_MPU_main_Probe_StatAlarmMax;            /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMMAX */
    volatile uint32_t  Probe_MPU_main_Probe_StatAlarmStatus;         /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMSTAT */
    volatile uint32_t  Probe_MPU_main_Probe_StatAlarmClr;            /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMCLR */
    volatile uint32_t  Probe_MPU_main_Probe_StatAlarmEn;             /* ALT_NOC_MPU_PRB_MPU_MAIN_STATALARMEN */
    uint32_t           _pad_0x40_0x43;                               /* *UNDEFINED* */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_RouteIdBase;   /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDBASE */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_RouteIdMask;   /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ROUTEIDMSK */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_AddrBase_Low;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_ADDRBASE_LOW */
    uint32_t           _pad_0x50_0x53;                               /* *UNDEFINED* */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_WindowSize;    /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_WINDOWSIZE */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_SecurityBase;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYBASE */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_SecurityMask;  /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_SECURITYMSK */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_Opcode;        /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_OPCODE */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_Status;        /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_STAT */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_Length;        /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_LEN */
    volatile uint32_t  Probe_MPU_main_Probe_Filters_0_Urgency;       /* ALT_NOC_MPU_PRB_MPU_MAIN_FLTS_0_URGENCY */
    uint32_t           _pad_0x70_0x137[50];                          /* *UNDEFINED* */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_0_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_SRC */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_0_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_ALARMMOD */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_0_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_0_VAL */
    uint32_t           _pad_0x144_0x14b[2];                          /* *UNDEFINED* */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_1_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_SRC */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_1_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_ALARMMOD */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_1_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_1_VAL */
    uint32_t           _pad_0x158_0x15f[2];                          /* *UNDEFINED* */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_2_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_SRC */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_2_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_ALARMMOD */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_2_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_2_VAL */
    uint32_t           _pad_0x16c_0x173[2];                          /* *UNDEFINED* */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_3_Src;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_SRC */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_3_AlarmMode;    /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_ALARMMOD */
    volatile uint32_t  Probe_MPU_main_Probe_Counters_3_Val;          /* ALT_NOC_MPU_PRB_MPU_MAIN_CNTRS_3_VAL */
    uint32_t           _pad_0x180_0x400[160];                        /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_PRB_MPU_MAIN_PRB. */
typedef volatile struct ALT_NOC_MPU_PRB_MPU_MAIN_PRB_raw_s  ALT_NOC_MPU_PRB_MPU_MAIN_PRB_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_MPU_PRB_H__ */

