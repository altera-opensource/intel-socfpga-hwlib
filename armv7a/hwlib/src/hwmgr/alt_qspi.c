/******************************************************************************
*
* Copyright 2013,2017 Altera Corporation. All Rights Reserved.
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

/*
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/alt_qspi.c#2 $
 */

#include <string.h>
#include <stdio.h>
#include <inttypes.h>
#include <hwlib.h>
#include <alt_clock_manager.h>
#include <alt_qspi.h>
#include <socal/alt_qspi.h>
#include <socal/alt_rstmgr.h>
#include <socal/alt_sysmgr.h>
#include <socal/hps.h>
#include <socal/socal.h>
#include <alt_printf.h>
#include "alt_config.h"

#if defined (soc_a10)
#include "socal/alt_ecc_qspi.h"
#endif

#ifdef DEBUG_ALT_QSPI
  #define dprintf printf
#else
  #define dprintf null_printf
#endif

/* Determine size of an array */
#define ARRAY_COUNT(array) (sizeof(array) / sizeof(array[0]))

/* qspi_clk operating frequency range. */
#define ALT_QSPI_CLK_FREQ_MIN ((alt_freq_t)0)
#define ALT_QSPI_CLK_FREQ_MAX ((alt_freq_t)432000000)

/* ALT_QSPI_SUPPORT_MICRON_N25Q128 is being deprecated.
   Please use ALT_QSPI_SUPPORT_MICRON_128 in the future */
#if (ALT_QSPI_SUPPORT_MICRON_N25Q128==1)
#define ALT_QSPI_SUPPORT_MICRON_128 1
#endif

/* ALT_QSPI_SUPPORT_MICRON_N25Q512A and ALT_QSPI_SUPPORT_MICRON_MT25QL512A
   are being deprecated. Please use ALT_QSPI_SUPPORT_MICRON_512 
   in the future */
#if (ALT_QSPI_SUPPORT_MICRON_N25Q512A==1) || \
    (ALT_QSPI_SUPPORT_MICRON_MT25QL512A==1)
#define ALT_QSPI_SUPPORT_MICRON_512 1
#endif

/* ALT_QSPI_SUPPORT_MICRON_N25Q00AA, ALT_QSPI_SUPPORT_MICRON_MT25QL01GB
   and ALT_QSPI_SUPPORT_MICRON_MT25QU01GB are being deprecated. 
   Please use ALT_QSPI_SUPPORT_MICRON_1024 in the future */
#if (ALT_QSPI_SUPPORT_MICRON_N25Q00AA==1) || \
    (ALT_QSPI_SUPPORT_MICRON_MT25QL01GB==1) || \
    (ALT_QSPI_SUPPORT_MICRON_MT25QU01GB==1)
#define ALT_QSPI_SUPPORT_MICRON_1024 1
#endif

#if (ALT_QSPI_SUPPORT_ALL==1)
#define ALT_QSPI_SUPPORT_MICRON_M25P40          1
#define ALT_QSPI_SUPPORT_MICRON_M25P16          1
#define ALT_QSPI_SUPPORT_MICRON_M25PX16         1
#define ALT_QSPI_SUPPORT_SPANSION_S25FL116K     1
#define ALT_QSPI_SUPPORT_SPANSION_S25FL256S     1
#define ALT_QSPI_SUPPORT_SPANSION_S25FL512S     1
#define ALT_QSPI_SUPPORT_MACRONIX_MX25L25635    1
#define ALT_QSPI_SUPPORT_MACRONIX_MX66L51235    1
#define ALT_QSPI_SUPPORT_MICRON_128             1
#define ALT_QSPI_SUPPORT_MICRON_512             1
#define ALT_QSPI_SUPPORT_MICRON_1024            1
#define ALT_QSPI_SUPPORT_MICRON_2048            1

#elif  !(ALT_QSPI_SUPPORT_MICRON_M25P40==1)       && \
       !(ALT_QSPI_SUPPORT_MICRON_M25P16==1)       && \
       !(ALT_QSPI_SUPPORT_MICRON_M25PX16==1)      && \
       !(ALT_QSPI_SUPPORT_SPANSION_S25FL116K==1)  && \
       !(ALT_QSPI_SUPPORT_SPANSION_S25FL256S==1)  && \
       !(ALT_QSPI_SUPPORT_SPANSION_S25FL512S==1)  && \
       !(ALT_QSPI_SUPPORT_MACRONIX_MX25L25635==1) && \
       !(ALT_QSPI_SUPPORT_MACRONIX_MX66L51235==1) && \
       !(ALT_QSPI_SUPPORT_MICRON_128==1)          && \
       !(ALT_QSPI_SUPPORT_MICRON_512==1)          && \
       !(ALT_QSPI_SUPPORT_MICRON_1024==1)         && \
       !(ALT_QSPI_SUPPORT_MICRON_2048==1)

/* cyclone5 board - N25Q00AA
   arria5   board - N25Q512S
   arria10  board - MT25QU01GB */
/* Can't have alt_qpsi without supporting at least one qspi type */
#ifdef ALT_QSPI_SUPPORT_MICRON_512
#undef ALT_QSPI_SUPPORT_MICRON_512
#endif
#define ALT_QSPI_SUPPORT_MICRON_512 1

#ifdef ALT_QSPI_SUPPORT_MICRON_1024
#undef ALT_QSPI_SUPPORT_MICRON_1024
#endif
#define ALT_QSPI_SUPPORT_MICRON_1024 1

#endif


/* The set of all valid QSPI controller interrupt status mask values. */
#define ALT_QSPI_INT_STATUS_ALL ( \
        ALT_QSPI_INT_STATUS_MODE_FAIL         | \
        ALT_QSPI_INT_STATUS_UFL               | \
        ALT_QSPI_INT_STATUS_IDAC_OP_COMPLETE  | \
        ALT_QSPI_INT_STATUS_IDAC_OP_REJECT    | \
        ALT_QSPI_INT_STATUS_WR_PROT_VIOL      | \
        ALT_QSPI_INT_STATUS_ILL_AHB_ACCESS    | \
        ALT_QSPI_INT_STATUS_IDAC_WTRMK_TRIG   | \
        ALT_QSPI_INT_STATUS_RX_OVF            | \
        ALT_QSPI_INT_STATUS_TX_FIFO_NOT_FULL  | \
        ALT_QSPI_INT_STATUS_TX_FIFO_FULL      | \
        ALT_QSPI_INT_STATUS_RX_FIFO_NOT_EMPTY | \
        ALT_QSPI_INT_STATUS_RX_FIFO_FULL      | \
        ALT_QSPI_INT_STATUS_IDAC_RD_FULL        \
        )

#define ALT_QSPI_MAX_ERASE_CMDS      4
#define ALT_QSPI_ERASE_CHIP_SIZE     0xffffffff
#define ALT_QSPI_INIT_BAUDRATE_MHZ    25

/* Flash commands */
#define ALT_QSPI_STIG_OPCODE_WR_STAT_REG          (0x01)
#define ALT_QSPI_STIG_OPCODE_PP                   (0x02)
#define ALT_QSPI_STIG_OPCODE_READ                 (0x03)
#define ALT_QSPI_STIG_OPCODE_WRDIS                (0x04)
#define ALT_QSPI_STIG_OPCODE_RD_STAT_REG          (0x05)
#define ALT_QSPI_STIG_OPCODE_WREN                 (0x06)
#define ALT_QSPI_STIG_OPCODE_FASTREAD             (0x0B)
#define ALT_QSPI_STIG_OPCODE_4BYTE_WRITE          (0x12)
#define ALT_QSPI_STIG_OPCODE_4BYTE_READ           (0x13)
#define ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE         (0x20)
#define ALT_QSPI_STIG_OPCODE_SUBSEC32K_ERASE      (0x52)
#define ALT_QSPI_STIG_OPCODE_4BYTE_SEC_ERASE      (0x21)
#define ALT_QSPI_STIG_OPCODE_QUAD_PP              (0x32)
#define ALT_QSPI_STIG_OPCODE_4QUAD_WRITE          (0x34)
#define ALT_QSPI_STIG_OPCODE_FASTREAD_DUAL_OUTPUT (0x3B)
#define ALT_QSPI_STIG_OPCODE_4BYTE_BLOCK_ERASE    (0x5C)
#define ALT_QSPI_STIG_OPCODE_CHIP_ERASE           (0x60)
#define ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_OUTPUT (0x6B)
#define ALT_QSPI_STIG_OPCODE_RDID                 (0x9F)
#define ALT_QSPI_STIG_OPCODE_DUAL_PP              (0xA2)
#define ALT_QSPI_STIG_OPCODE_ENTER_4BYTE_MODE     (0xB7)
#define ALT_QSPI_STIG_OPCODE_FASTREAD_DUAL_IO     (0xBB)
#define ALT_QSPI_STIG_OPCODE_DIE_ERASE            (0xC4)
#define ALT_QSPI_STIG_OPCODE_WR_EXT_REG           (0xC5)
#define ALT_QSPI_STIG_OPCODE_BULK_ERASE           (0xC7)
#define ALT_QSPI_STIG_OPCODE_RD_EXT_REG           (0xC8)
#define ALT_QSPI_STIG_OPCODE_SEC_ERASE            (0xD8)
#define ALT_QSPI_STIG_OPCODE_4BYTE_Q_SEC_ERASE    (0xDC)
#define ALT_QSPI_STIG_OPCODE_EXIT_4BYTE_MODE      (0xE9)
#define ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO     (0xEB)
#define ALT_QSPI_STIG_OPCODE_4QUAD_READ           (0xEC)


typedef ALT_STATUS_CODE (*ALT_QSPI_INIT_FUNC_T)(void);
typedef ALT_STATUS_CODE (*ALT_QSPI_WAIT_FUNC_T)(uint32_t timeout);

typedef struct ALT_QSPI_DEV_CONFIG_s
{
    uint8_t                 manuf_id;
    uint8_t                 mem_type;
    uint8_t                 mem_cap;
    uint8_t                 ext_id_mask;
    uint8_t                 ext_id_val;
    uint32_t                clk_phase;
    uint32_t                clk_pol;
    uint32_t                max_freq_mhz;
    uint32_t                tshsl_ns;
    uint32_t                tsd2d_ns;
    uint32_t                tchsh_ns;
    uint32_t                tslch_ns;
    uint32_t                page_size;
    uint32_t                addr_size;
    ALT_QSPI_MODE_t         inst_type;
    uint32_t                read_op_code;
    ALT_QSPI_MODE_t         read_addr_xfer_type;
    ALT_QSPI_MODE_t         read_data_xfer_type;
    uint32_t                read_dummy_cycles;
    uint32_t                write_op_code;
    ALT_QSPI_MODE_t         write_addr_xfer_type;
    ALT_QSPI_MODE_t         write_data_xfer_type;
    uint32_t                write_dummy_cycles;
    uint8_t                 erase_count;
    uint32_t                erase_sizes[ALT_QSPI_MAX_ERASE_CMDS];
    uint8_t                 erase_cmds[ALT_QSPI_MAX_ERASE_CMDS];
    uint8_t                 erase_sector_idx;
    bool                    support_chip_erase;
    uint32_t                device_size;
    bool                    micron_multi_die;
    uint32_t                die_size;
    ALT_QSPI_INIT_FUNC_T    init_func;
    ALT_QSPI_WAIT_FUNC_T    wait_func;
    const char              *friendly_name;
} ALT_QSPI_DEV_CONFIG_t;

/* Device configuration */
static ALT_QSPI_DEV_CONFIG_t qspi_config;

/* Initial timing parameters - use very relaxed values */
#define ALT_QSPI_TSHSL_NS_DEF       (100)
#define ALT_QSPI_TSD2D_NS_DEF       (30)
#define ALT_QSPI_TCHSH_NS_DEF       (30)
#define ALT_QSPI_TSLCH_NS_DEF       (30)

/* Manufacturer ID Values */
#define ALT_QSPI_STIG_RDID_JEDECID_MICRON      (0x20)
#define ALT_QSPI_STIG_RDID_JEDECID_SPANSION    (0x01)
#define ALT_QSPI_STIG_RDID_JEDECID_MACRONIX    (0xC2)

/* JEDEC ID Macros */
#define ALT_QSPI_STIG_RDID_MANUF_ID_GET(value)  ((value[0] >>  0) & 0xff)
#define ALT_QSPI_STIG_RDID_MEM_TYPE_GET(value)  ((value[0] >>  8) & 0xff)
#define ALT_QSPI_STIG_RDID_MEM_CAP_GET(value)   ((value[0] >>  16) & 0xff)
#define ALT_QSPI_STIG_RDID_EXT_ID_GET(value)    ((value[1] >>  0) & 0xff)

/* Common instructions */

/* Macros for accessing Status Register fields */
#define ALT_QSPI_SR_WIP_GET(value)              ((value >> 0) & 0x1)

#define ALT_QSPI_TIMEOUT_INFINITE (0xffffffff)

/* static functions */
ALT_STATUS_CODE alt_qspi_stig_cmd(uint32_t opcode, uint32_t dummy, uint32_t timeout);
ALT_STATUS_CODE alt_qspi_stig_rd_cmd(uint8_t opcode, uint32_t dummy,
                                     uint32_t num_bytes, uint32_t * output,
                                     uint32_t timeout);
ALT_STATUS_CODE alt_qspi_stig_wr_cmd(uint8_t opcode, uint32_t dummy,
                                     uint32_t num_bytes, const uint32_t * input,
                                     uint32_t timeout);
ALT_STATUS_CODE alt_qspi_stig_addr_cmd(uint8_t opcode, uint32_t dummy,
                                       uint32_t address,
                                       uint8_t addrbytes,
                                       uint32_t timeout);

static ALT_STATUS_CODE alt_qspi_device_wren(void);
static ALT_STATUS_CODE alt_qspi_device_rdid(uint32_t * rdid);
ALT_STATUS_CODE alt_qspi_erase(uint32_t address, uint32_t size);

