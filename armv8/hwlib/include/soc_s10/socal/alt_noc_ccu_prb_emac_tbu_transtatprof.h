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

/* Altera - ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF */

#ifndef __ALT_SOCAL_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_H__
#define __ALT_SOCAL_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_H__

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
 * Component : NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF
 * 
 */
/*
 * Register : probe_emac_main_TransactionStatProfiler_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                                                                         
 * :-------|:-------|:---------|:-----------------------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0xa      | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID  
 *  [31:8] | R      | 0x8a245f | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_MSB        7
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_RESET      0xa
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_RESET      0x8a245f
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_s
{
    const volatile uint32_t  CORETYPEID   :  8;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORETYPEID */
    const volatile uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_CORECHECKSUM */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_RESET       0x8a245f0a
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_OFST        0x0

/*
 * Register : probe_emac_main_TransactionStatProfiler_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                                          
 * :-------|:-------|:------|:------------------------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID   
 *  [31:8] | R      | 0x148 | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_MSB        7
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_RESET      0x148
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_s
{
    const volatile uint32_t  USERID    :  8;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_USERID */
    const volatile uint32_t  FLEXNOCID : 24;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_RESET       0x00014800
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_OFST        0x4

/*
 * Register : probe_emac_main_TransactionStatProfiler_En
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                        
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_MSB        0
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_s
{
    volatile uint32_t  EN :  1;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_EN */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_OFST        0x8

/*
 * Register : probe_emac_main_TransactionStatProfiler_Mode
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                            
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_MSB        0
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_s
{
    volatile uint32_t  MODE :  1;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_MODE */
    uint32_t                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_OFST        0xc

/*
 * Register : probe_emac_main_TransactionStatProfiler_Thresholds_0_0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                                
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_MSB        1
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_SET(value) (((value) << 0) & 0x00000003)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_s
{
    volatile uint32_t  THRESHOLDS_0_0 :  2;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0 */
    uint32_t                          : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0 register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0 register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_OFST        0x2c

/*
 * Register : probe_emac_main_TransactionStatProfiler_Thresholds_0_1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                                
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_MSB        1
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_SET(value) (((value) << 0) & 0x00000003)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_s
{
    volatile uint32_t  THRESHOLDS_0_1 :  2;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1 */
    uint32_t                          : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1 register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1 register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_OFST        0x30

/*
 * Register : probe_emac_main_TransactionStatProfiler_Thresholds_0_2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                                
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_MSB        1
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_SET(value) (((value) << 0) & 0x00000003)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_s
{
    volatile uint32_t  THRESHOLDS_0_2 :  2;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2 */
    uint32_t                          : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2 register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2 register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_OFST        0x34

/*
 * Register : probe_emac_main_TransactionStatProfiler_OverflowStatus
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                                
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------------------------
 *  [0]    | R      | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_MSB        0
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_s
{
    const volatile uint32_t  OVERFLOWSTATUS :  1;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OVERFLOWSTATUS */
    uint32_t                                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_OFST        0x6c

/*
 * Register : probe_emac_main_TransactionStatProfiler_OverflowReset
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                              
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_MSB        0
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_s
{
    volatile uint32_t  OVERFLOWRESET :  1;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OVERFLOWRESET */
    uint32_t                         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_OFST        0x70

/*
 * Register : probe_emac_main_TransactionStatProfiler_PendingEventMode
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                                    
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_MSB        0
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_s
{
    volatile uint32_t  PENDINGEVENTMODE :  1;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_PENDINGEVENTMODE */
    uint32_t                            : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_OFST        0x74

/*
 * Register : probe_emac_main_TransactionStatProfiler_PreScaler
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                      
 * :-------|:-------|:--------|:--------------------------------------------------------------------------------------------------
 *  [7:0]  | RW     | 0x0     | ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_MSB        7
/* The width in bits of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER register field value. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER register field. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_RESET      0x0
/* Extracts the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER field value from a register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER register field value suitable for setting the register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER_SET(value) (((value) << 0) & 0x000000ff)

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
 * The struct declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_s
{
    volatile uint32_t  PRESCALER :  8;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_PRESCALER */
    uint32_t                     : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER register. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER register from the beginning of the component. */
#define ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_OFST        0x78

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
 * The struct declaration for register group ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF.
 */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_s
{
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID_t         probe_emac_main_TransactionStatProfiler_Id_CoreId;         /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID_t     probe_emac_main_TransactionStatProfiler_Id_RevisionId;     /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN_t                probe_emac_main_TransactionStatProfiler_En;                /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE_t              probe_emac_main_TransactionStatProfiler_Mode;              /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE */
    volatile uint32_t                                                                                          _pad_0x10_0x2b[7];                                         /* *UNDEFINED* */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_t    probe_emac_main_TransactionStatProfiler_Thresholds_0_0;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0 */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_t    probe_emac_main_TransactionStatProfiler_Thresholds_0_1;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1 */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_t    probe_emac_main_TransactionStatProfiler_Thresholds_0_2;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2 */
    volatile uint32_t                                                                                          _pad_0x38_0x6b[13];                                        /* *UNDEFINED* */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS_t    probe_emac_main_TransactionStatProfiler_OverflowStatus;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET_t     probe_emac_main_TransactionStatProfiler_OverflowReset;     /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE_t  probe_emac_main_TransactionStatProfiler_PendingEventMode;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE */
    volatile ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER_t         probe_emac_main_TransactionStatProfiler_PreScaler;         /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER */
    volatile uint32_t                                                                                          _pad_0x7c_0x80;                                            /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF. */
struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_raw_s
{
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_Id_CoreId;         /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_COREID */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_Id_RevisionId;     /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_ID_REVISIONID */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_En;                /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_EN */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_Mode;              /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_MODE */
    volatile uint32_t  _pad_0x10_0x2b[7];                                         /* *UNDEFINED* */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_Thresholds_0_0;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0 */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_Thresholds_0_1;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1 */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_Thresholds_0_2;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2 */
    volatile uint32_t  _pad_0x38_0x6b[13];                                        /* *UNDEFINED* */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_OverflowStatus;    /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWSTATUS */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_OverflowReset;     /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_OVERFLOWRESET */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_PendingEventMode;  /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PENDINGEVENTMODE */
    volatile uint32_t  probe_emac_main_TransactionStatProfiler_PreScaler;         /* ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_PROBE_EMAC_MAIN_TRANSACTIONSTATPROFILER_PRESCALER */
    volatile uint32_t  _pad_0x7c_0x80;                                            /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF. */
typedef struct ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_raw_s  ALT_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_CCU_PRB_EMAC_TBU_TRANSTATPROF_H__ */

