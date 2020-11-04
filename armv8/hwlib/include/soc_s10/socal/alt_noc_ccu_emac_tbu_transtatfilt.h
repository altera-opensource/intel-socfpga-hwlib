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

/* Altera - ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT */

#ifndef __ALT_SOCAL_NOC_CCU_EMAC_TBU_TRANSTATFILT_H__
#define __ALT_SOCAL_NOC_CCU_EMAC_TBU_TRANSTATFILT_H__

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
 * Component : NOC_CCU_EMAC_TBU_TRANSTATFILT
 * 
 */
/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                                                                     
 * :-------|:-------|:---------|:-------------------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x9      | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID  
 *  [31:8] | R      | 0xc050c0 | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_MSB        7
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_RESET      0x9
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_RESET      0xc050c0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_s
{
    const volatile uint32_t  CORETYPEID   :  8;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORETYPEID */
    const volatile uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_CORECHECKSUM */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_RESET       0xc050c009
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_OFST        0x0

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                                      
 * :-------|:-------|:------|:--------------------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID   
 *  [31:8] | R      | 0x148 | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_MSB        7
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_RESET      0x148
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_s
{
    const volatile uint32_t  USERID    :  8;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_USERID */
    const volatile uint32_t  FLEXNOCID : 24;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_RESET       0x00014800
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_OFST        0x4

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_Mode
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                        
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                                        
 * 
 */
/*
 * Field : MODE
 * 
 * Register Mode is a 1-bit register that sets the filtering mode as follows:
 * handshake Mode = 0 or latency Mode = 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_MSB        0
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_s
{
    volatile uint32_t  MODE :  1;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_MODE */
    uint32_t                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_OFST        0x8

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_AddrBase_Low
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                                        
 * :-------|:-------|:------|:----------------------------------------------------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW
 * 
 */
/*
 * Field : ADDRBASE_LOW
 * 
 * Address base LSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_s
{
    volatile uint32_t  ADDRBASE_LOW : 32;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_OFST        0xc

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_AddrBase_High
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                          
 * :-------|:-------|:--------|:------------------------------------------------------------------------------------------------------
 *  [8:0]  | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH
 *  [31:9] | ???    | Unknown | *UNDEFINED*                                                                                          
 * 
 */
/*
 * Field : ADDRBASE_HIGH
 * 
 * Address base MSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_MSB        8
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_WIDTH      9
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_SET_MSK    0x000001ff
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_CLR_MSK    0xfffffe00
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_GET(value) (((value) & 0x000001ff) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH_SET(value) (((value) << 0) & 0x000001ff)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_s
{
    volatile uint32_t  ADDRBASE_HIGH :  9;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_ADDRBASE_HIGH */
    uint32_t                         : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_OFST        0x10

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_AddrWindowSize
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                            
 * :-------|:-------|:--------|:--------------------------------------------------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                                                            
 * 
 */
/*
 * Field : ADDRWINDOWSIZE
 * 
 * Register AddrWindowSize contains the encoded address mask used to filter
 * packets: the effective Mask value is equal to ~(2**AddrWindowSize - 1). A packet
 * is a candidate when ReqInfo.Addr & AddrMask = AddrBase & AddrMask.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_s
{
    volatile uint32_t  ADDRWINDOWSIZE :  6;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_ADDRWINDOWSIZE */
    uint32_t                          : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_OFST        0x14

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_Opcode
 * 
 * This register selects candidate packets based on packet opcodes. (0 disables the
 * filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                          
 * :-------|:-------|:--------|:--------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN
 *  [1]    | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                          
 * 
 */
/*
 * Field : RDEN
 * 
 * When set to 1, selects RD requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * When set to 1, selects WR requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_s
{
    volatile uint32_t  RDEN :  1;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RDEN */
    volatile uint32_t  WREN :  1;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_WREN */
    uint32_t                : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_OFST        0x20

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_UserBase
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                                
 * :--------|:-------|:--------|:--------------------------------------------------------------------------------------------
 *  [28:0]  | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE
 *  [31:29] | ???    | Unknown | *UNDEFINED*                                                                                
 * 
 */
/*
 * Field : USERBASE
 * 
 * This register contains the User base used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_MSB        28
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_WIDTH      29
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_SET_MSK    0x1fffffff
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_CLR_MSK    0xe0000000
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_GET(value) (((value) & 0x1fffffff) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE_SET(value) (((value) << 0) & 0x1fffffff)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_s
{
    volatile uint32_t  USERBASE : 29;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_USERBASE */
    uint32_t                    :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_OFST        0x24

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_UserMask
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                                
 * :--------|:-------|:--------|:--------------------------------------------------------------------------------------------
 *  [28:0]  | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK
 *  [31:29] | ???    | Unknown | *UNDEFINED*                                                                                
 * 
 */
/*
 * Field : USERMASK
 * 
 * This register contains the User mask used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_MSB        28
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_WIDTH      29
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_SET_MSK    0x1fffffff
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_CLR_MSK    0xe0000000
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_GET(value) (((value) & 0x1fffffff) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK_SET(value) (((value) << 0) & 0x1fffffff)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_s
{
    volatile uint32_t  USERMASK : 29;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_USERMASK */
    uint32_t                    :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_OFST        0x28

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_SecurityBase
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                        
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                                        
 * 
 */
/*
 * Field : SECURITYBASE
 * 
 * This register contains the Security base used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_MSB        1
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE_SET(value) (((value) << 0) & 0x00000003)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_s
{
    volatile uint32_t  SECURITYBASE :  2;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_SECURITYBASE */
    uint32_t                        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_OFST        0x2c

/*
 * Register : emac_tbu_m_I_main_TransactionStatFilter_SecurityMask
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                                        
 * :-------|:-------|:--------|:----------------------------------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x0     | ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                                                        
 * 
 */
/*
 * Field : SECURITYMASK
 * 
 * This register contains the Security mask used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_MSB        1
/* The width in bits of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK register field value. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK register field. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_RESET      0x0
/* Extracts the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK field value from a register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK register field value suitable for setting the register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK_SET(value) (((value) << 0) & 0x00000003)

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
 * The struct declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_s
{
    volatile uint32_t  SECURITYMASK :  2;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_SECURITYMASK */
    uint32_t                        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK register. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK register from the beginning of the component. */
#define ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_OFST        0x30

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
 * The struct declaration for register group ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT.
 */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_s
{
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID_t       emac_tbu_m_I_main_TransactionStatFilter_Id_CoreId;       /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID_t   emac_tbu_m_I_main_TransactionStatFilter_Id_RevisionId;   /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE_t            emac_tbu_m_I_main_TransactionStatFilter_Mode;            /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW_t    emac_tbu_m_I_main_TransactionStatFilter_AddrBase_Low;    /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH_t   emac_tbu_m_I_main_TransactionStatFilter_AddrBase_High;   /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE_t  emac_tbu_m_I_main_TransactionStatFilter_AddrWindowSize;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE */
    volatile uint32_t                                                                                    _pad_0x18_0x1f[2];                                       /* *UNDEFINED* */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE_t          emac_tbu_m_I_main_TransactionStatFilter_Opcode;          /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE_t        emac_tbu_m_I_main_TransactionStatFilter_UserBase;        /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK_t        emac_tbu_m_I_main_TransactionStatFilter_UserMask;        /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE_t    emac_tbu_m_I_main_TransactionStatFilter_SecurityBase;    /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE */
    volatile ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK_t    emac_tbu_m_I_main_TransactionStatFilter_SecurityMask;    /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK */
    volatile uint32_t                                                                                    _pad_0x34_0x80[19];                                      /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT. */
struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_raw_s
{
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_Id_CoreId;       /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_COREID */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_Id_RevisionId;   /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ID_REVISIONID */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_Mode;            /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_MODE */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_AddrBase_Low;    /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_LOW */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_AddrBase_High;   /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRBASE_HIGH */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_AddrWindowSize;  /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_ADDRWINDOWSIZE */
    volatile uint32_t  _pad_0x18_0x1f[2];                                       /* *UNDEFINED* */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_Opcode;          /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_OPCODE */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_UserBase;        /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERBASE */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_UserMask;        /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_USERMASK */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_SecurityBase;    /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYBASE */
    volatile uint32_t  emac_tbu_m_I_main_TransactionStatFilter_SecurityMask;    /* ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_EMAC_TBU_M_I_MAIN_TRANSACTIONSTATFILTER_SECURITYMASK */
    volatile uint32_t  _pad_0x34_0x80[19];                                      /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT. */
typedef struct ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_raw_s  ALT_NOC_CCU_EMAC_TBU_TRANSTATFILT_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_CCU_EMAC_TBU_TRANSTATFILT_H__ */