/****************************************************************************
*   Device Specific Code
****************************************************************************/


static ALT_STATUS_CODE alt_qspi_read_register(uint8_t opcode, uint8_t * reg);
static ALT_STATUS_CODE alt_qspi_sr_wait_write(uint32_t timeout);

#if (ALT_QSPI_SUPPORT_SPANSION_S25FL116K==1)
static ALT_STATUS_CODE alt_qspi_S25FL116K_enable(void);
#endif


#if (ALT_QSPI_SUPPORT_SPANSION_S25FL116K==1)
static ALT_STATUS_CODE alt_qspi_S25FL116K_enable(void);
#endif

#if (ALT_QSPI_SUPPORT_SPANSION_S25FL256S==1) || (ALT_QSPI_SUPPORT_SPANSION_S25FL512S==1)
static ALT_STATUS_CODE alt_qspi_S25FL256_S25FL512S_enable(void);
#endif


#if (ALT_QSPI_SUPPORT_MACRONIX_MX25L25635==1) || (ALT_QSPI_SUPPORT_MACRONIX_MX66L51235==1)
static ALT_STATUS_CODE alt_qspi_MX25L25635_MX66L51235_enable(void);
#endif


#if (ALT_QSPI_SUPPORT_MICRON_128==1)
static ALT_STATUS_CODE alt_qspi_N25Q128_enable(void);
#endif

#if (ALT_QSPI_SUPPORT_MICRON_512==1) || \
	(ALT_QSPI_SUPPORT_MICRON_1024==1) || \
	(ALT_QSPI_SUPPORT_MICRON_2048==1)
static ALT_STATUS_CODE alt_qspi_N25Q512A_N25Q00AA_enable(void);
static ALT_STATUS_CODE alt_qspi_N25Q512A_N25Q00AA_wait_write(uint32_t timeout);
#endif

static ALT_QSPI_DEV_CONFIG_t qspi_configs[] =
{
#if (ALT_QSPI_SUPPORT_MICRON_M25P40==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0x20, /* .mem_type */
        0x13, /* .mem_cap */
        0x00,  /* .ext_id_mask */
        0x00,  /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET,   /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        2,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD, /* .read_op_code */
        ALT_QSPI_MODE_SINGLE, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .read_data_xfer_type */
        8,    /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {64*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SEC_ERASE, ALT_QSPI_STIG_OPCODE_BULK_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        512*1024, /* .device_size  */
        false,/* .micron_multi_die */
        0,    /* die-size */
        NULL, /* init function */
        alt_qspi_sr_wait_write, /* .wait_func */
        "MICRON_M25P40"
    },
#endif

#if (ALT_QSPI_SUPPORT_MICRON_M25P16)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0x20, /* .mem_type */
        0x15, /* .mem_cap */
        0x00,  /* .ext_id_mask */
        0x00,  /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        2,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD, /* .read_op_code */
        ALT_QSPI_MODE_SINGLE, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .read_data_xfer_type */
        8,    /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {64*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SEC_ERASE, ALT_QSPI_STIG_OPCODE_BULK_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        2*1024*1024, /* .device_size  */
        false,/* .micron_multi_die */
        0,    /* die-size */
        NULL, /* init function */
        alt_qspi_sr_wait_write, /* .wait_func */
        "MICRON_M25P16"
    },
#endif

#if (ALT_QSPI_SUPPORT_MICRON_M25PX16==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0x71, /* .mem_type */
        0x15, /* .mem_cap */
        0x00,  /* .ext_id_mask */
        0x00,  /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        2,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_DUAL_OUTPUT, /* .read_op_code */
        ALT_QSPI_MODE_SINGLE, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_DUAL, /* .read_data_xfer_type */
        8,    /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_DUAL_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_DUAL, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        3,    /* .erase_count */
        {4*1024, 64*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_BULK_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        2*1024*1024, /* .device_size  */
        false,/* .micron_multi_die */
        0,    /* die-size */
        NULL, /* init function */
        alt_qspi_sr_wait_write, /* .wait_func */
        "MICRON_M25PX16"
    },
#endif

#if (ALT_QSPI_SUPPORT_SPANSION_S25FL116K==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_SPANSION, /* .manuf_id */
        0x40, /* .mem_type */
        0x15, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        2,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_OUTPUT, /* .read_op_code */
        ALT_QSPI_MODE_SINGLE, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        8,    /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        3,    /* .erase_count */
        {4*1024, 64*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_CHIP_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        2*1024*1024, /* .device_size  */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_S25FL116K_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "SPANSION_S25FL116K"
    },
#endif

#if (ALT_QSPI_SUPPORT_SPANSION_S25FL256S==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_SPANSION, /* .manuf_id */
        0x02, /* .mem_type */
        0x19, /* .mem_cap */
        0xff,  /* .ext_id_mask */
        0x00,  /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        512,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_4QUAD_READ, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        7,    /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_4QUAD_WRITE, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {256*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_4BYTE_Q_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_CHIP_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        32*1024*1024, /* .device_size  */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_S25FL256_S25FL512S_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "SPANSION_S25FL256S_256K_SECTOR"
    },
    {
        ALT_QSPI_STIG_RDID_JEDECID_SPANSION, /* .manuf_id */
        0x02, /* .mem_type */
        0x19, /* .mem_cap */
        0xff,  /* .ext_id_mask */
        0x01,  /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_4QUAD_READ, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        7,    /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_4QUAD_WRITE, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {64*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_4BYTE_Q_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_CHIP_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        32*1024*1024, /* .device_size  */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_S25FL256_S25FL512S_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "SPANSION_S25FL256S_64K_SECTOR"
    },
#endif

#if (ALT_QSPI_SUPPORT_SPANSION_S25FL512S==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_SPANSION,  /* .manuf_id */
        0x02,  /* .mem_type */
        0x20,  /* .mem_cap */
        0xff,  /* .ext_id_mask */
        0x00,  /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        512,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_4QUAD_READ, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        7,    /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_4QUAD_WRITE, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {256*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_4BYTE_Q_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_CHIP_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        64*1024*1024, /* .device_size  */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_S25FL256_S25FL512S_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "SPANSION_S25FL512S"
    },
#endif

#if (ALT_QSPI_SUPPORT_MACRONIX_MX25L25635==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MACRONIX, /* .manuf_id */
        0x20, /* .mem_type */
        0x19, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_4QUAD_READ, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        6,    /* .read_dummy_cycles */
        0x3E, /* .write_op_code */
        ALT_QSPI_MODE_QUAD, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        4,    /* .erase_count */
        {4*1024, 32*1024, 64*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_4BYTE_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_4BYTE_BLOCK_ERASE,
         ALT_QSPI_STIG_OPCODE_4BYTE_Q_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_CHIP_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        32*1024*1024, /* .device_size */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_MX25L25635_MX66L51235_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "MACRONIX_MX25L25635"
    },
#endif

#if (ALT_QSPI_SUPPORT_MACRONIX_MX66L51235==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MACRONIX, /* .manuf_id */
        0x20, /* .mem_type */
        0x1A, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_4QUAD_READ, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        6,    /* .read_dummy_cycles */
        0x3E, /* .write_op_code */
        ALT_QSPI_MODE_QUAD, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        4,    /* .erase_count */
        {4*1024, 32*1024, 64*1024, ALT_QSPI_ERASE_CHIP_SIZE}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_4BYTE_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_4BYTE_BLOCK_ERASE,
         ALT_QSPI_STIG_OPCODE_4BYTE_Q_SEC_ERASE,
         ALT_QSPI_STIG_OPCODE_CHIP_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        true, /* .support_chip_erase */
        64*1024*1024, /* .device_size */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_MX25L25635_MX66L51235_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "MACRONIX_MX66L51235"
    },
#endif


#if (ALT_QSPI_SUPPORT_MICRON_128==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBA, /* .mem_type */
        0x18, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        2,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        1,    /* .erase_count */
        {64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        false, /* .support_chip_erase */
        16*1024*1024, /* .device_size */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_N25Q128_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "MICRON_128L"
    },
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBB, /* .mem_type */
        0x18, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_RESET, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_RESET, /* .clk_pol */
        50,   /* .max_freq_mhz */
        100,  /* .tshsl_ns */
        30,   /* .tsd2d_ns */
        30,   /* .tchsh_ns */
        30,   /* .tslch_ns */
        256,  /* .page_size */
        2,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        1,    /* .erase_count */
        {64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        0,    /* .erase_sector_idx */
        false, /* .support_chip_erase */
        16*1024*1024, /* .device_size */
        false,/* .micron_multi_die */
        0,    /* die-size */
        alt_qspi_N25Q128_enable, /* .init_func */
        alt_qspi_sr_wait_write, /* .wait_func */
        "MICRON_128U"
    },
#endif

#if (ALT_QSPI_SUPPORT_MICRON_512==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBA, /* .mem_type */
        0x20, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_E_ACT, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_E_HIGH,   /* .clk_pol */
        56,   /* .max_freq_mhz */
        50,   /* .tshsl_ns */
        0,    /* .tsd2d_ns */
        10,   /* .tchsh_ns */
        10,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {4*1024, 64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        false,/* .support_chip_erase */
        64*1024*1024, /* .device_size */
        true, /* .micron_multi_die */
        32*1024*1024, /* .die_size */
        alt_qspi_N25Q512A_N25Q00AA_enable, /* .init_func */
        alt_qspi_N25Q512A_N25Q00AA_wait_write, /* .wait_func */
        "MICRON_512L"
    },
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBB, /* .mem_type */
        0x20, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_E_ACT, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_E_HIGH,   /* .clk_pol */
        56,   /* .max_freq_mhz */
        50,   /* .tshsl_ns */
        0,    /* .tsd2d_ns */
        10,   /* .tchsh_ns */
        10,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {4*1024, 64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        false,/* .support_chip_erase */
        64*1024*1024, /* .device_size */
        true, /* .micron_multi_die */
        32*1024*1024, /* .die_size */
        alt_qspi_N25Q512A_N25Q00AA_enable, /* .init_func */
        alt_qspi_N25Q512A_N25Q00AA_wait_write, /* .wait_func */
        "MICRON_512U"
    },
#endif

#if (ALT_QSPI_SUPPORT_MICRON_1024==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBA, /* .mem_type */
        0x21, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_E_ACT, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_E_HIGH,   /* .clk_pol */
        56,   /* .max_freq_mhz */
        50,   /* .tshsl_ns */
        0,    /* .tsd2d_ns */
        10,   /* .tchsh_ns */
        10,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {4*1024, 64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        false,/* .support_chip_erase */
        128*1024*1024, /* .device_size */
        true, /* .micron_multi_die */
        32*1024*1024, /* .die_size */
        alt_qspi_N25Q512A_N25Q00AA_enable, /* .init_func */
        alt_qspi_N25Q512A_N25Q00AA_wait_write, /* .wait_func */
        "MICRON_1024L"
    },
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBB, /* .mem_type */
        0x21, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_E_ACT, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_E_HIGH,   /* .clk_pol */
        56,   /* .max_freq_mhz */
        50,   /* .tshsl_ns */
        0,    /* .tsd2d_ns */
        10,   /* .tchsh_ns */
        10,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {4*1024, 64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        false,/* .support_chip_erase */
        128*1024*1024, /* .device_size */
        true, /* .micron_multi_die */
        32*1024*1024, /* .die_size */
        alt_qspi_N25Q512A_N25Q00AA_enable, /* .init_func */
        alt_qspi_N25Q512A_N25Q00AA_wait_write, /* .wait_func */
        "MICRON_1024U"
    },
#endif

#if (ALT_QSPI_SUPPORT_MICRON_2048==1)
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBA, /* .mem_type */
        0x22, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_E_ACT, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_E_HIGH,   /* .clk_pol */
        56,   /* .max_freq_mhz */
        50,   /* .tshsl_ns */
        0,    /* .tsd2d_ns */
        10,   /* .tchsh_ns */
        10,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {4*1024, 64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        false,/* .support_chip_erase */
        256*1024*1024, /* .device_size */
        true, /* .micron_multi_die */
        32*1024*1024, /* .die_size */
        alt_qspi_N25Q512A_N25Q00AA_enable, /* .init_func */
        alt_qspi_N25Q512A_N25Q00AA_wait_write, /* .wait_func */
        "MICRON_2048L"
    },
    {
        ALT_QSPI_STIG_RDID_JEDECID_MICRON, /* .manuf_id */
        0xBB, /* .mem_type */
        0x22, /* .mem_cap */
        0x00, /* .ext_id_mask */
        0x00, /* .ext_id_val */
        ALT_QSPI_CFG_SELCLKPHASE_E_ACT, /* .clk_phase */
        ALT_QSPI_CFG_SELCLKPOL_E_HIGH,   /* .clk_pol */
        56,   /* .max_freq_mhz */
        50,   /* .tshsl_ns */
        0,    /* .tsd2d_ns */
        10,   /* .tchsh_ns */
        10,   /* .tslch_ns */
        256,  /* .page_size */
        3,    /* .addr_size */
        ALT_QSPI_MODE_SINGLE, /* .inst_type */
        ALT_QSPI_STIG_OPCODE_FASTREAD_QUAD_IO, /* .read_op_code */
        ALT_QSPI_MODE_QUAD, /* .read_addr_xfer_type */
        ALT_QSPI_MODE_QUAD, /* .read_data_xfer_type */
        10,   /* .read_dummy_cycles */
        ALT_QSPI_STIG_OPCODE_PP, /* .write_op_code */
        ALT_QSPI_MODE_SINGLE, /* .write_addr_xfer_type */
        ALT_QSPI_MODE_SINGLE, /* .write_data_xfer_type */
        0,    /* .write_dummy_cycles */
        2,    /* .erase_count */
        {4*1024, 64*1024}, /* .erase_sizes */
        {ALT_QSPI_STIG_OPCODE_SUBSEC_ERASE,
         ALT_QSPI_STIG_OPCODE_SEC_ERASE}, /* .erase_cmds */
        1,    /* .erase_sector_idx */
        false,/* .support_chip_erase */
        256*1024*1024, /* .device_size */
        true, /* .micron_multi_die */
        32*1024*1024, /* .die_size */
        alt_qspi_N25Q512A_N25Q00AA_enable, /* .init_func */
        alt_qspi_N25Q512A_N25Q00AA_wait_write, /* .wait_func */
        "MICRON_2048U"
    },
#endif


};

#if (ALT_QSPI_SUPPORT_SPANSION_S25FL116K==1)

static ALT_STATUS_CODE alt_qspi_S25FL116K_enable(void)
{

    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint8_t sr[4];

    /* Read SR1 */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_read_register(0x05, &sr[0]);
    }

    /* Read SR2 */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_read_register(0x35, &sr[1]);
    }

    /* Read SR3 */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_read_register(0x33, &sr[2]);
    }

    if(status == ALT_E_SUCCESS)
    {
        /* Enable Quad Mode */
        sr[1] |= 0x2;

        /* Use default Latencies */
        sr[2] &= ~0xF;

        /* Write Enable for Volatile Status Register */
        status = alt_qspi_stig_cmd(0x50, 0, ALT_QSPI_TIMEOUT_INFINITE);
    }


    /* Write Status Register */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_stig_wr_cmd(0x01, 0, 3, (uint32_t*)&sr, ALT_QSPI_TIMEOUT_INFINITE);
    }

    /* Poll for completion */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_sr_wait_write(ALT_QSPI_TIMEOUT_INFINITE);
    }

    return status;
}
#endif

#if (ALT_QSPI_SUPPORT_SPANSION_S25FL256S==1) || (ALT_QSPI_SUPPORT_SPANSION_S25FL512S==1)

ALT_STATUS_CODE alt_qspi_S25FL256_S25FL512S_enable(void)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint8_t regs[2];

    /* Read CR */
    status = alt_qspi_read_register(0x35, &regs[1]);

    /* Return if Quad mode already set
     * and Latencycode is already at b10 (0x80) */
    if((status == ALT_E_SUCCESS) && (regs[1] & 0x02) && ((regs[1] & 0xc0) == 0x80))
    {
        return status;
    }

    /* Read SR */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_read_register(0x05, &regs[0]);
    }

    /* Write enable */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_device_wren();
    }

    /* Write registers */
    if(status == ALT_E_SUCCESS)
    {
        regs[1] = (regs[1] & 0x3f) | 0x02 | 0x80;
        status = alt_qspi_stig_wr_cmd(0x01, 0, 2, (uint32_t*)regs, ALT_QSPI_TIMEOUT_INFINITE);
    }

    /* Wait for completion */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_sr_wait_write(ALT_QSPI_TIMEOUT_INFINITE);
    }

    return status;
}
#endif

#if (ALT_QSPI_SUPPORT_MICRON_512==1) || \
	(ALT_QSPI_SUPPORT_MICRON_1024==1) || \
	(ALT_QSPI_SUPPORT_MICRON_2048)
/* Micron commands, for 512 Mib, 1 Gib (64 MiB, 128 MiB), 2Gib parts. */
#define ALT_QSPI_STIG_OPCODE_N25Q512A_RESET_EN             (0x66)
#define ALT_QSPI_STIG_OPCODE_N25Q512A_RESET_MEM            (0x99)
#define ALT_QSPI_STIG_OPCODE_N25Q512A_RDFLGSR              (0x70)
#define ALT_QSPI_STIG_OPCODE_N25Q512A_CLRFLGSR             (0x50)
#define ALT_QSPI_STIG_OPCODE_N25Q512A_DISCVR_PARAM         (0x5A)

static ALT_STATUS_CODE alt_qspi_N25Q512A_N25Q00AA_enable(void)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    /* Reset the volatile memory on the N25Q */

    if (status == ALT_E_SUCCESS)
    {
        status = alt_qspi_stig_cmd(ALT_QSPI_STIG_OPCODE_N25Q512A_RESET_EN, 0, ALT_QSPI_TIMEOUT_INFINITE);
    }

    /* Reset memory */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_qspi_stig_cmd(ALT_QSPI_STIG_OPCODE_N25Q512A_RESET_MEM, 0, ALT_QSPI_TIMEOUT_INFINITE);
    }

    /* Write enable */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_device_wren();
    }

    /* Switch to 4 byte mode */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_qspi_stig_cmd(ALT_QSPI_STIG_OPCODE_ENTER_4BYTE_MODE, 0, 10000);
    }

    return status;
}

static ALT_STATUS_CODE alt_qspi_N25Q512A_N25Q00AA_wait_write(uint32_t time_out)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint8_t fsr = 0;
    bool infinite = (time_out == ALT_QSPI_TIMEOUT_INFINITE);

    /* Wait for the status register as for the other devices */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_sr_wait_write(time_out);
    }

    /* Wait for the flag status register */
    if(status == ALT_E_SUCCESS)
    {
    	do
	{
            /*Read flag status register */
	    status = alt_qspi_read_register(ALT_QSPI_STIG_OPCODE_N25Q512A_RDFLGSR, &fsr);
	    if (status != ALT_E_SUCCESS)
	    {
	        break;
            }
	    if (fsr & 0x80)
	    {
	        break;
	    }
	}
        while (time_out-- || infinite);
    }
    else
    {
	return status;
    }

    if (time_out == (uint32_t)-1 && !infinite)
    {
        status = ALT_E_TMO;
    }

    return status;

}
#endif

#if (ALT_QSPI_SUPPORT_MICRON_128==1)
#define ALT_QSPI_STIG_REGISTER_N25Q128_VECR  (0x65)
#define ALT_QSPI_STIG_OPCODE_N25Q128_WRVECR    (0x61)
#define ALT_QSPI_STIG_REGISTER_N25Q128_VCR   (0x85)
#define ALT_QSPI_STIG_OPCODE_N25Q128_WRVCR     (0x81)

static ALT_STATUS_CODE alt_qspi_N25Q128_enable(void)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t data_vecr;
    uint32_t data_vcr;
    uint8_t * vecr = (uint8_t*)&data_vecr;
    uint8_t * vcr = (uint8_t*)&data_vcr;

    /* Read VECR */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_read_register(ALT_QSPI_STIG_REGISTER_N25Q128_VECR, vecr);
    }

    /* Write enable */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_device_wren();
    }

    /* Check if Reset/Hold pad functionality is not disabled */
    if((status == ALT_E_SUCCESS) && (*vecr & 0x10))
    {

        /* Disable Reset/Hold pad functionality */
        *vecr &= ~0x10;
        status = alt_qspi_stig_wr_cmd(ALT_QSPI_STIG_OPCODE_N25Q128_WRVECR, 0, 1, (uint32_t*)vecr, ALT_QSPI_TIMEOUT_INFINITE);

        /* Wait for completion */
        if(status == ALT_E_SUCCESS)
        {
            status = alt_qspi_sr_wait_write(ALT_QSPI_TIMEOUT_INFINITE);
        }
    }

    /* Read VECR */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_read_register(ALT_QSPI_STIG_REGISTER_N25Q128_VCR, vcr);
    }

    /* Write enable */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_device_wren();
    }

    /* Check if dummy bits are not already set to 10 */
    if((status == ALT_E_SUCCESS) && (0xA0 != (*vcr & 0xF0)))
    {
        /* Set dummy bits to 10 */
        *vcr &= ~0xF0;
        *vcr |= 0xA0;
        status = alt_qspi_stig_wr_cmd(ALT_QSPI_STIG_OPCODE_N25Q128_WRVCR, 0, 1, (uint32_t*)vcr, ALT_QSPI_TIMEOUT_INFINITE);

        /* Wait for completion */
        if(status == ALT_E_SUCCESS)
        {
            status = alt_qspi_sr_wait_write(ALT_QSPI_TIMEOUT_INFINITE);
        }
    }

    return status;
}
#endif

#if (ALT_QSPI_SUPPORT_MACRONIX_MX25L25635==1) || (ALT_QSPI_SUPPORT_MACRONIX_MX66L51235==1)

static ALT_STATUS_CODE alt_qspi_MX25L25635_MX66L51235_enable(void)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t data;
    uint8_t * sr = (uint8_t*)&data;

    /* Read SR */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_read_register(ALT_QSPI_STIG_OPCODE_RD_STAT_REG, sr);
    }

    /* Return if quad mode already enabled */
    if((status==ALT_E_SUCCESS) && (*sr & 0x40))
    {
        return status;
    }

    /* Enable quad mode */
    if(status == ALT_E_SUCCESS)
    {
        *sr |= 0x40;
        status = alt_qspi_stig_wr_cmd(ALT_QSPI_STIG_OPCODE_WR_STAT_REG, 0, 1, (uint32_t*)sr, ALT_QSPI_TIMEOUT_INFINITE);
    }

    /* Wait for completion */
    if(status == ALT_E_SUCCESS)
    {
        status = alt_qspi_sr_wait_write(ALT_QSPI_TIMEOUT_INFINITE);
    }

    return status;
}
#endif

static ALT_STATUS_CODE alt_qspi_configure_device(ALT_QSPI_DEV_CONFIG_t * qspi_config)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t rdid[2];
    uint8_t manuf_id;
    uint8_t mem_type;
    uint8_t mem_cap;
    uint8_t ext_id;
    uint32_t i;

    /* Query device capabilities */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_qspi_device_rdid(rdid);
        if (status != ALT_E_SUCCESS)
        {
            dprintf("DEBUG[QSPI]: get_device_id failed.\n");
        }
        else
        {
            dprintf("DEBUG[QSPI]: rdid[0] = 0x%08x.\n", (int)rdid[0]);
            dprintf("DEBUG[QSPI]: rdid[1] = 0x%08x.\n", (int)rdid[1]);
        }
    }

    if (status == ALT_E_SUCCESS)
    {
        manuf_id = ALT_QSPI_STIG_RDID_MANUF_ID_GET(rdid);
        mem_type = ALT_QSPI_STIG_RDID_MEM_TYPE_GET(rdid);
        mem_cap = ALT_QSPI_STIG_RDID_MEM_CAP_GET(rdid);
        ext_id = ALT_QSPI_STIG_RDID_EXT_ID_GET(rdid);

        for(i=0; i<ARRAY_COUNT(qspi_configs); i++)
        {
            /* skip entry if parameters do not match */
            if(qspi_configs[i].manuf_id != manuf_id)
            {
                continue;
            }
            if(qspi_configs[i].mem_type != mem_type)
            {
                continue;
            }
            if(qspi_configs[i].mem_cap != mem_cap)
            {
                continue;
            }
            if(qspi_configs[i].ext_id_val != (ext_id & qspi_configs[i].ext_id_mask))
            {
                continue;
            }

            /* found it */
            *qspi_config = qspi_configs[i];

            dprintf("DEBUG[QSPI]: detected device = %s.\n", qspi_config->friendly_name);

            /* If enabled, add the QSPI device size to the list of erasable sizes */
            if((status == ALT_E_SUCCESS) && (qspi_config->support_chip_erase))
            {
                qspi_config->erase_sizes[qspi_config->erase_count -1] = qspi_config->device_size;
            }

            return ALT_E_SUCCESS;

        }

        status = ALT_E_ERROR;

        dprintf("DEBUG[QSPI]: could not match device to database:\n");
        dprintf("DEBUG[QSPI]: manuf_id = 0x%02x:\n", (int)manuf_id);
        dprintf("DEBUG[QSPI]: mem_type = 0x%02x:\n", (int)mem_type);
        dprintf("DEBUG[QSPI]: mem_cap  = 0x%02x:\n", (int)mem_cap);
        dprintf("DEBUG[QSPI]: ext_id   = 0x%02x:\n", (int)ext_id);
    }

    return status;
}

static ALT_STATUS_CODE alt_qspi_read_register(uint8_t opcode, uint8_t * reg)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t data = 0;

    status = alt_qspi_stig_rd_cmd(opcode, 0, 1, &data, ALT_QSPI_TIMEOUT_INFINITE);
    *reg = (uint8_t)data;

    return status;
}

static ALT_STATUS_CODE alt_qspi_sr_wait_write(uint32_t timeout)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    uint8_t sr = 0;
    bool infinite = (timeout == ALT_QSPI_TIMEOUT_INFINITE);

    do 
    {
        status = alt_qspi_read_register(ALT_QSPI_STIG_OPCODE_RD_STAT_REG, &sr);
        if (status != ALT_E_SUCCESS)
        {
            break;
        }
        if (!ALT_QSPI_SR_WIP_GET(sr)) 
        {
            break;
        }
    } while (timeout-- || infinite);

    if (timeout == (uint32_t) -1 && !infinite) 
    {
        status = ALT_E_TMO;
    }

    return status;
}

/***************************************************************************
* Generic Function
***************************************************************************/

static ALT_STATUS_CODE alt_qspi_erase_helper(uint32_t address, uint32_t idx);
static ALT_STATUS_CODE alt_qspi_read_helper(void * dst, uint32_t src, size_t size);
static ALT_STATUS_CODE alt_qspi_write_helper(uint32_t dst, const void * src, size_t size);

/*
 * A helper function which converts a ns interval into a delay interval for a given MHz.
 * The +999 is there to round up the result.
 */
static __inline int alt_qspi_ns_to_multiplier(int ns, int mhz) 
{
    return ((ns * mhz) + 999) / 1000;
}

ALT_STATUS_CODE alt_qspi_init(void) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    alt_freq_t qspi_clk_freq = 0;
    ALT_QSPI_BAUD_DIV_t div_bits;
    uint32_t ALT_QSPI_RESET_TMO = 10000;
    /* Validate QSPI module input clocks.
    /  - pclk    - l4_mp_clk
    /  - hclk    - l4_mp_clk
    /  - ref_clk - qspi_clk */

    /* Check and validate the QSPI ref_clk which is connected to the HPS qspi_clk. */
    if (status == ALT_E_SUCCESS) 
    {
        if (alt_clk_is_enabled(ALT_CLK_QSPI) != ALT_E_TRUE) 
        {
            status = ALT_E_BAD_CLK;
        }
    }

    if (status == ALT_E_SUCCESS) 
    {
#if defined(soc_cv_av)
        status = alt_clk_freq_get(ALT_CLK_QSPI, &qspi_clk_freq);
#elif defined(soc_a10)
        status = alt_clk_freq_get_qspi(&qspi_clk_freq);
#endif
        if (status == ALT_E_SUCCESS) 
        {
            if (qspi_clk_freq > ALT_QSPI_CLK_FREQ_MAX) 
            {
                return ALT_E_BAD_CLK;
            }
        }
    }

    /* Take QSPI controller out of reset. */
#if defined(soc_cv_av)
    alt_clrbits_word(ALT_RSTMGR_PERMODRST_ADDR, ALT_RSTMGR_PERMODRST_QSPI_SET_MSK);
#elif defined(soc_a10)
    alt_clrbits_word(ALT_RSTMGR_PER0MODRST_ADDR, ALT_RSTMGR_PER0MODRST_QSPI_SET_MSK);
#endif
    
    while (ALT_QSPI_RESET_TMO && !alt_qspi_is_idle())
    {
        ALT_QSPI_RESET_TMO--;
    }

    if (ALT_QSPI_RESET_TMO == 0)
    {
        status = ALT_E_TMO;
    }

    /* Configure the remap address register, no remap */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_ahb_remap_address_set(0);
    }

    /* Configure the interrupt mask register, disabled all first */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_int_disable(ALT_QSPI_INT_STATUS_ALL);
    }

    /* Configure the baud rate divisor */

    if (status == ALT_E_SUCCESS)
    {
        uint32_t device_sclk_mhz = 54;
        int qspi_clk_mhz = qspi_clk_freq / 1000000;
        uint32_t div_actual = (qspi_clk_mhz + (device_sclk_mhz - 1)) / device_sclk_mhz;
        dprintf("DEBUG[QSPI]: div_actual = %" PRIu32 ".\n", div_actual);


        div_bits = (ALT_QSPI_BAUD_DIV_t)(((div_actual + 1) / 2) - 1);
        status = alt_qspi_baud_rate_div_set(div_bits);
    }

    return status;
}

ALT_STATUS_CODE alt_qspi_uninit(void) 
{
    /* Put QSPI controller into reset. */
#if defined(soc_cv_av)
    alt_setbits_word(ALT_RSTMGR_PERMODRST_ADDR, ALT_RSTMGR_PERMODRST_QSPI_SET_MSK);
#elif defined(soc_a10)
    alt_setbits_word(ALT_RSTMGR_PER0MODRST_ADDR, ALT_RSTMGR_PER0MODRST_QSPI_SET_MSK);
#endif
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_disable(void) 
{
    alt_clrbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_EN_SET_MSK);

    return ALT_E_SUCCESS;
}

uint32_t alt_qspi_get_device_size(void) 
{
    return qspi_config.device_size;
}

uint32_t alt_qspi_get_die_size(void)
{
    if(qspi_config.micron_multi_die)
        return qspi_config.die_size;
    return qspi_config.device_size;
}

uint32_t alt_qspi_get_page_size(void) 
{
    return qspi_config.page_size;
}

bool alt_qspi_is_micron_multidie(void)
{
    return qspi_config.micron_multi_die;
}

ALT_STATUS_CODE alt_qspi_enable(void) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    int qspi_clk_mhz;
    alt_freq_t qspi_clk_freq = 0;

    /* Enable QSPI */
    alt_setbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_EN_SET_MSK);

    /* Configure device - this will fill in the qspi_config structure */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_configure_device(&qspi_config);
        if (status != ALT_E_SUCCESS)
        {
            dprintf("[QSPI]: configure_device failed.\n");
        }
    }

    /* Update working frequency */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_clk_freq_get(ALT_CLK_QSPI, &qspi_clk_freq);
        if (status != ALT_E_SUCCESS)
        {
            dprintf("[QSPI]: freq_get failed.\n");
        }
    }

    qspi_clk_mhz = qspi_clk_freq / 1000000;

    /* Configure the device timing */
    if (status == ALT_E_SUCCESS) 
    {
        ALT_QSPI_TIMING_CONFIG_t timing_cfg;
        timing_cfg.clk_phase = (ALT_QSPI_CLK_PHASE_t)qspi_config.clk_phase;
        timing_cfg.clk_pol = (ALT_QSPI_CLK_POLARITY_t)qspi_config.clk_pol;
        timing_cfg.cs_da = alt_qspi_ns_to_multiplier(qspi_config.tshsl_ns, qspi_clk_mhz);
        timing_cfg.cs_dads = alt_qspi_ns_to_multiplier(qspi_config.tsd2d_ns, qspi_clk_mhz);
        timing_cfg.cs_eot = alt_qspi_ns_to_multiplier(qspi_config.tchsh_ns, qspi_clk_mhz);
        timing_cfg.cs_sot = alt_qspi_ns_to_multiplier(qspi_config.tslch_ns, qspi_clk_mhz);
        timing_cfg.rd_datacap = 1;

        dprintf("DEBUG[QSPI]: cs_da   = %" PRIu32 ".\n", timing_cfg.cs_da);
        dprintf("DEBUG[QSPI]: cs_dads = %" PRIu32 ".\n", timing_cfg.cs_dads);
        dprintf("DEBUG[QSPI]: cs_eot  = %" PRIu32 ".\n", timing_cfg.cs_eot);
        dprintf("DEBUG[QSPI]: cs_sot  = %" PRIu32 ".\n", timing_cfg.cs_sot);

        status = alt_qspi_timing_config_set(&timing_cfg);
    }

    /* Configure the baud rate divisor */
    if (status == ALT_E_SUCCESS) 
    {
        ALT_QSPI_BAUD_DIV_t div_bits;
        uint32_t device_sclk_mhz = qspi_config.max_freq_mhz;
        uint32_t div_actual = (qspi_clk_mhz + (device_sclk_mhz - 1)) / device_sclk_mhz;
        dprintf("DEBUG[QSPI]: div_actual = %" PRIu32 ".\n", div_actual); 
        div_bits = (ALT_QSPI_BAUD_DIV_t) (((div_actual + 1) / 2) - 1);
        status = alt_qspi_baud_rate_div_set(div_bits);
    }

    /* Display the actual clock value */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_clk_freq_get(ALT_CLK_QSPI, &qspi_clk_freq);
        qspi_clk_freq /= (int) ((alt_qspi_baud_rate_div_get() + 1) * 2);
        if (status == ALT_E_SUCCESS) 
        {
            dprintf("DEBUG[QSPI]: INFO: QSPI Clock = %d.\n", (int) qspi_clk_freq);
        }
        else
        {
            dprintf("[QSPI]: actual freq_get failed.\n");
        }
    }

    /* Device specific configuration for read */
    if (status == ALT_E_SUCCESS) 
    {
        ALT_QSPI_DEV_INST_CONFIG_t read_cfg;
        read_cfg.op_code = qspi_config.read_op_code, 
        read_cfg.inst_type = qspi_config.inst_type,
        read_cfg.addr_xfer_type = qspi_config.read_addr_xfer_type,
        read_cfg.data_xfer_type = qspi_config.read_data_xfer_type,
        read_cfg.dummy_cycles = qspi_config.read_dummy_cycles;

        status = alt_qspi_device_read_config_set(&read_cfg);

        if (status != ALT_E_SUCCESS)
        {
            dprintf("[QSPI]: device_read_config_set failed.\n");
        }
    }

    /* Device specific configuration for write */
    if (status == ALT_E_SUCCESS) 
    {
        ALT_QSPI_DEV_INST_CONFIG_t write_cfg;
        write_cfg.op_code = qspi_config.write_op_code;
        write_cfg.inst_type = qspi_config.inst_type; 
        write_cfg.addr_xfer_type = qspi_config.write_addr_xfer_type;
        write_cfg.data_xfer_type = qspi_config.write_data_xfer_type;
        write_cfg.dummy_cycles = qspi_config.write_dummy_cycles;

        status = alt_qspi_device_write_config_set(&write_cfg);

        if (status != ALT_E_SUCCESS)
        {
            dprintf("[QSPI]: device_write_config_set failed.\n");
        }
    }

    /* Configure the device size and address bytes */
    if (status == ALT_E_SUCCESS) 
    {
        ALT_QSPI_DEV_SIZE_CONFIG_t size_cfg;
        size_cfg.block_size = ALT_QSPI_DEVSZ_BYTESPERSUBSECTOR_RESET;
        size_cfg.page_size = qspi_config.page_size;
        size_cfg.addr_size = qspi_config.addr_size;
        size_cfg.lower_wrprot_block = 0;
        size_cfg.upper_wrprot_block = (qspi_config.device_size - 1) >> 16;
        size_cfg.wrprot_enable = ALT_QSPI_WRPROT_EN_RESET;

        status = alt_qspi_device_size_config_set(&size_cfg);

        if (status != ALT_E_SUCCESS)
        {
            dprintf("[QSPI]: device_size_config_set failed.\n");
        }
    }

    /* Configure the DMA parameters
    /  This will allow DMA to work well without much intervention by users. */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_dma_config_set(4, 4);

        if (status != ALT_E_SUCCESS)
        {
            dprintf("[QSPI]: dma_config_set failed.\n");
        }
    }

    /* Call the device specific init function */
    if ((status == ALT_E_SUCCESS) && (qspi_config.init_func != NULL)) 
    {
        status = qspi_config.init_func();
    
        if (status != ALT_E_SUCCESS)
        {
            dprintf("[QSPI]: config.init failed.\n");
        }
    }

    return status;
}

uint32_t alt_qspi_int_status_get(void) 
{
    /* Read and return the value of the QSPI controller Interrupt Status
    /  Register (irqstat). */
    return alt_read_word(ALT_QSPI_IRQSTAT_ADDR);
}

ALT_STATUS_CODE alt_qspi_int_clear(const uint32_t mask) 
{
    /* Check that the [mask] contains valid interrupt status conditions values. */
    if ((ALT_QSPI_INT_STATUS_ALL & mask) == 0) 
    {
        return ALT_E_BAD_ARG;
    }

    /* Write 1's to clear the desired interrupt status condition(s). */
    alt_write_word(ALT_QSPI_IRQSTAT_ADDR, mask);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_int_disable(const uint32_t mask) 
{
    if (alt_qspi_is_idle() == false) 
    {
        return ALT_E_ERROR;
    }

    /* Check that the [mask] contains valid interrupt status conditions values. */
    if ((ALT_QSPI_INT_STATUS_ALL & mask) == 0) 
    {
        return ALT_E_BAD_ARG;
    }

    /* Write 0's to disable the desired interrupt status condition(s). */
    alt_clrbits_word(ALT_QSPI_IRQMSK_ADDR, mask);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_int_enable(const uint32_t mask) 
{
    if (alt_qspi_is_idle() == false) 
    {
        return ALT_E_ERROR;
    }

    /* Check that the [mask] contains valid interrupt status conditions values. */
    if ((ALT_QSPI_INT_STATUS_ALL & mask) == 0) 
    {
        return ALT_E_BAD_ARG;
    }

    /* Write 1's to enable the desired interrupt status condition(s). */
    alt_setbits_word(ALT_QSPI_IRQMSK_ADDR, mask);

    return ALT_E_SUCCESS;
}

bool alt_qspi_is_idle(void) 
{
    /* If the idle field of the QSPI configuration register is 1 then the serial
    /  interface and QSPI pipeline is idle. */
    return ALT_QSPI_CFG_IDLE_GET(alt_read_word(ALT_QSPI_CFG_ADDR)) == 1;
}

static ALT_STATUS_CODE alt_qspi_read_helper(void * dst, uint32_t src, size_t size) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    dprintf("DEBUG[QSPI]: INFO: Reading %d bytes from 0x%08x.\n", (int) size, (int) src);

    /* On Micron multi-die devices each read must be contained within one die */
    if (qspi_config.micron_multi_die) 
    {
        uint32_t max_read_size = qspi_config.die_size - (src % qspi_config.die_size);
        if (size > max_read_size) 
        {
            return ALT_E_ERROR;
        }
    }
    /* Start indirect read */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_indirect_read_start(src, size);
    }

    /* Read the data from FIFO as it becomes available */
    if (status == ALT_E_SUCCESS) 
    {
        uint32_t read_count = 0;

        while (!alt_qspi_indirect_read_is_complete()) 
        {
            uint32_t level = alt_qspi_indirect_read_fill_level();
            uint32_t * data = (uint32_t *) ((uint32_t)dst + read_count);
            uint32_t i;

            for (i = 0; i < level; ++i) 
            {
                *data++ = alt_read_word(ALT_QSPIDATA_ADDR);
            }

            read_count += level * sizeof(uint32_t);
        }
    }

    /* Complete the read */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_indirect_read_finish();
    }

    return status;
}

ALT_STATUS_CODE alt_qspi_read(void * dst, uint32_t src, size_t size) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    if (size == 0) 
    {
        return ALT_E_SUCCESS;
    }

    if (src >= qspi_config.device_size) 
    {
        return ALT_E_ERROR;
    }

    if (src + size - 1 >= qspi_config.device_size) 
    {
        return ALT_E_ERROR;
    }


    /* Must be 32-bit aligned */
    if (((uintptr_t) dst & 0x3) ||
        (src & 0x3) ||
        (size & 0x3))
    {
        return ALT_E_ERROR;
    }

    /* Verify that there is not already a read in progress. */
    if (ALT_QSPI_INDRD_RD_STAT_GET(alt_read_word(ALT_QSPI_INDRD_ADDR)))
    {
        return ALT_E_ERROR;
    }

    if (qspi_config.micron_multi_die) 
    {
        /* On Micron multi die devices we must split the read across the die boundaries */
        uint32_t crt_src = src;
        uint32_t crt_size = size;
        uint8_t * crt_dst = (uint8_t*) dst;

        while ((status == ALT_E_SUCCESS) && (crt_size != 0)) 
        {
            uint32_t max_read_size = qspi_config.die_size - (crt_src % qspi_config.die_size);
            uint32_t crt_read_size = ALT_MIN(crt_size, max_read_size);

            status = alt_qspi_read_helper(crt_dst, crt_src, crt_read_size);

            if (status == ALT_E_SUCCESS) 
            {
                crt_size -= crt_read_size;
                crt_dst += crt_read_size;
                crt_src += crt_read_size;
            }
        }

        if (crt_size != 0) 
        {
            status = ALT_E_ERROR;
        }
    } 
    else 
    {
        if (status == ALT_E_SUCCESS) 
        {
            return alt_qspi_read_helper(dst, src, size);
        }
    }

    return status;
}

static ALT_STATUS_CODE alt_qspi_write_helper(uint32_t dst, const void * src, size_t size) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    dprintf("DEBUG[QSPI]: INFO: Writing %d bytes to 0x%08x.\n", (int) size, (int) dst);

    /* On multiple die devices we can only write one page at a time */
    if (qspi_config.micron_multi_die)
    {
        uint32_t max_read_size = qspi_config.page_size - (dst % qspi_config.page_size);
        if (size > max_read_size)
        {
            return ALT_E_ERROR;
        }
    }

    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_indirect_write_start(dst, size);
    }

    if (status == ALT_E_SUCCESS) 
    {
        uint32_t write_count = 0;
        uint32_t write_capacity = ALT_QSPI_SRAM_FIFO_ENTRY_COUNT - alt_qspi_sram_partition_get();

        while (write_count < size) 
        {
            uint32_t i;
            uint32_t space = write_capacity - alt_qspi_indirect_write_fill_level();
            uint32_t * data;
            space = ALT_MIN(space, (size - write_count) / sizeof(uint32_t));

            data = (uint32_t *) ((uint32_t) src + write_count);
            for (i = 0; i < space; ++i) 
            {
                alt_write_word(ALT_QSPIDATA_ADDR, *data++);
            }

            write_count += space * sizeof(uint32_t);
        }
    }

    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_indirect_write_finish();
    }

    return status;
}

ALT_STATUS_CODE alt_qspi_write(uint32_t dst, const void * src, size_t size) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t crt_dst;
    uint32_t crt_size;
    uint8_t * crt_src;

    if (dst >= qspi_config.device_size) 
    {
        return ALT_E_ERROR;
    }

    if (size == 0) 
    {
        return ALT_E_SUCCESS;
    }

    if (dst + size - 1 >= qspi_config.device_size) 
    {
        return ALT_E_ERROR;
    }


    if (((uintptr_t) src & 0x3) ||
        (dst & 0x3) ||
        (size & 0x3))
    {
        return ALT_E_ERROR;
    }

    /* Verify that there is not already a write in progress. */
    if (ALT_QSPI_INDWR_RDSTAT_GET(alt_read_word(ALT_QSPI_INDWR_ADDR)))
    {
        return ALT_E_ERROR;
    }
#if (ALT_QSPI_SUPPORT_SPANSION_S25FL256S!=1) && (ALT_QSPI_SUPPORT_SPANSION_S25FL512S!=1)
    if (qspi_config.micron_multi_die)
    {
#endif
        /* On Micron multi die and Spansion S25FL devices we must split the write across the page boundaries */
        crt_dst = dst;
        crt_size = size;
        crt_src = (uint8_t*) src;

        while ((status == ALT_E_SUCCESS) && (crt_size != 0))
        {
            uint32_t max_write_size = qspi_config.page_size - (crt_dst % qspi_config.page_size);
            uint32_t crt_write_size = ALT_MIN(crt_size, max_write_size);

            status = alt_qspi_write_helper(crt_dst, crt_src, crt_write_size);

            if (status == ALT_E_SUCCESS)
            {
                crt_size -= crt_write_size;
                crt_dst += crt_write_size;
                crt_src += crt_write_size;
            }
        }

        if (crt_size != 0)
        {
            status = ALT_E_ERROR;
        }
#if (ALT_QSPI_SUPPORT_SPANSION_S25FL256S!=1) && (ALT_QSPI_SUPPORT_SPANSION_S25FL512S!=1)
    }
    else
    {
        status = alt_qspi_write_helper(dst, src, size);
    }
#endif
    return status;
}

ALT_QSPI_BAUD_DIV_t alt_qspi_baud_rate_div_get(void) 
{
    uint32_t baud_rate_div = ALT_QSPI_CFG_BAUDDIV_GET(alt_read_word(ALT_QSPI_CFG_ADDR));
    return (ALT_QSPI_BAUD_DIV_t) baud_rate_div;
}

ALT_STATUS_CODE alt_qspi_baud_rate_div_set(const ALT_QSPI_BAUD_DIV_t baud_rate_div) 
{
    if (0xf < (uint32_t) baud_rate_div) 
    {
        /* Invalid baud rate divisor value. */
        return ALT_E_BAD_ARG;
    }

    /* Set the Master Mode Baud Rate Divisor Field of the QSPI Configuration Register. */
    alt_replbits_word(ALT_QSPI_CFG_ADDR,
                      ALT_QSPI_CFG_BAUDDIV_SET_MSK,
                      ALT_QSPI_CFG_BAUDDIV_SET(baud_rate_div));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_chip_select_config_get(uint32_t* cs, ALT_QSPI_CS_MODE_t* cs_mode) 
{
    uint32_t cfg = alt_read_word(ALT_QSPI_CFG_ADDR);

    *cs = ALT_QSPI_CFG_PERCSLINES_GET(cfg);
    *cs_mode = (ALT_QSPI_CS_MODE_t) ALT_QSPI_CFG_PERSELDEC_GET(cfg);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_chip_select_config_set(const uint32_t cs, const ALT_QSPI_CS_MODE_t cs_mode) 
{
    uint32_t cfg; 
    /* chip select cs:
    /  four bit value, bit 0 = cs0, bit 1 = cs1, bit 2 = cs2, bit 3 = cs3
    /  since cs is low true, the value of each bit should be zero if enable the cs.
    /  also allows multiple cs line enabled together. */

    if (cs > ((1 << ALT_QSPI_CFG_PERCSLINES_WIDTH) - 1)) 
    {
        /* [cs] not within possible 4 bit chip select line value range. */
        return ALT_E_ARG_RANGE;
    }

    if ((cs_mode != ALT_QSPI_CS_MODE_SINGLE_SELECT) && (cs_mode != ALT_QSPI_CS_MODE_DECODE)) 
    {
        return ALT_E_INV_OPTION;
    }

    /* Update the Peripheral Chip Select Lines and Peripheral Select Decode
    /  Fields of the QSPI Configuration Register value with the chip select
    /  options.*/
    cfg = alt_read_word(ALT_QSPI_CFG_ADDR);
    cfg &= ALT_QSPI_CFG_PERCSLINES_CLR_MSK & ALT_QSPI_CFG_PERSELDEC_CLR_MSK;
    cfg |= ALT_QSPI_CFG_PERCSLINES_SET(cs) | ALT_QSPI_CFG_PERSELDEC_SET(cs_mode);
    alt_write_word(ALT_QSPI_CFG_ADDR, cfg);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_mode_bit_disable(void) 
{
    /* Clear the Mode Bit Enable Field of the Device Read Instruction Register
    /  to disable mode bits from being sent after the address bytes. */
    alt_clrbits_word(ALT_QSPI_DEVRD_ADDR, ALT_QSPI_DEVRD_ENMODBITS_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_mode_bit_enable(void) 
{
    /* Set the Mode Bit Enable Field of the Device Read Instruction Register
    /  to enable mode bits to be sent after the address bytes. */
    alt_setbits_word(ALT_QSPI_DEVRD_ADDR, ALT_QSPI_DEVRD_ENMODBITS_SET_MSK);

    return ALT_E_SUCCESS;
}

uint32_t alt_qspi_mode_bit_config_get(void) 
{
    /* Return the 8 bit value from the Mode Field of the Mode Bit Configuration
       Register. */
    return ALT_QSPI_MODBIT_MOD_GET(alt_read_word(ALT_QSPI_MODBIT_ADDR));
}

ALT_STATUS_CODE alt_qspi_mode_bit_config_set(const uint32_t mode_bits) 
{
    if (alt_qspi_is_idle() == false) 
    {
        return ALT_E_ERROR;
    }

    if (mode_bits > ((1 << ALT_QSPI_MODBIT_MOD_WIDTH) - 1)) 
    {
        /* 'mode_bits' not within possible 8 bit mode value range. */
        return ALT_E_ARG_RANGE;
    }

    /* Set the 8 bit value in the Mode Field of the Mode Bit Configuration
       Register. */
    alt_replbits_word(ALT_QSPI_MODBIT_ADDR,
                      ALT_QSPI_MODBIT_MOD_SET_MSK,
                      ALT_QSPI_MODBIT_MOD_SET(mode_bits));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_device_size_config_get(ALT_QSPI_DEV_SIZE_CONFIG_t * cfg) 
{
    /* Although not required, it is recommended that the write protect feature
       be enabled prior to enabling the QSPI controller. This will block any AHB
       writes from taking effect. This also means the write protection registers
       (Lower Write Protection, Upper Write Protection, and Write Protection)
       should be setup and the number of bytes per device block in the device
       size configuration register should be setup prior to enabling the QSPI
       controller.

       Read Device Size Register and get the Number of Bytes per Block, Number
       of Bytes per Device, and Number of Address Bytes Fields. */

    uint32_t devsz = alt_read_word(ALT_QSPI_DEVSZ_ADDR);

    cfg->block_size = ALT_QSPI_DEVSZ_BYTESPERSUBSECTOR_GET(devsz);
    cfg->page_size = ALT_QSPI_DEVSZ_BYTESPERDEVICEPAGE_GET(devsz);
    cfg->addr_size = ALT_QSPI_DEVSZ_NUMADDRBYTES_GET(devsz);

    /* Read Lower Write Protection, Upper Write Protection, and Write Protection
       Registers. */

    cfg->lower_wrprot_block = ALT_QSPI_LOWWRPROT_SUBSECTOR_GET(alt_read_word(ALT_QSPI_LOWWRPROT_ADDR));
    cfg->upper_wrprot_block = ALT_QSPI_UPPWRPROT_SUBSECTOR_GET(alt_read_word(ALT_QSPI_UPPWRPROT_ADDR));
    cfg->wrprot_enable = ALT_QSPI_WRPROT_EN_GET(alt_read_word(ALT_QSPI_WRPROT_ADDR));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_device_size_config_set(const ALT_QSPI_DEV_SIZE_CONFIG_t * cfg) 
{
    uint32_t value;
    if (cfg->block_size > ((1 << ALT_QSPI_DEVSZ_BYTESPERSUBSECTOR_WIDTH) - 1)) 
    {
        return ALT_E_ARG_RANGE;
    }

    if (cfg->page_size > ((1 << ALT_QSPI_DEVSZ_BYTESPERDEVICEPAGE_WIDTH) - 1)) 
    {
        return ALT_E_ARG_RANGE;
    }

    if (cfg->addr_size > ((1 << ALT_QSPI_DEVSZ_NUMADDRBYTES_WIDTH) - 1)) 
    {
        return ALT_E_ARG_RANGE;
    }

    if (cfg->lower_wrprot_block > cfg->upper_wrprot_block) 
    {
        /* Null write protection regions are not allowed. */
        return ALT_E_ARG_RANGE;
    }

    value = ALT_QSPI_DEVSZ_BYTESPERSUBSECTOR_SET(cfg->block_size) |
    ALT_QSPI_DEVSZ_BYTESPERDEVICEPAGE_SET(cfg->page_size) |
    ALT_QSPI_DEVSZ_NUMADDRBYTES_SET(cfg->addr_size);

    alt_write_word(ALT_QSPI_DEVSZ_ADDR, value);

    if (cfg->wrprot_enable) 
    {
        alt_write_word(ALT_QSPI_LOWWRPROT_ADDR, cfg->lower_wrprot_block);
        alt_write_word(ALT_QSPI_UPPWRPROT_ADDR, cfg->upper_wrprot_block);
    }

    /* Read Upper Write Protection Register - uppwrprot.
       Set the Write Protection Enable Bit Field of the Write Protection
       Register accordingly. */
    if (cfg->wrprot_enable) 
    {
        alt_setbits_word(ALT_QSPI_WRPROT_ADDR, ALT_QSPI_WRPROT_EN_SET(1));
    } 
    else 
    {
        alt_clrbits_word(ALT_QSPI_WRPROT_ADDR, ALT_QSPI_WRPROT_EN_SET(1));
    }
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_device_read_config_get(ALT_QSPI_DEV_INST_CONFIG_t * cfg) 
{
    /* Read the Device Read Instruction Register - devrd. */
    uint32_t devrd = alt_read_word(ALT_QSPI_DEVRD_ADDR);

    cfg->op_code = ALT_QSPI_DEVRD_RDOPCODE_GET(devrd);
    cfg->inst_type = (ALT_QSPI_MODE_t) ALT_QSPI_DEVRD_INSTWIDTH_GET(devrd);
    cfg->addr_xfer_type = (ALT_QSPI_MODE_t) ALT_QSPI_DEVRD_ADDRWIDTH_GET(devrd);
    cfg->data_xfer_type = (ALT_QSPI_MODE_t) ALT_QSPI_DEVRD_DATAWIDTH_GET(devrd);
    cfg->dummy_cycles = ALT_QSPI_DEVRD_DUMMYRDCLKS_GET(devrd);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_device_read_config_set(const ALT_QSPI_DEV_INST_CONFIG_t * cfg) 
{
    uint32_t devrd;
    if (alt_qspi_is_idle() == false) 
    {
        return ALT_E_ERROR;
    }

    /* Validate input */

    if (cfg->op_code > ((1 << ALT_QSPI_DEVRD_RDOPCODE_WIDTH) - 1)) 
    {
        return ALT_E_BAD_ARG;
    }

    switch (cfg->inst_type) 
    {
    case ALT_QSPI_MODE_SINGLE:
    case ALT_QSPI_MODE_DUAL:
    case ALT_QSPI_MODE_QUAD:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    switch (cfg->addr_xfer_type) 
    {
    case ALT_QSPI_MODE_SINGLE:
    case ALT_QSPI_MODE_DUAL:
    case ALT_QSPI_MODE_QUAD:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    switch (cfg->data_xfer_type)
    {
    case ALT_QSPI_MODE_SINGLE:
    case ALT_QSPI_MODE_DUAL:
    case ALT_QSPI_MODE_QUAD:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    if (cfg->dummy_cycles > ((1 << ALT_QSPI_DEVRD_DUMMYRDCLKS_WIDTH) - 1))
    {
        return ALT_E_BAD_ARG;
    }
    
    /* Read the Device Read Instruction Register - devrd. */
    devrd = alt_read_word(ALT_QSPI_DEVRD_ADDR);

    devrd &= ALT_QSPI_DEVRD_RDOPCODE_CLR_MSK &
             ALT_QSPI_DEVRD_INSTWIDTH_CLR_MSK &
                 ALT_QSPI_DEVRD_ADDRWIDTH_CLR_MSK &
                 ALT_QSPI_DEVRD_DATAWIDTH_CLR_MSK &
                 ALT_QSPI_DEVRD_DUMMYRDCLKS_CLR_MSK;

    devrd |= ALT_QSPI_DEVRD_RDOPCODE_SET(cfg->op_code) | 
             ALT_QSPI_DEVRD_INSTWIDTH_SET(cfg->inst_type) |
                 ALT_QSPI_DEVRD_ADDRWIDTH_SET(cfg->addr_xfer_type) |
                 ALT_QSPI_DEVRD_DATAWIDTH_SET(cfg->data_xfer_type) |
                 ALT_QSPI_DEVRD_DUMMYRDCLKS_SET(cfg->dummy_cycles);

    alt_write_word(ALT_QSPI_DEVRD_ADDR, devrd);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_device_write_config_get(ALT_QSPI_DEV_INST_CONFIG_t * cfg) 
{
    /* Device Write Instruction Register - devwr. */
    uint32_t devwr = alt_read_word(ALT_QSPI_DEVWR_ADDR);

    cfg->op_code = ALT_QSPI_DEVWR_WROPCODE_GET(devwr);
    /* The Instruction Type field in the Device READ Instruction Register only appears
     / once and applies to both READ and WRITE opertions. it is not included in the
     / Device WRITE Instruction Register. */
    cfg->inst_type = (ALT_QSPI_MODE_t) ALT_QSPI_DEVRD_INSTWIDTH_GET(alt_read_word(ALT_QSPI_DEVRD_ADDR));
    cfg->addr_xfer_type = (ALT_QSPI_MODE_t) ALT_QSPI_DEVWR_ADDRWIDTH_GET(devwr);
    cfg->data_xfer_type = (ALT_QSPI_MODE_t) ALT_QSPI_DEVWR_DATAWIDTH_GET(devwr);
    cfg->dummy_cycles = ALT_QSPI_DEVWR_DUMMYWRCLKS_GET(devwr);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_device_write_config_set(const ALT_QSPI_DEV_INST_CONFIG_t * cfg) 
{
    uint32_t devwr;
    if (alt_qspi_is_idle() == false) 
    {
        return ALT_E_ERROR;
    }

    /* Validate input */

    if (cfg->op_code > ((1 << ALT_QSPI_DEVWR_WROPCODE_WIDTH) - 1))
    {
        return ALT_E_BAD_ARG;
    }

    switch (cfg->inst_type)
    {
    case ALT_QSPI_MODE_SINGLE:
    case ALT_QSPI_MODE_DUAL:
    case ALT_QSPI_MODE_QUAD:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    switch (cfg->addr_xfer_type)
    {
    case ALT_QSPI_MODE_SINGLE:
    case ALT_QSPI_MODE_DUAL:
    case ALT_QSPI_MODE_QUAD:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    switch (cfg->data_xfer_type) 
    {
    case ALT_QSPI_MODE_SINGLE:
    case ALT_QSPI_MODE_DUAL:
    case ALT_QSPI_MODE_QUAD:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    if (cfg->dummy_cycles > ((1 << ALT_QSPI_DEVWR_DUMMYWRCLKS_WIDTH) - 1))
    {
        return ALT_E_BAD_ARG;
    }
    
    /* Read the Device Write Instruction Register - devwr. */
    devwr = alt_read_word(ALT_QSPI_DEVWR_ADDR);

    devwr &= ALT_QSPI_DEVWR_WROPCODE_CLR_MSK &
             ALT_QSPI_DEVWR_ADDRWIDTH_CLR_MSK &
             ALT_QSPI_DEVWR_DATAWIDTH_CLR_MSK &
             ALT_QSPI_DEVWR_DUMMYWRCLKS_CLR_MSK;

    devwr |= ALT_QSPI_DEVWR_WROPCODE_SET(cfg->op_code) | 
             ALT_QSPI_DEVWR_ADDRWIDTH_SET(cfg->addr_xfer_type) |
             ALT_QSPI_DEVWR_DATAWIDTH_SET(cfg->data_xfer_type) |
             ALT_QSPI_DEVWR_DUMMYWRCLKS_SET(cfg->dummy_cycles);

    alt_write_word(ALT_QSPI_DEVWR_ADDR, devwr);

    /* The Instruction Type field in the Device READ Instruction Register only appears
     / once and applies to both READ and WRITE operations - it is not included in the
     / Device WRITE Instruction Register. Therefore, modify the Instruction Type
     / Field in the Device Read Register. */
    alt_replbits_word(ALT_QSPI_DEVRD_ADDR,
                      ALT_QSPI_DEVRD_INSTWIDTH_SET_MSK,
                      ALT_QSPI_DEVRD_INSTWIDTH_SET((uint32_t) cfg->inst_type));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_timing_config_get(ALT_QSPI_TIMING_CONFIG_t * cfg) 
{
    uint32_t delayreg;
    /* QSPI Configuration Register - cfg */
    uint32_t cfgreg = alt_read_word(ALT_QSPI_CFG_ADDR);
    cfg->clk_phase = (ALT_QSPI_CLK_PHASE_t) ALT_QSPI_CFG_SELCLKPHASE_GET(cfgreg);
    cfg->clk_pol = (ALT_QSPI_CLK_POLARITY_t) ALT_QSPI_CFG_SELCLKPOL_GET(cfgreg);

    /* QSPI Device Delay Register */
    delayreg = alt_read_word(ALT_QSPI_DELAY_ADDR);
    cfg->cs_sot = ALT_QSPI_DELAY_INIT_GET(delayreg);
    cfg->cs_eot = ALT_QSPI_DELAY_AFTER_GET(delayreg);
    cfg->cs_dads = ALT_QSPI_DELAY_BTWN_GET(delayreg);
    cfg->cs_da = ALT_QSPI_DELAY_NSS_GET(delayreg);

    /* Read Data Capture Register */
    cfg->rd_datacap = ALT_QSPI_RDDATACAP_DELAY_GET(alt_read_word(ALT_QSPI_RDDATACAP_ADDR));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_timing_config_set(const ALT_QSPI_TIMING_CONFIG_t * cfg) 
{
    uint32_t cfgreg;
    uint32_t delayreg;
    if (alt_qspi_is_idle() == false)
    {
        return ALT_E_ERROR;
    }

    /* Validate parameter(s) */

    switch (cfg->clk_phase)
    {
    case ALT_QSPI_CLK_PHASE_ACTIVE:
    case ALT_QSPI_CLK_PHASE_INACTIVE:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    switch (cfg->clk_pol)
    {
    case ALT_QSPI_CLK_POLARITY_LOW:
    case ALT_QSPI_CLK_POLARITY_HIGH:
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    if (cfg->cs_da > ((1 << ALT_QSPI_DELAY_NSS_WIDTH) - 1)) 
    {
        return ALT_E_BAD_ARG;
    }

    if (cfg->cs_dads > ((1 << ALT_QSPI_DELAY_BTWN_WIDTH) - 1)) 
    {
        return ALT_E_BAD_ARG;
    }

    if (cfg->cs_eot > ((1 << ALT_QSPI_DELAY_AFTER_WIDTH) - 1)) 
    {
        return ALT_E_BAD_ARG;
    }

    if (cfg->cs_sot > ((1 << ALT_QSPI_DELAY_INIT_WIDTH) - 1)) 
    {
        return ALT_E_BAD_ARG;
    }

    if (cfg->rd_datacap > ((1 << ALT_QSPI_RDDATACAP_DELAY_WIDTH) - 1)) 
    {
        return ALT_E_BAD_ARG;
    }

    /* QSPI Configuration Register - cfg */
    cfgreg = alt_read_word(ALT_QSPI_CFG_ADDR);
    cfgreg &= ALT_QSPI_CFG_SELCLKPHASE_CLR_MSK & 
              ALT_QSPI_CFG_SELCLKPOL_CLR_MSK;
    cfgreg |= ALT_QSPI_CFG_SELCLKPHASE_SET(cfg->clk_phase) | 
              ALT_QSPI_CFG_SELCLKPOL_SET(cfg->clk_pol);
    alt_write_word(ALT_QSPI_CFG_ADDR, cfgreg);

    /* QSPI Device Delay Register */
    delayreg = ALT_QSPI_DELAY_INIT_SET(cfg->cs_sot) |
               ALT_QSPI_DELAY_AFTER_SET(cfg->cs_eot) |
               ALT_QSPI_DELAY_BTWN_SET(cfg->cs_dads) |
               ALT_QSPI_DELAY_NSS_SET(cfg->cs_da);
    alt_write_word(ALT_QSPI_DELAY_ADDR, delayreg);

    /* Read Data Capture Register */

    alt_write_word(ALT_QSPI_RDDATACAP_ADDR,
                   ALT_QSPI_RDDATACAP_BYP_SET(1) |
                   ALT_QSPI_RDDATACAP_DELAY_SET(cfg->rd_datacap));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_direct_disable(void)
{
    /* Clear (set to 0) the Enable Direct Access Controller Field of the QSPI */
    /* Configuration Register to disable the Direct Access Controller. */
    alt_clrbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_ENDIRACC_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_direct_enable(void)
{
    /* Set (set to 1) the Enable Direct Access Controller Field of the QSPI */
    /* Configuration Register to enable the Direct Access Controller. */
    alt_setbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_ENDIRACC_SET_MSK);

    return ALT_E_SUCCESS;
}

uint32_t alt_qspi_ahb_remap_address_get(void) 
{
    /* Read and return the value of the Remap Address Register. */
    return ALT_QSPI_REMAPADDR_VALUE_GET(alt_read_word(ALT_QSPI_REMAPADDR_ADDR));
}

ALT_STATUS_CODE alt_qspi_ahb_remap_address_set(const uint32_t ahb_remap_addr) 
{
    if (alt_qspi_is_idle() == false)
    {
        return ALT_E_ERROR;
    }

    /* Set the value of the Remap Address Register. */
    alt_setbits_word(ALT_QSPI_REMAPADDR_ADDR, ALT_QSPI_REMAPADDR_VALUE_SET(ahb_remap_addr));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_ahb_address_remap_disable(void) 
{
    /* Clear (set to 0) the Enable AHB Address Remapping Field of the QSPI
       Configuration Register to disable AHB address remapping. */
    alt_clrbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_ENAHBREMAP_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_ahb_address_remap_enable(void) 
{
    /* Set (set to 1) the Enable AHB Address Remapping Field of the QSPI
       Configuration Register to enable AHB address remapping. */
    alt_setbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_ENAHBREMAP_SET_MSK);

    return ALT_E_SUCCESS;
}

static ALT_STATUS_CODE alt_qspi_indirect_read_start_bank(uint32_t flash_addr,
                                                         size_t num_bytes)
{
    alt_write_word(ALT_QSPI_INDRDSTADDR_ADDR, flash_addr);
    alt_write_word(ALT_QSPI_INDRDCNT_ADDR, num_bytes);
    alt_write_word(ALT_QSPI_INDRD_ADDR, ALT_QSPI_INDRD_START_SET_MSK |
                                        ALT_QSPI_INDRD_IND_OPS_DONE_STAT_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_indirect_read_start(const uint32_t flash_addr,
                                             const size_t num_bytes) 
{
    /* flash_addr and num_bytes restriction is to prevent possible unaligned
       exceptions. */

    if (flash_addr & 0x3)
    {
        return ALT_E_ERROR;
    }

    if (num_bytes & 0x3)
    {
        return ALT_E_ERROR;
    }

    if (num_bytes == 0)
    {
        /* Do not report this as a success. If a indirect read was not
           previously completed, it may be cleared already, at which point
           alt_qspi_indirect_read_is_complete() will never report true. */
        return ALT_E_ERROR;
    }

    if (flash_addr > qspi_config.device_size)
    {
        return ALT_E_ERROR;
    }

    if (flash_addr + num_bytes > qspi_config.device_size)
    {
        return ALT_E_ERROR;
    }
    
    /* Verify that there is not already a read in progress. */
    if (ALT_QSPI_INDRD_RD_STAT_GET(alt_read_word(ALT_QSPI_INDRD_ADDR)))
    {
        return ALT_E_ERROR;
    }

    return alt_qspi_indirect_read_start_bank(flash_addr, num_bytes);
}

ALT_STATUS_CODE alt_qspi_indirect_read_finish(void) 
{
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_indirect_read_cancel(void) 
{
    /* An indirect operation may be cancelled at any time by setting Indirect
       Transfer Control Register bit [1]. */
    alt_write_word(ALT_QSPI_INDRD_ADDR, ALT_QSPI_INDRD_CANCEL_SET_MSK);

    return ALT_E_SUCCESS;
}

uint32_t alt_qspi_indirect_read_fill_level(void) 
{
    /* Return the SRAM Fill Level (Indirect Read Partition) Field of the SRAM
     / Fill Register to get the SRAM Fill Level for the Indirect Read Partition
     / in units of SRAM Words (4 bytes). */
    return ALT_QSPI_SRAMFILL_INDRDPART_GET(alt_read_word(ALT_QSPI_SRAMFILL_ADDR));
}

uint32_t alt_qspi_indirect_read_watermark_get(void) 
{
    /* Return the Watermark value in the Indirect Read Transfer Watermark Register. */
    return alt_read_word(ALT_QSPI_INDRDWATER_ADDR);
}

ALT_STATUS_CODE alt_qspi_indirect_read_watermark_set(const uint32_t watermark) 
{
    /* Verify that there is not already a read in progress. */
    if (ALT_QSPI_INDRD_RD_STAT_GET(alt_read_word(ALT_QSPI_INDRD_ADDR)))
    {
        return ALT_E_ERROR;
    }

    /* Set the Watermark value in the Indirect Read Transfer Watermark Register. */
    alt_write_word(ALT_QSPI_INDRDWATER_ADDR, watermark);

    return ALT_E_SUCCESS;
}

bool alt_qspi_indirect_read_is_complete(void) 
{
    /* The value of the Indirect Completion Status Field of the Indirect Read
     / Transfer Control Register is set by hardware when an indirect read
     / operation has completed. */
    return (alt_read_word(ALT_QSPI_INDRD_ADDR) & ALT_QSPI_INDRD_IND_OPS_DONE_STAT_SET_MSK) != 0;
}

static ALT_STATUS_CODE alt_qspi_indirect_write_start_bank(uint32_t flash_addr,
                                                          size_t num_bytes)
{
    alt_write_word(ALT_QSPI_INDWRSTADDR_ADDR, flash_addr);
    alt_write_word(ALT_QSPI_INDWRCNT_ADDR, num_bytes);
    alt_write_word(ALT_QSPI_INDWR_ADDR, ALT_QSPI_INDWR_START_SET_MSK |
                                        ALT_QSPI_INDWR_INDDONE_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_indirect_write_start(const uint32_t flash_addr, const size_t num_bytes) 
{
    /* flash_addr and num_bytes restriction is to prevent possible unaligned
       exceptions. */

    if (flash_addr & 0x3)
    {
        return ALT_E_ERROR;
    }

    if (num_bytes & 0x3)
    {
        return ALT_E_ERROR;
    }

    if (num_bytes == 0)
    {
        /* Do not report this as a success. If a indirect write was not
         / previously completed, it may be cleared already, at which point
         / alt_qspi_indirect_write_is_complete() will never report true. */
        return ALT_E_ERROR;
    }

    if (flash_addr > qspi_config.device_size)
    {
        return ALT_E_ERROR;
    }

    if (flash_addr + num_bytes > qspi_config.device_size)
    {
        return ALT_E_ERROR;
    }

    /* Verify that there is not already a write in progress. */
    if (ALT_QSPI_INDWR_RDSTAT_GET(alt_read_word(ALT_QSPI_INDWR_ADDR)))
    {
        return ALT_E_ERROR;
    }

    /* Configure indirect write parameters */
    return alt_qspi_indirect_write_start_bank(flash_addr, num_bytes);
}

ALT_STATUS_CODE alt_qspi_indirect_write_finish(void) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    if (status == ALT_E_SUCCESS)
    {
        status = qspi_config.wait_func(ALT_QSPI_TIMEOUT_INFINITE);
    }

    return status;
}

ALT_STATUS_CODE alt_qspi_indirect_write_cancel(void) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    if (status == ALT_E_SUCCESS) 
    {
        status = qspi_config.wait_func(ALT_QSPI_TIMEOUT_INFINITE);
    }

    if (status == ALT_E_SUCCESS)
    {
        /* An indirect operation may be cancelled at any time by setting Indirect
         / Transfer Control Register bit [1]. */
        alt_write_word(ALT_QSPI_INDWR_ADDR, ALT_QSPI_INDWR_CANCEL_SET_MSK);
    }

    return status;
}

uint32_t alt_qspi_indirect_write_fill_level(void) 
{
    /* Return the SRAM Fill Level (Indirect Write Partition) Field of the SRAM
     / Fill Register to get the SRAM Fill Level for the Indirect Write Partition
     / in units of SRAM Words (4 bytes). */
    return ALT_QSPI_SRAMFILL_INDWRPART_GET(alt_read_word(ALT_QSPI_SRAMFILL_ADDR));
}

uint32_t alt_qspi_indirect_write_watermark_get(void) 
{
    /* Return the Watermark value in the Indirect Write Transfer Watermark Register. */
    return alt_read_word(ALT_QSPI_INDWRWATER_ADDR);
}

ALT_STATUS_CODE alt_qspi_indirect_write_watermark_set(const uint32_t watermark) 
{
    /* Verify that there is not already a write in progress. */
    if (ALT_QSPI_INDWR_RDSTAT_GET(alt_read_word(ALT_QSPI_INDWR_ADDR))) 
    {
        return ALT_E_ERROR;
    }

    /* Set the Watermark value in the Indirect Write Transfer Watermark Register. */
    alt_write_word(ALT_QSPI_INDWRWATER_ADDR, watermark);

    return ALT_E_SUCCESS;
}

bool alt_qspi_indirect_write_is_complete(void) 
{
    /* The value of the Indirect Completion Status Field of the Indirect Write
     / Transfer Control Register is set by hardware when an indirect write
     / operation has completed. */
    return (alt_read_word(ALT_QSPI_INDWR_ADDR) & ALT_QSPI_INDWR_INDDONE_SET_MSK) != 0;
}

uint32_t alt_qspi_sram_partition_get(void) 
{
    /* The number of locations allocated to indirect read is equal to the value
     / of the SRAM partition register. See the documentation for this function
     / regarding the + 1 in the IP documentation. This way the get() and set()
     / will be symmetrical. */

    return ALT_QSPI_SRAMPART_ADDR_GET(alt_read_word(ALT_QSPI_SRAMPART_ADDR));
}

ALT_STATUS_CODE alt_qspi_sram_partition_set(const uint32_t read_part_size) 
{
    if (read_part_size > ((1 << ALT_QSPI_SRAMPART_ADDR_WIDTH) - 1)) 
    {
        return ALT_E_ARG_RANGE;
    }

    alt_replbits_word(ALT_QSPI_SRAMPART_ADDR, 
                      ALT_QSPI_SRAMPART_ADDR_SET_MSK,
                      ALT_QSPI_SRAMPART_ADDR_SET(read_part_size));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_erase_sector(const uint32_t addr) 
{
    return alt_qspi_erase_helper(addr, qspi_config.erase_sector_idx);
}

ALT_STATUS_CODE alt_qspi_erase_chip(void) 
{
    return alt_qspi_erase(0, qspi_config.device_size);
}

ALT_STATUS_CODE alt_qspi_dma_disable(void) 
{
    /* Clear (set to 0) the Enable DMA Peripheral Interface Field of the QSPI
     / Configuration Register to disable the DMA peripheral interface. */
    alt_clrbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_ENDMA_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_dma_enable(void) 
{
    /* Set (set to 1) the Enable DMA Peripheral Interface Field of the QSPI
     / Configuration Register to enable the DMA peripheral interface. */
    alt_setbits_word(ALT_QSPI_CFG_ADDR, ALT_QSPI_CFG_ENDMA_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_dma_config_get(uint32_t * single_type_sz, uint32_t * burst_type_sz) 
{
    /* Get the current value of the DMA Peripheral Register - dmaper */
    uint32_t dmaper = alt_read_word(ALT_QSPI_DMAPER_ADDR);

    /* For both values, a programmed value of 0 represents a single byte. The
     / actual number of bytes used is 2 ** (value in this register field). */
    *single_type_sz = 1 << ALT_QSPI_DMAPER_NUMSGLREQBYTES_GET(dmaper);
    *burst_type_sz = 1 << ALT_QSPI_DMAPER_NUMBURSTREQBYTES_GET(dmaper);

    return ALT_E_SUCCESS;
}

/*
 / Returns true if [n] is a power of 2 value otherwise returns false.
*/
static bool is_pow_2(uint32_t n) 
{
    return ((n > 0) && ((n & (n - 1)) == 0));
}

/*
 / Return the log base 2 value of a number that is known to be a power of 2.
*/
static uint32_t log2u(uint32_t value)
{
    uint32_t exp = 0;
    while ((exp < 32) && (value != (uint32_t)(1 << exp)))
    {
        ++exp;
    }
    return exp;
}

ALT_STATUS_CODE alt_qspi_dma_config_set(const uint32_t single_type_sz, const uint32_t burst_type_sz) 
{
    const uint32_t single_type_sz_max = 1 << ((1 << ALT_QSPI_DMAPER_NUMSGLREQBYTES_WIDTH) - 1);
    const uint32_t burst_type_sz_max = 1 << ((1 << ALT_QSPI_DMAPER_NUMBURSTREQBYTES_WIDTH) - 1);
    uint32_t dmaper; 

    if (alt_qspi_is_idle() == false) 
    {
        return ALT_E_ERROR;
    }

    /* FUTURE: Allow for dynamic DMA signaling sizes. case:240657. */

    if ((single_type_sz != 4) || (burst_type_sz != 4))
    {
        return ALT_E_BAD_ARG;
    }

    /* Both parameter values must be a power of 2 between 1 and 32728. */
    if ((single_type_sz > single_type_sz_max) || !is_pow_2(single_type_sz) || (burst_type_sz > burst_type_sz_max)
            || !is_pow_2(burst_type_sz)) 
    {
        return ALT_E_ARG_RANGE;
    }

    /* Get the current value of the DMA Peripheral Register - dmaper */
    dmaper = alt_read_word(ALT_QSPI_DMAPER_ADDR);
    dmaper &= ALT_QSPI_DMAPER_NUMBURSTREQBYTES_CLR_MSK & 
              ALT_QSPI_DMAPER_NUMSGLREQBYTES_CLR_MSK;
    dmaper |= ALT_QSPI_DMAPER_NUMBURSTREQBYTES_SET(log2u(burst_type_sz)) | 
              ALT_QSPI_DMAPER_NUMSGLREQBYTES_SET(log2u(single_type_sz));
    alt_write_word(ALT_QSPI_DMAPER_ADDR, dmaper);

    return ALT_E_SUCCESS;
}

/*
 / Private STIG and device commands
*/

static ALT_STATUS_CODE alt_qspi_stig_cmd_helper(uint32_t reg_value, uint32_t timeout) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    bool infinite = (timeout == ALT_QSPI_TIMEOUT_INFINITE);
    uint32_t ALT_QSPI_STIG_CMD_TMO = 10000;

    alt_write_word(ALT_QSPI_FLSHCMD_ADDR, reg_value);
    alt_write_word(ALT_QSPI_FLSHCMD_ADDR, reg_value | ALT_QSPI_FLSHCMD_EXECCMD_E_EXECUTE);

    do {
        reg_value = alt_read_word(ALT_QSPI_FLSHCMD_ADDR);
        if (!(reg_value & ALT_QSPI_FLSHCMD_CMDEXECSTAT_SET_MSK)) 
        {
            break;
        }

    } while (timeout-- || infinite);

    if (timeout == (uint32_t) -1 && !infinite) 
    {
        status = ALT_E_TMO;
    }


    while (ALT_QSPI_STIG_CMD_TMO && !alt_qspi_is_idle())
    {
        ALT_QSPI_STIG_CMD_TMO--;
    } 

    if (ALT_QSPI_STIG_CMD_TMO == 0)
    {
        status = ALT_E_TMO;
    }

    return status;
}

ALT_STATUS_CODE alt_qspi_stig_cmd(uint32_t opcode, uint32_t dummy, uint32_t timeout) 
{
    uint32_t reg;
    if (dummy > ((1 << ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_WIDTH) - 1)) 
    {
        return ALT_E_ERROR;
    }

    reg = ALT_QSPI_FLSHCMD_CMDOPCODE_SET(opcode) | 
          ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_SET(dummy);

    return alt_qspi_stig_cmd_helper(reg, timeout);
}

ALT_STATUS_CODE alt_qspi_stig_rd_cmd(uint8_t opcode, uint32_t dummy, uint32_t num_bytes, uint32_t * output,
        uint32_t timeout) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t reg_value;
    if (dummy > ((1 << ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_WIDTH) - 1)) 
    {
        return ALT_E_ERROR;
    }

    /* STIG read can only return up to 8 bytes. */
    if ((num_bytes > 8) || (num_bytes == 0)) 
    {
        return ALT_E_BAD_ARG;
    }

    reg_value =
        ALT_QSPI_FLSHCMD_CMDOPCODE_SET(opcode) | 
        ALT_QSPI_FLSHCMD_ENRDDATA_SET(ALT_QSPI_FLSHCMD_ENRDDATA_E_EN) |
        ALT_QSPI_FLSHCMD_NUMRDDATABYTES_SET(num_bytes - 1) |
        ALT_QSPI_FLSHCMD_ENCMDADDR_SET(ALT_QSPI_FLSHCMD_ENCMDADDR_E_DISD) |
        ALT_QSPI_FLSHCMD_ENMODBIT_SET(ALT_QSPI_FLSHCMD_ENMODBIT_E_DISD) |
        ALT_QSPI_FLSHCMD_NUMADDRBYTES_SET(0) |
        ALT_QSPI_FLSHCMD_ENWRDATA_SET(ALT_QSPI_FLSHCMD_ENWRDATA_E_NOACTION) |
        ALT_QSPI_FLSHCMD_NUMWRDATABYTES_SET(0) |
        ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_SET(dummy);

    status = alt_qspi_stig_cmd_helper(reg_value, timeout);
    if (status != ALT_E_SUCCESS)
    {
        return status;
    }

    output[0] = alt_read_word(ALT_QSPI_FLSHCMDRDDATALO_ADDR);

    if (num_bytes > 4)
    {
        output[1] = alt_read_word(ALT_QSPI_FLSHCMDRDDATAUP_ADDR);
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_stig_wr_cmd(uint8_t opcode, uint32_t dummy, uint32_t num_bytes, const uint32_t * input,
        uint32_t timeout)
{
    uint32_t reg_value;
    if (dummy > ((1 << ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_WIDTH) - 1)) 
    {
        return ALT_E_ERROR;
    }

    /* STIG can only write up to 8 bytes. */
    if ((num_bytes > 8) || (num_bytes == 0)) 
    {
        return ALT_E_BAD_ARG;
    }

    reg_value =
    ALT_QSPI_FLSHCMD_CMDOPCODE_SET(opcode) | ALT_QSPI_FLSHCMD_ENRDDATA_SET(ALT_QSPI_FLSHCMD_ENRDDATA_E_NOACTION)
    | ALT_QSPI_FLSHCMD_NUMRDDATABYTES_SET(0)
    | ALT_QSPI_FLSHCMD_ENCMDADDR_SET(ALT_QSPI_FLSHCMD_ENCMDADDR_E_DISD)
    | ALT_QSPI_FLSHCMD_ENMODBIT_SET(ALT_QSPI_FLSHCMD_ENMODBIT_E_DISD)
    | ALT_QSPI_FLSHCMD_NUMADDRBYTES_SET(0)
    | ALT_QSPI_FLSHCMD_ENWRDATA_SET(ALT_QSPI_FLSHCMD_ENWRDATA_E_WRDATABYTES)
    | ALT_QSPI_FLSHCMD_NUMWRDATABYTES_SET(num_bytes - 1)
    | ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_SET(dummy);

    alt_write_word(ALT_QSPI_FLSHCMDWRDATALO_ADDR, input[0]);

    if (num_bytes > 4) 
    {
        alt_write_word(ALT_QSPI_FLSHCMDWRDATAUP_ADDR, input[1]);
    }

    return alt_qspi_stig_cmd_helper(reg_value, timeout);
}

ALT_STATUS_CODE alt_qspi_stig_addr_cmd(uint8_t opcode, uint32_t dummy, uint32_t address, uint8_t addrbytes,
        uint32_t timeout) 
{
    uint32_t reg;
    if (dummy > ((1 << ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_WIDTH) - 1)) 
    {
        return ALT_E_ERROR;
    }

    reg = ALT_QSPI_FLSHCMD_CMDOPCODE_SET(
            opcode) | ALT_QSPI_FLSHCMD_NUMDUMMYBYTES_SET(dummy);

    reg |= ALT_QSPI_FLSHCMD_ENCMDADDR_SET(ALT_QSPI_FLSHCMD_ENCMDADDR_E_END);
    reg |= ALT_QSPI_FLSHCMD_NUMADDRBYTES_SET(addrbytes);

    alt_write_word(ALT_QSPI_FLSHCMDADDR_ADDR, address);

    return alt_qspi_stig_cmd_helper(reg, timeout);
}

ALT_STATUS_CODE alt_qspi_device_wren(void) 
{
    /* Write enable through STIG (not required, auto send by controller during write) */
    return alt_qspi_stig_cmd(ALT_QSPI_STIG_OPCODE_WREN, 0, 10000);
}

ALT_STATUS_CODE alt_qspi_device_wrdis(void) 
{
    /* Write disable through STIG (not required, auto send by controller during write) */
    return alt_qspi_stig_cmd(ALT_QSPI_STIG_OPCODE_WRDIS, 0, 10000);
}

ALT_STATUS_CODE alt_qspi_device_rdid(uint32_t * rdid) 
{
    /* Read flash device ID through STIG */
    return alt_qspi_stig_rd_cmd(ALT_QSPI_STIG_OPCODE_RDID, 0, 8, rdid, 10000);
}

/* Query the available erase options (each bit that is set signifies an erase size available) */
ALT_STATUS_CODE alt_qspi_query_erase_options(uint32_t * options) 
{
    int i;
    *options = 0;

    /* Set all erase sizes */
    for (i = 0; i < qspi_config.erase_count; i++) 
    {
        *options |= qspi_config.erase_sizes[i];
    }

    return ALT_E_SUCCESS;
}

/* Determine how much memory actually needs to be erased for erasing a specific area */
ALT_STATUS_CODE alt_qspi_query_erase_span(uint32_t address, uint32_t size, uint32_t * actual_address,
        uint32_t * actual_size) 
{
    uint32_t remainder;

    /* Check for NULL pointers */
    if ((actual_address == NULL) || (actual_size == NULL)) 
    {
        return ALT_E_BAD_ARG;
    }

    /* Check that the area to be erased falls inside the memory boundary */
    if ((address + size) > qspi_config.device_size) 
    {
        return ALT_E_BAD_ARG;
    }

    /* Initialize results */
    *actual_address = address;
    *actual_size = size;

    /* Align the start address to the minimum erasable size */
    remainder = address % qspi_config.erase_sizes[0];
    if (remainder != 0)
    {
        *actual_address -= remainder;
        *actual_size += remainder;
    }

    /* Align the erase size to the minimum erasable size */
    remainder = *actual_size % qspi_config.erase_sizes[0];
    if (remainder != 0)
    {
        remainder = qspi_config.erase_sizes[0] - remainder;
        *actual_size += remainder;
    }

    return ALT_E_SUCCESS;
}

/* Erase a portion of flash, using command qspi_erase_cmds[idx] */
static ALT_STATUS_CODE alt_qspi_erase_helper(uint32_t address, uint32_t idx) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    
    /* enable writing */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_qspi_device_wren();
    }

    /* send command */
    if (status == ALT_E_SUCCESS)
    {
        if (qspi_config.erase_sizes[idx] == qspi_config.device_size)
        {
            /* Chip erase, if supported, does not need an address */
            status = alt_qspi_stig_cmd(qspi_config.erase_cmds[idx], 0, 
                                       ALT_QSPI_TIMEOUT_INFINITE);
        } else {
            /* Sector/subsector block erase require an address */
            status = alt_qspi_stig_addr_cmd(qspi_config.erase_cmds[idx],
                                            0, address, qspi_config.addr_size,
                                            ALT_QSPI_TIMEOUT_INFINITE);
        }
    }

    /* wait for completion */
    if (status == ALT_E_SUCCESS)
    {
        status = qspi_config.wait_func(ALT_QSPI_TIMEOUT_INFINITE);
    }

    return status;
}

/* Erase a portion of flash */
ALT_STATUS_CODE alt_qspi_erase(uint32_t address, uint32_t size) 
{
    uint32_t actual_address;
    uint32_t actual_size;
    uint32_t crt_address;
    uint32_t crt_size;

    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    /* Check that the area to be erased falls inside the memory boundary */
    if ((address + size) > qspi_config.device_size) 
    {
        return ALT_E_BAD_ARG;
    }

    /* Check that the area can be erased precisely */
    if (status == ALT_E_SUCCESS) 
    {
        status = alt_qspi_query_erase_span(address, size, &actual_address, &actual_size);
    }

    if (status == ALT_E_SUCCESS) 
    {
        if ((actual_address != address) || (actual_size != size)) 
        {
            return ALT_E_BAD_ARG;
        }
    }

    /*Perform erasure, using the largest erase size option available */
    crt_address = address;
    crt_size = size;
    while ((crt_size != 0) && (status == ALT_E_SUCCESS)) 
    {
        int idx;
        /* try from largest to smallest erase size option */
        for (idx = qspi_config.erase_count - 1; idx >= 0; idx--) 
        {
            uint32_t erase_size = qspi_config.erase_sizes[idx];

            /* skip if current address is not a multiple of erase size */
            if ((crt_address % erase_size) != 0) 
            {
                continue;
            }

            /* skip if remaining size is smaller than the erase size */
            if (crt_size < erase_size) 
            {
                continue;
            }

            /* perform erasure */
            dprintf("DEBUG[QSPI]: INFO: Erasing %d KBytes at 0x%08x.\n", (int) erase_size / 1024, (int) crt_address);
            status = alt_qspi_erase_helper(crt_address, idx);

            /* bail out in case of error */
            if (status != ALT_E_SUCCESS) 
            {
                break;
            }

            /* adjust current address and remaining size */
            crt_address += erase_size;
            crt_size -= erase_size;

            /* break from the loop to try again larger sizes, maybe now they are aligned */
            break;
        }
    }

    /* check that we have successfully erased everything we needed to */
    if (crt_size != 0)
    {
        status = ALT_E_ERROR;
    }

    return status;
}

uint32_t get_smallest_sector_size(void)
{
    return qspi_config.erase_sizes[0]; 
}

ALT_STATUS_CODE alt_qspi_replace(uint32_t dst, const void * src, size_t size, char *bank_buffer, uint32_t buffer_size)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t real_size;
    uint32_t real_dst;
    uint32_t offset, end_offset;
    if(  ((unsigned int) src ) & 3 ||
         dst & 3 ||
         size & 3 ||
         ((unsigned int) bank_buffer) & 3)
      {return ALT_E_BAD_ARG;}

    if(ALT_E_SUCCESS != (status = alt_qspi_query_erase_span(dst, size, &real_dst, &real_size)))
      {return status;}

    /* Space from sector_start to start of replace memory */ 
    offset = (uint32_t) dst - (uint32_t) real_dst;

    /* Space from end of replace memory to end of sector */
    end_offset = (uint32_t) real_size - offset - (uint32_t) size;

    if(buffer_size < offset + end_offset)
      {return ALT_E_BUF_OVF;}

    /* Save off 0->offset */
    if(ALT_E_SUCCESS != (status = alt_qspi_read(bank_buffer, real_dst, offset)))
      {return status;}

    /* Save off end_offset->SECTOR_END */
    if(ALT_E_SUCCESS != (status = alt_qspi_read(bank_buffer + offset, 
                                          offset + size, end_offset)))
      {return status;}

    if(ALT_E_SUCCESS != (status = alt_qspi_erase(real_dst, real_size)))
      {return status;}

    /* Rewrite 0->offset */
    if(ALT_E_SUCCESS != (status = alt_qspi_write(real_dst, bank_buffer, offset)))
      {return status;}

    /* Rewrite end_offset->SECTOR_END */
    if(ALT_E_SUCCESS != (status = alt_qspi_write(offset + size, 
                                      bank_buffer + offset, end_offset)))
      {return status;}

    return alt_qspi_write(dst, src, size);
}

const char *alt_qspi_get_friendly_name()
{
    return qspi_config.friendly_name;
}

#if defined (soc_a10)
ALT_STATUS_CODE alt_qspi_ecc_start(void)
{
    int i = 0;

    /* Is the QSPI Idle? */
    if (alt_qspi_is_idle() == false)
    {
        dprintf("ECC[start][QSPI]: QSPI is not idle.\n");
        return ALT_E_ERROR;
    }

    /* Start ECC memory initialization and wait for it to complete.
     * NOTE: This needs to be done before enabling ECC.
     */
    alt_write_word(ALT_ECC_QSPI_CTL_ADDR, ALT_ECC_QSPI_CTL_INITA_SET_MSK);

    while (!(alt_read_word(ALT_ECC_QSPI_INITSTAT_ADDR) &
            (ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_SET_MSK)))
    {
        ++i;
        if (i == 100000)
        {
            dprintf("ECC[start][QSPI]: Timeout waiting for HW init.\n");
            return ALT_E_TMO;
        }
    }
    dprintf("ECC[start][QSPI]: i = %d.\n", i);

    /* INITCOMPLETE needs to be reset to 0 after init to complete state machine */
    alt_write_word(ALT_ECC_QSPI_INITSTAT_ADDR, ALT_ECC_QSPI_INITSTAT_INITCOMPLETEA_RESET);

    /* 
     * Enable ECC on QSPI.
     */
    alt_write_word(ALT_ECC_QSPI_CTL_ADDR, ALT_ECC_QSPI_CTL_ECC_EN_SET_MSK);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_qspi_ecc_get_correct_data(uint32_t address, uint32_t * data)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    
    /* Enable Data Byte control */
    alt_write_word(ALT_ECC_QSPI_ECC_DBYTECTL_ADDR, ALT_ECC_QSPI_DBYTECTL_DBEN_SET_MSK);

    /* Set the Data and ECC override access control for read and start access. */
    alt_write_word(ALT_ECC_QSPI_ECC_ACCCTL_ADDR,
                     ALT_ECC_QSPI_ACCCTL_DATAOVR_SET_MSK
                   | ALT_ECC_QSPI_ACCCTL_ECCOVR_SET_MSK);

    /* Read the ECC corrected data */
    status = alt_write_word(ALT_ECC_QSPI_ECC_ADDRBUS_ADDR, address);
    *data = alt_read_word(ALT_ECC_QSPI_ECC_RDATA0BUS_ADDR);

    return status;
}

bool alt_qspi_is_multidie(void)
{
    return qspi_config.micron_multi_die;
}
#endif

