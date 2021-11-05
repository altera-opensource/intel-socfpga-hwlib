/******************************************************************************
*
* Copyright 2016 Altera Corporation. All Rights Reserved.
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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/alt_nand.c#1 $
 */

#include "hwlib.h"
#include "alt_clock_manager.h"
#include "alt_nand.h"
#include "socal/alt_nand.h"
#include "socal/alt_rstmgr.h"
#include "socal/alt_sysmgr.h"
#include "socal/hps.h"
#include "socal/socal.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <alt_printf.h>

#ifdef DEBUG_NAND
  #define dprintf printf
#else
  #define dprintf null_printf
#endif

typedef uint32_t (*nand_interrupt_handler_t)(uint32_t interrupt_status_register, uint32_t interrupt_status_mask );


/* These are default values and are overwritten at initialization */
#define ALT_NAND_PAGE_SIZE                  (2048)
#define ALT_NAND_PAGE_SHIFT                 (11)
#define ALT_NAND_SPARE_SIZE                 (64)  /* Spare bytes per page. */
#define ALT_NAND_PAGES_PER_BLOCK            (64)
#define ALT_NAND_BLOCK_SIZE                 ((ALT_NAND_PAGE_SIZE*ALT_NAND_PAGES_PER_BLOCK) + (ALT_NAND_SPARE_SIZE*ALT_NAND_PAGES_PER_BLOCK))
#define ALT_NAND_ECC_CORRECT                (8)    /* 8 bit ECC. */
#define ALT_NAND_SPARE_SKIP                 (2)
/* Skip the first 2 bytes of the spare space. */

#define ALT_NAND_BLOCK_SHIFT                (6)    /* from page boundary */
#define ALT_NAND_MANUFACTURER_ID            (0x1)
#define ALT_NAND_DEVICE_ID                  (0xd3)
#define ALT_NAND_REVISION                   (5)

#define ALT_NAND_NUMBER_OF_PLANES           (2)
#define ALT_NAND_DEVICE_WIDTH               (0)
#define ALT_NAND_FIRST_BLOCK_OF_NEXT_PLANE  (2048)

/* LUNS = logic units */
#define ALT_NAND_NUM_OF_LUNS                (2)
#define ALT_NAND_NUM_OF_BLOCK_PER_LUNS      (512)
#define ALT_NAND_NUM_OF_BLOCK_TOTAL         (ALT_NAND_NUM_OF_LUNS * ALT_NAND_NUM_OF_BLOCK_PER_LUNS)

#define ALT_NAND_MAP_00                    (0x00000000)
#define ALT_NAND_MAP_01                    (0x04000000)
#define ALT_NAND_MAP_10                    (0x08000000)
#define ALT_NAND_MAP_11                    (0x0C000000)

#define ALT_NAND_ADDR_MAP_CMD_MAP_LSB_INDEX     (26)
#define ALT_NAND_ADDR_MAP_BANK_SEL_LSB_INDEX    (24)
#define ALT_NAND_ADDR_MAP_MEM_ADDR_LSB_INDEX    (0)

#define ALT_NAND_10_OP_DEFAULT_AREA         (0x0042)
#define ALT_NAND_10_OP_MAIN_AND_SPARE       (0x0043)
#define ALT_NAND_10_OP_ERASE_BLOCK          (0x0001)
#define ALT_NAND_10_OP_LOAD_PAGE            (0x0060)
#define ALT_NAND_10_OP_DEST_ADDR            (0x0061)
#define ALT_NAND_10_OP_WRITE_PAGE           (0x0062)

#define ALT_NAND_10_OP_READ_PIPE            (0x2000)
#define ALT_NAND_10_OP_WRITE_PIPE           (0x2100)

#define ALT_UINT32_MASK                     ((uint32_t) -1)

#define ALT_NAND_BOOTSTRAP_TWO_ROW_ADDR_CYCLES_EABLE    (1)
#define ALT_NAND_BOOTSTRAP_TWO_ROW_ADDR_CYCLES_DISABLE  (0)

#define ALT_NAND_FLASH_MEM_BANK_0           (0)
#define ALT_NAND_FLASH_MEM_BANK_1           (1)
#define ALT_NAND_FLASH_MEM_BANK_2           (2)
#define ALT_NAND_FLASH_MEM_BANK_3           (3)


uint32_t alt_nand_poll_for_interrupt_status_register(uint32_t reg, uint32_t settings);
uint32_t ffs32(uint32_t v);
uint32_t alt_nand_compose_map10_cmd_addr(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr);
int32_t alt_nand_full_page_read_with_map10(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t *buffer);
void alt_nand_write_indirect_data(const uint32_t address, const uint32_t value);
uint32_t alt_nand_read_indirect_data(const uint32_t address);
int32_t alt_nand_full_page_write_with_map10(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, const uint32_t *buffer);
void alt_nand_full_page_read_with_map10_post_read_with_map01(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t *buffer);
void alt_nand_full_page_write_with_map10_post_write_with_map01(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, const uint32_t *buffer);
void alt_nand_set_sysmgr_bootstrap_value(uint32_t  bootstrp_inhibit_init,
                                     uint32_t  bootstrp_inhibit_b0p0_load,
                                     uint32_t  bootstrp_512b_device,
                                     uint32_t  bootstrp_two_row_addr_cycles);
void alt_nand_reset_bank(uint32_t bank);
uint32_t  alt_nand_bank_get(void);
void alt_nand_dma_write_cmd_structure(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, const uint32_t page_count, uint64_t mem_addr, int32_t is_read_op, const uint32_t burst_len);
void alt_nand_dma_set_enabled(int32_t is_enabled);
int32_t alt_nand_dma_page_read(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t mem_addr);
int32_t alt_nand_dma_page_write(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t mem_addr);
void alt_nand_dma_page_callback(ALT_STATUS_CODE status, void *callback_arg);
void nand_print_device(void);
uint32_t nand_read_register(uint32_t offset);
uint32_t alt_nand_num_blocks_per_plane_get(void);
static __inline uint32_t alt_nand_compose_map01_cmd_addr(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr);
static __inline uint32_t alt_nand_get_interrupt_status_register_addr(const uint32_t bank);
static __inline uint32_t alt_nand_get_interrupt_enable_register_addr(const uint32_t bank);
static __inline uint32_t alt_nand_get_device_reset_register_bank(const uint32_t bank);
uint32_t  nand_read_register(const uint32_t offset);
void alt_nand_rb_pin_mode_clear(uint32_t mask);
void alt_nand_rb_pin_mode_set(uint32_t mask);


static uint32_t real_table[ALT_NAND_NUM_OF_BLOCK_TOTAL/32];
alt_nand_bad_block_table_t nand_bad_block_table = real_table;
static int s_nand_is_interrupt_enabled = false;
static uint32_t g_nand_interrupt_status_register_poll_counter_limit;
static nand_interrupt_handler_t s_nand_interrupt_handler = NULL;

/*
 * This type defines a structure to hold config/status/control access addresses of the NAND
 * flash controller. The NAND controller is located at ALT_NAND_CFG_ADDR
 */
typedef struct  {
    ALT_NAND_CFG_raw_t*         cfg;            /* NAND configuration block */
    ALT_NAND_PARAM_raw_t*       param;          /* NAND parameter block */
    ALT_NAND_STAT_raw_t*        stat;           /* NAND status block */
    ALT_NAND_ECC_raw_t*         ecc;            /* NAND ecc block */
    ALT_NAND_DMA_raw_t*         dma;            /* NAND dma block */
    volatile uint32_t * const   ctrl_addr;      /* indirect access address control */
    volatile uint32_t * const   data_addr;      /* fifo access address control */
} ALT_NAND_MGR_t;

/*
 * This type defines a structure to hold identification and type information for the
 * current NAND device. Each of these variables is pulled from the NAND_MGR structure.
 */
typedef struct 
{
  uint32_t      mfg_id;                      /* Manufacturer ID of NAND */
  uint32_t      dev_id;                      /* NAND Device ID */
  uint32_t      dev_param_0;                 /* 3rd byte of Device sig. Only updated for legacy devices */
  uint32_t      dev_param_1;                 /* 4th byte of Device sig */
  uint32_t      page_size;
  uint32_t      spare_size;
  uint32_t      rev;
  uint32_t      page;
  uint32_t      onfi_dev_features;
  uint32_t      onfi_optional_commands;
  uint32_t      onfi_timing_mode;
  uint32_t      onfi_pgm_cache_timing_mode;
  uint32_t      onfi_compliant;
  uint32_t      onfi_dev_num_luns;
  uint32_t      onfi_dev_num_blks_per_lun;
  uint32_t      features;
  uint32_t      num_planes;
  uint32_t      pages_per_blk;
  uint32_t      dev_width;
  uint32_t      blk_size;
  uint32_t      spare_area_skip_bytes;
  uint32_t      first_blk_of_next_plane;
  uint32_t      page_size_32;
  uint32_t      page_shift;
  uint32_t      blk_shift;
  uint32_t      dma_burst_length;
  uint32_t      ecc_correct;
} FLASH_CHARACTERIZATION_t;

ALT_NAND_MGR_t nand_io = 
{    
        (ALT_NAND_CFG_raw_t*)ALT_NAND_CFG_ADDR, 
        (ALT_NAND_PARAM_raw_t*)ALT_NAND_PARAM_ADDR,
        (ALT_NAND_STAT_raw_t*)ALT_NAND_STAT_ADDR,
        (ALT_NAND_ECC_raw_t*)ALT_NAND_ECC_ADDR,
        (ALT_NAND_DMA_raw_t*)ALT_NAND_DMA_ADDR,
        (uint32_t *)ALT_NANDDATA_ADDR,              /*control_address */   
        ALT_CAST(uint32_t *, (ALT_CAST(char *, (ALT_NANDDATA_ADDR)) + 0x10)) /* data address */
};
ALT_NAND_MGR_t * nand = &nand_io; 

FLASH_CHARACTERIZATION_t memory =
{
    /* mfg_id                       */  ALT_NAND_MANUFACTURER_ID,
    /* dev_id                       */  ALT_NAND_DEVICE_ID,
    /* dev_param_0                  */  0,
    /* dev_param_1                  */  0,
    /* page_size                    */  ALT_NAND_PAGE_SIZE,
    /* spare_size                   */  ALT_NAND_SPARE_SIZE,
    /* rev                          */  ALT_NAND_REVISION,
    /* page                         */  0,
    /* onfi_dev_feature             */  0,
    /* onfi_optional_commands       */  0,
    /* onfi_timing_mode             */  0,
    /* onfi_pgm_cache_timing_mode   */  0,
    /* onfi_compliant               */  1,
    /* onfi_dev_num_luns            */  0,
    /* onfi_dev_num_blks_per_lun    */  0,
    /* features                     */  0,
    /* num_planes                   */  ALT_NAND_NUMBER_OF_PLANES,
    /* pages_per_blk                */  ALT_NAND_PAGES_PER_BLOCK,
    /* dev_width                    */  ALT_NAND_DEVICE_WIDTH,
    /* blk_size                     */  ALT_NAND_PAGES_PER_BLOCK * ALT_NAND_PAGE_SIZE,
    /* spare_area_skip_bytes        */  ALT_NAND_SPARE_SKIP,
    /* first blk of next plane      */  ALT_NAND_FIRST_BLOCK_OF_NEXT_PLANE,
    /* page_size_in_32              */  ALT_NAND_PAGE_SIZE / sizeof(uint32_t),
    /* page_shift                   */  ALT_NAND_PAGE_SHIFT,
    /* blk_shift                    */  ALT_NAND_BLOCK_SHIFT,
    /* dma_burst_length             */  0,
    /* ecc_correct                  */  ALT_NAND_ECC_CORRECT,
};
FLASH_CHARACTERIZATION_t * flash = &memory;



ALT_STATUS_CODE alt_nand_init(const bool load_block0_page0,
                                    const bool page_size_512,
                                    alt_nand_flash_custom_init_t custom_init,
                                    void *user_arg)
{
    ALT_NAND_CFG_raw_t * cfg = (ALT_NAND_CFG_raw_t *)(nand->cfg);
    ALT_NAND_PARAM_raw_t * param = (ALT_NAND_PARAM_raw_t *)(nand->param);
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint32_t x;

    /* Set the NAND controller in reset*/
    #if defined (soc_cv_av)
        alt_setbits_word(ALT_RSTMGR_PERMODRST_ADDR, ALT_RSTMGR_PERMODRST_NAND_SET_MSK);
    #elif defined (soc_a10)
        alt_setbits_word(ALT_RSTMGR_PER0MODRST_ADDR, ALT_RSTMGR_PER0MODRST_NAND_SET_MSK);
    #endif

    /* Set the NAND bootstrap settings in the SYSMGR */
    alt_nand_set_sysmgr_bootstrap_value( ALT_NAND_BOOTSTRAP_INHIBIT_INIT_DISABLE,
                                         load_block0_page0,  
                                         page_size_512,
                                         ALT_NAND_BOOTSTRAP_TWO_ROW_ADDR_CYCLES_DISABLE);

    /* Bring the NAND controller out of reset */
    #if defined (soc_cv_av)
        alt_clrbits_word(ALT_RSTMGR_PERMODRST_ADDR, ALT_RSTMGR_PERMODRST_NAND_SET_MSK);
    #elif defined (soc_a10)
        alt_clrbits_word(ALT_RSTMGR_PER0MODRST_ADDR, ALT_RSTMGR_PER0MODRST_NAND_SET_MSK);
    #endif
                             
    g_nand_interrupt_status_register_poll_counter_limit = (uint32_t)(-1);

    ret = (*custom_init)(user_arg);
    if (ret == ALT_E_RESERVED)    /* no custom initialization being done */
    {
        alt_nand_reset_bank(0);
    }

    /* Read flash device characterization into flash struct */
    flash->mfg_id = alt_read_word(&param->manufacturer_id);
    flash->dev_id = alt_read_word(&param->device_id);
    flash->dev_param_0 = alt_read_word(&param->device_param_0);
    flash->dev_param_1 = alt_read_word(&param->device_param_1);
    flash->page_size = alt_read_word(&cfg->device_main_area_size);
    flash->spare_size = alt_read_word(&cfg->device_spare_area_size);
    flash->rev = alt_read_word(&param->revision);
    flash->onfi_dev_features = alt_read_word(&param->onfi_device_features);
    flash->onfi_optional_commands = alt_read_word(&param->onfi_optional_commands);
    flash->onfi_timing_mode = alt_read_word(&param->onfi_timing_mode);
    flash->onfi_pgm_cache_timing_mode = alt_read_word(&param->onfi_pgm_cache_timing_mode);
    flash->onfi_compliant = ALT_NAND_PARAM_ONFI_DEV_NO_OF_LUNS_ONFI_DEVICE_GET(alt_read_word(ALT_NAND_PARAM_ADDR));
    flash->onfi_dev_num_luns = ALT_NAND_PARAM_ONFI_DEV_NO_OF_LUNS_NO_OF_LUNS_GET(alt_read_word(ALT_NAND_PARAM_ADDR));
    x = alt_read_word(&param->onfi_device_no_of_blocks_per_lun_l);
    flash->onfi_dev_num_blks_per_lun = (alt_read_word(&param->onfi_device_no_of_blocks_per_lun_u) << 16) + x;
    flash->features = alt_read_word(&param->features);
    x = alt_read_word(&cfg->number_of_planes);
  
    switch (x)
    {
        case 0:
             flash->num_planes = 1;
             break;
        case 1: 
             flash->num_planes = 2;
             break;
        case 3: 
             flash->num_planes = 4;
             break;
        case 7: 
             flash->num_planes = 8;
             break;
        default: 
             flash->num_planes = 1;
             break;
    }
    flash->pages_per_blk = alt_read_word(&cfg->pages_per_block);

    /* Device Width register content should automatically update SystemManager:NandGrp:BootStrap:page512 or page512x16 bit */
    flash->dev_width = alt_read_word(&cfg->device_width);

    flash->blk_size = ((flash->pages_per_blk * flash->page_size) + (flash->pages_per_blk * flash->spare_size));

    /* Set the skip bytes and then read back the result. */
    alt_write_word(&cfg->spare_area_skip_bytes, flash->spare_area_skip_bytes);
    flash->spare_area_skip_bytes = alt_read_word(&cfg->spare_area_skip_bytes);
    

    flash->first_blk_of_next_plane = alt_read_word(&cfg->first_block_of_next_plane);

    /* Set flash config based on read config */
    flash->page_size_32 = flash->page_size / sizeof(uint32_t);

    /* Set shifting values for address generation */
    flash->page_shift = ffs32(flash->page_size);
    flash->blk_shift = ffs32(flash->pages_per_blk);
  
    /* Turn off interrupt mode, ECC */
    /* This means the Denali flash controller operates in polling mode */
    alt_nand_rb_pin_mode_clear(ALT_NAND_CFG_RB_PIN_END_BANK0_SET_MSK);
    alt_nand_ecc_disable();

    alt_write_word(&cfg->first_block_of_next_plane, alt_nand_num_blocks_per_plane_get());
    flash->first_blk_of_next_plane  = alt_read_word(&cfg->first_block_of_next_plane);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_uninit(void)
{
    alt_nand_ecc_disable();
    alt_nand_dma_set_enabled( false );

    /* Set the NAND controller in reset */
    #if defined (soc_cv_av)
        alt_setbits_word(ALT_RSTMGR_PERMODRST_ADDR, ALT_RSTMGR_PERMODRST_NAND_SET_MSK);
    #elif defined (soc_a10)
        alt_setbits_word(ALT_RSTMGR_PER0MODRST_ADDR, ALT_RSTMGR_PER0MODRST_NAND_SET_MSK);
    #endif

    return ALT_E_SUCCESS;
}

uint32_t alt_nand_block_address_get(const uint32_t addr)
{
    return addr >> (flash->blk_shift + flash->page_shift); 
}

uint32_t alt_nand_page_address_get(const uint32_t addr)
{
    return addr >> flash->page_shift & ((1 << flash->blk_shift) - 1); 
}

uint32_t alt_nand_addr_compose(const uint32_t block_num, 
                                     const uint32_t page_num)
{
    return (block_num << (flash->blk_shift + flash->page_shift)) + (page_num << flash->page_shift);
}

ALT_STATUS_CODE alt_nand_block_erase(const uint32_t block_addr,
                                           alt_nand_callback_t completion_callback,
                                           void *completion_arg)
{
    int32_t ret = ALT_E_SUCCESS;
    int32_t res = -1;
    uint32_t bank = alt_nand_bank_get();
    const uint32_t interrupt_status_register = alt_nand_get_interrupt_status_register_addr( bank );
    const uint32_t addr = alt_nand_compose_map10_cmd_addr( bank, block_addr, 0 );
    
    alt_write_word(interrupt_status_register, ALT_UINT32_MASK );

    alt_nand_write_indirect_data( addr, ALT_NAND_10_OP_ERASE_BLOCK );
    
    res = alt_nand_poll_for_interrupt_status_register(interrupt_status_register,  
                                                  ALT_NAND_INT_STATUS_TIME_OUT  | 
                                                  ALT_NAND_INT_STATUS_ERASE_COMP | 
                                                  ALT_NAND_INT_STATUS_ERASE_FAIL);

    if (!(res & ALT_NAND_STAT_INTR_STAT0_ERASE_COMP_SET_MSK)) 
    {
        ret = ALT_E_ERROR;
    }

    if (ret == ALT_E_SUCCESS && completion_callback != NULL)
    {
        (*completion_callback)(ret, completion_arg);
    }

    return ret;
}

ALT_STATUS_CODE alt_nand_page_read(  const uint32_t page_addr,
                                     const uint32_t num_pages,
                                     void *dest,
                                     const uint32_t dest_size)
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint32_t i;

    uint32_t bank  = alt_nand_bank_get();     
    uint32_t page  = alt_nand_page_address_get(page_addr);
    uint32_t block = alt_nand_block_address_get(page_addr);

    /* The number of pages should not cross a block boundary */
    if( page + num_pages - 1 >= flash->pages_per_blk)
    {
        dprintf("FAIL: The number of pages crosses the block boundary. \n");
        return ALT_E_BAD_ARG;
    }

    /* dest_size should be large enough to receive all the data. */
    if( dest_size < num_pages*flash->page_size )
    {
        dprintf("FAIL: The input buffer can't hold the requested data size. \n");
        return ALT_E_BUF_OVF;
    }

    /*use dummy way to read multiple pages for now*/
    for( i = 0 ; i < num_pages ; i++ )
    {
        ret = alt_nand_full_page_read_with_map10( bank, block, page+i, (uint32_t *)dest + i*flash->page_size_32);

        if(ret != ALT_E_SUCCESS) break;
    }

    return ret;
}

ALT_STATUS_CODE alt_nand_read_page(uint32_t block, uint32_t page, uint32_t * buf)
{
    uint32_t map01_addr;
    uint32_t i;

    #ifdef DEBUG_NAND
        printf("NAND: Read page at %08x\n", (unsigned int)page);
    #endif

    /* Setup a MAP01 command address for reading one page */
    map01_addr = ALT_NAND_MAP_01 | (block << flash->blk_shift) | page;
    
    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map01_addr);

    /* Read the page through the data address */
    for (i = 0; i < flash->page_size_32; i++)
    {
        buf[i] = alt_read_word(nand->data_addr);
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_read_page_and_spare(uint32_t block, uint32_t page, uint32_t * buf)
{
    uint32_t map01_addr;
    uint32_t map10_addr;
    uint32_t i;


    #ifdef DEBUG_NAND
        printf("NAND: Read page at %08x\n", (unsigned int)page);
    #endif

    /* Setup and MAP10 command address for reading page + spare */
    map10_addr = ALT_NAND_MAP_10 | (block << flash->blk_shift) | page;

    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map10_addr);

    /* Set the access to main + spare */
    alt_write_word(nand->data_addr,  ALT_NAND_10_OP_MAIN_AND_SPARE);

    /* Setup a MAP01 command address for reading one page */
    map01_addr = ALT_NAND_MAP_01 | (block << flash->blk_shift) | page;
    
    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map01_addr);

    /* Read the page through the data address */
    for (i = 0; i < flash->page_size_32; i++)
    {
        buf[i] = alt_read_word(nand->data_addr);
    }

    /* Now read the spare area */
    for (i = flash->page_size_32; i < ((flash->spare_size / 4) + flash->page_size_32); i++)
    {
        buf[i] = alt_read_word(nand->data_addr);
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_read_page_and_spare_byte(uint32_t block, uint32_t page, uint8_t * buf)
{
    uint32_t map01_addr;
    uint32_t map10_addr;
    uint32_t i, dummy = 0;
    
    #ifdef DEBUG_NAND
        printf("NAND: Read page at %08x\n", (unsigned int)page);
    #endif

    /* Setup and MAP10 command address for reading page + spare */
    map10_addr = ALT_NAND_MAP_10 | (block << flash->blk_shift) | page;

    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map10_addr);

    /* Set the access to main + spare */
    alt_write_word(nand->data_addr,  ALT_NAND_10_OP_MAIN_AND_SPARE);

    /* Setup a MAP01 command address for reading one page */
    map01_addr = ALT_NAND_MAP_01 | (block << flash->blk_shift) | page;
    
    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map01_addr);

    /* Read the page through the data address */
    for (i = 0; i < flash->page_size; i += 4)
    {
        dummy = alt_read_word(nand->data_addr);
            
        buf[3] = (dummy >> 24) & 0xFF;
        buf[2] = (dummy >> 16) & 0xFF;
        buf[1] = (dummy >> 8) & 0xFF;
        buf[0] = (dummy >> 0) & 0xFF;
        buf += 4;
    }

    /* Now read the spare area */
    for (i = flash->page_size; i < (flash->spare_size + flash->page_size); i += 4)
    {
        dummy = alt_read_word(nand->data_addr);

        buf[3] = (dummy >> 24) & 0xFF;
        buf[2] = (dummy >> 16) & 0xFF;
        buf[1] = (dummy >> 8) & 0xFF;
        buf[0] = (dummy >> 0) & 0xFF;
        buf += 4;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_write_page(uint32_t block, uint32_t page, uint32_t * buf)
{
    uint32_t map01_addr;
    uint32_t i;

    #ifdef DEBUG_NAND
        printf("NAND: Write page at %08x\n", (unsigned int)page);
    #endif

    /* Setup a MAP01 command address for writing one page */
    map01_addr = ALT_NAND_MAP_01 | (block << flash->blk_shift) | page;

    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map01_addr);

    /* Write the page through the data address */
    for (i = 0; i < flash->page_size_32; i++)
    {
        alt_write_word(nand->data_addr, buf[i]);
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_write_page_and_spare(uint32_t block, uint32_t page, uint32_t * buf)
{
    uint32_t map01_addr, map10_addr;
    uint32_t i;

    #ifdef DEBUG_NAND
        printf("NAND: Write page at %08x\n", (unsigned int)page);
    #endif

    /* Setup a MAP10 command address for reading page + spare */
    map10_addr = ALT_NAND_MAP_10 | (block << flash->blk_shift) | page;

    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map10_addr);

    /* Set the access to main + spare */
    alt_write_word(nand->data_addr,  ALT_NAND_10_OP_MAIN_AND_SPARE);

    /* Setup a MAP01 command address for writing one page */
    map01_addr = ALT_NAND_MAP_01 | (block << flash->blk_shift) | page;

    /* Write the address to the flash controller */
    alt_write_word(nand->ctrl_addr, map01_addr);

    /* Write the page through the data address */
    for (i = 0; i < flash->page_size_32; i++)
    {
        alt_write_word(nand->data_addr, buf[i]);
    }

    /* Write the spare through the data address */
    for (i = flash->page_size_32; i < ((flash->spare_size / 4) + flash->page_size_32); i++)
    {
        alt_write_word(nand->data_addr, buf[i]);
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_page_write(const uint32_t page_addr, 
                                          const uint32_t num_pages,
                                          const void *src,
                                          const uint32_t src_size)
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint32_t i;
    /* currently only one page */
    uint32_t bank  = alt_nand_bank_get();     
    uint32_t page  = alt_nand_page_address_get(page_addr);
    uint32_t block = alt_nand_block_address_get(page_addr);

    /* The number of pages should not cross a block boundary */
    if( page + num_pages - 1 >= flash->pages_per_blk)
    {
        dprintf("FAIL: The number of pages crosses the block boundary. \n");
        return ALT_E_BAD_ARG;
    }

    if( src_size % flash->page_size )
    {
        dprintf("FAIL: Don't allow write partial page.\n");
        return ALT_E_BAD_ARG;
    }

    /*use dummy way to write multiple pages for now*/
    for( i = 0 ; i < num_pages ; i++ )
    {
        ret = alt_nand_full_page_write_with_map10( bank, block, page+i, (uint32_t *)src + i*flash->page_size_32);

        if(ret != ALT_E_SUCCESS) break;
    }

    return ret;
}

ALT_STATUS_CODE alt_nand_page_dma_read(const uint32_t page_addr, 
                                             const uint32_t num_pages,
                                             void *dest,
                                             const uint32_t dest_size,
                                             alt_nand_callback_t completion_callback,
                                             void *completion_arg)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t mem_addr = page_addr;
    uint32_t dest_addr = (uint32_t)dest;
    uint32_t buff_size = dest_size;

    uint32_t bank  = alt_nand_bank_get();     
    uint32_t page;
    uint32_t block;
    uint32_t i;

    for (i = 0; (i < num_pages) && (buff_size >= flash->page_size); i++) {

        page  = alt_nand_page_address_get(mem_addr);
        block = alt_nand_block_address_get(mem_addr);
        
        status = alt_nand_dma_page_read(bank, block, page, dest_addr);
        if (status == ALT_E_SUCCESS)
        {    
            mem_addr   += flash->page_size;
            dest_addr  += flash->page_size;
            buff_size  -= flash->page_size;
        }
        else
            break;
    }

    if (status == ALT_E_SUCCESS)
    {
        (*completion_callback)(status, completion_arg);
    }

    return status;
}

ALT_STATUS_CODE alt_nand_page_dma_write(const uint32_t page_addr, 
                                              const uint32_t num_pages,
                                              const void *src,
                                              const uint32_t src_size,
                                              alt_nand_callback_t completion_callback,
                                              void *completion_arg)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t mem_addr = page_addr;
    uint32_t src_addr = (uint32_t)src;
    uint32_t buff_size = src_size;

    uint32_t bank  = alt_nand_bank_get();     
    uint32_t page;
    uint32_t block;
    uint32_t i;

    for (i = 0; (i < num_pages) && (buff_size >= flash->page_size); i++) {

        page  = alt_nand_page_address_get(mem_addr);
        block = alt_nand_block_address_get(mem_addr);

        status = alt_nand_dma_page_write(bank, block, page, src_addr);
        if (status == ALT_E_SUCCESS)
        {    
            mem_addr   += flash->page_size;
            src_addr   += flash->page_size;
            buff_size  -= flash->page_size;
        }
        else
            break;
    }

    if (status == ALT_E_SUCCESS)
    {
        (*completion_callback)(status, completion_arg);
    }

    return status;
}

ALT_STATUS_CODE alt_nand_ecc_enable(const ALT_NAND_ECC_CORRECTION_t ecc_correction)
{
    ALT_NAND_CFG_raw_t * cfg = (ALT_NAND_CFG_raw_t *)(nand->cfg);
    alt_setbits_word(&cfg->ecc_enable, ALT_NAND_CFG_ECC_EN_FLAG_SET_MSK);

    /* Set the ecc_correction */
    flash->ecc_correct = ecc_correction;
    alt_write_word(&cfg->ecc_correction, flash->ecc_correct);

    /* Set the skip bytes */
    flash->spare_area_skip_bytes = ALT_NAND_SPARE_SKIP;
    alt_write_word(&cfg->spare_area_skip_bytes, flash->spare_area_skip_bytes);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_ecc_disable(void)
{
    ALT_NAND_CFG_raw_t * cfg = (ALT_NAND_CFG_raw_t *)(nand->cfg);
    alt_clrbits_word(&cfg->ecc_enable, ALT_NAND_CFG_ECC_EN_FLAG_SET_MSK); 
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_ecc_status_get(ALT_NAND_FLASH_ECC_STATUS_t *ecc_status)
{
    ALT_NAND_ECC_raw_t * ecc = (ALT_NAND_ECC_raw_t *)(nand->ecc);
    uint32_t status;
 
    #if defined (soc_cv_av)
        status = alt_read_word(&ecc->ECCCorInfo_b01);
    #elif defined (soc_a10)
        status = alt_read_word(&ecc->ecccorinfo_b01);
    #endif
    ecc_status->corrected_errors[0] = (status & ALT_NAND_ECC_ECCCORINFO_B01_MAX_ERRORS_B0_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B01_MAX_ERRORS_B0_LSB;   
    ecc_status->corrected_errors[1] = (status & ALT_NAND_ECC_ECCCORINFO_B01_MAX_ERRORS_B1_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B01_MAX_ERRORS_B1_LSB;   
    ecc_status->uncorrected_error[0] = (status & ALT_NAND_ECC_ECCCORINFO_B01_UNCOR_ERR_B0_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B01_UNCOR_ERR_B0_LSB;   
    ecc_status->uncorrected_error[1] = (status & ALT_NAND_ECC_ECCCORINFO_B01_UNCOR_ERR_B1_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B01_UNCOR_ERR_B1_LSB;   
    #if defined (soc_cv_av)
        status = alt_read_word(&ecc->ECCCorInfo_b23); 
    #elif defined (soc_a10)
        status = alt_read_word(&ecc->ecccorinfo_b23);
    #endif
    ecc_status->corrected_errors[2] = (status & ALT_NAND_ECC_ECCCORINFO_B23_MAX_ERRORS_B2_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B23_MAX_ERRORS_B2_LSB;   
    ecc_status->corrected_errors[3] = (status & ALT_NAND_ECC_ECCCORINFO_B23_MAX_ERRORS_B3_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B23_MAX_ERRORS_B3_LSB;   
    ecc_status->uncorrected_error[2] = (status & ALT_NAND_ECC_ECCCORINFO_B23_UNCOR_ERR_B2_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B23_UNCOR_ERR_B2_LSB;   
    ecc_status->uncorrected_error[3] = (status & ALT_NAND_ECC_ECCCORINFO_B23_UNCOR_ERR_B3_SET_MSK) >> ALT_NAND_ECC_ECCCORINFO_B23_UNCOR_ERR_B3_LSB;   
    return ALT_E_SUCCESS;
}

uint32_t alt_nand_int_status_get(void)
{
    uint32_t bank = alt_nand_bank_get();
    uint32_t reg = alt_nand_get_interrupt_status_register_addr(bank);
    return alt_read_word(reg);
}

ALT_STATUS_CODE alt_nand_int_clear(const uint32_t mask)
{
    uint32_t bank = alt_nand_bank_get();
    uint32_t reg = alt_nand_get_interrupt_status_register_addr(bank);
    alt_setbits_word(reg, mask);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_int_disable(const uint32_t mask)
{
    uint32_t bank = alt_nand_bank_get();
    uint32_t reg = alt_nand_get_interrupt_enable_register_addr(bank);
    alt_clrbits_word(reg, mask);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_nand_int_enable(const uint32_t mask)
{
    uint32_t bank = alt_nand_bank_get();
    uint32_t reg  = alt_nand_get_interrupt_enable_register_addr(bank);
    alt_setbits_word(reg, mask);
    return ALT_E_SUCCESS;
}

uint32_t alt_nand_num_planes_get(void)
{
    return flash->num_planes; 
}

uint32_t alt_nand_num_blocks_per_plane_get(void)
{
    return (flash->onfi_dev_num_blks_per_lun / flash->num_planes);
}

uint32_t alt_nand_first_block_of_next_plane(void)
{
    return flash->first_blk_of_next_plane;
}

uint32_t alt_nand_num_blocks_get(void)
{
    return (alt_nand_num_planes_get() * alt_nand_num_blocks_per_plane_get()) ;
}

uint32_t alt_nand_num_pages_per_block_get(void)
{
    return flash->pages_per_blk;
}

uint32_t alt_nand_page_size_get(void)
{
    return flash->page_size;
}

uint32_t alt_nand_page_size_32_get(void)
{
    return flash->page_size_32;
}

uint32_t alt_nand_spare_size_get(void)
{
    return flash->spare_size;
}

bool alt_nand_block_is_bad(const uint32_t block_addr)
{
    bool block_is_bad = ALT_E_FALSE;
    uint32_t block_number = block_addr >> flash->blk_shift;
    uint32_t block_table_index = block_number / 32;
    uint32_t block_bit_position = block_number % 32;

    alt_nand_bad_block_table_get(nand_bad_block_table, ALT_NAND_NUM_OF_BLOCK_TOTAL/32);

    if ((( nand_bad_block_table[block_table_index] >> block_bit_position) & 0x1) == ALT_NAND_BAD_BLOCK_FLAG)
    {
        block_is_bad = ALT_E_TRUE;
    }

    return block_is_bad;
}

ALT_STATUS_CODE alt_nand_bad_block_table_get(alt_nand_bad_block_table_t bad_block_table,
                                             const uint32_t bad_block_table_len)
{
    alt_nand_callback_t dma_callback = &alt_nand_dma_page_callback;
    uint32_t completion_arg = 0;
    uint32_t total_blocks = (flash->onfi_dev_num_luns * flash->onfi_dev_num_blks_per_lun);
    uint32_t addr = (total_blocks - 1) << (flash->blk_shift + flash->page_shift);  /* highest block is reseved for bad block table  */
    uint32_t buff[ALT_NAND_PAGE_SIZE] = {0};
    uint32_t i;

    alt_nand_page_dma_read( addr, 1, buff, sizeof(buff), dma_callback, &completion_arg);
    for (i = 0; i <bad_block_table_len; i++)
    {
        bad_block_table[i] = buff[i];
    }
    return ALT_E_SUCCESS;
}

void alt_nand_rb_pin_mode_set(uint32_t mask)
{
    ALT_NAND_CFG_raw_t * cfg = (ALT_NAND_CFG_raw_t *)(nand->cfg);
    alt_setbits_word(&cfg->rb_pin_enabled, mask);
}

void alt_nand_rb_pin_mode_clear(uint32_t mask)
{
    ALT_NAND_CFG_raw_t * cfg = (ALT_NAND_CFG_raw_t *)(nand->cfg);
    alt_clrbits_word(&cfg->rb_pin_enabled, mask);
}

void alt_nand_reset_bank(uint32_t bank)
{
    ALT_NAND_CFG_raw_t * cfg = (ALT_NAND_CFG_raw_t *)(nand->cfg);

    uint32_t  interrupt_status_register = alt_nand_get_interrupt_status_register_addr(bank);
    uint32_t  device_reset_bank        = alt_nand_get_device_reset_register_bank(bank);


    /* Write on clear of all interrupt status */
    alt_write_word(interrupt_status_register, ALT_UINT32_MASK);

    /* Controller sends a RESET command to device */
    alt_setbits_word(&cfg->device_reset, device_reset_bank);

    alt_nand_poll_for_interrupt_status_register(interrupt_status_register, ALT_NAND_STAT_INTR_STAT0_RST_COMP_SET_MSK);

    /* Write on clear of all interrupt status */
    alt_write_word(interrupt_status_register, ALT_UINT32_MASK);
}



/* 
 * Count the consecutive zero bits (trailing) on the right in parallel
 *
 * Some bit fiddleing stuff.
 * From... http://graphics.stanford.edu/~seander/bithacks.html
 */
uint32_t ffs32(uint32_t v)
{
    uint32_t r = 0;
    do
    {
        if(v == 0)
            break;

        if(v & 0xFFFF0000){v >>= 16;r |= 16;}
        if(v & 0x0000FF00){v >>=  8;r |=  8;}
        if(v & 0x000000F0){v >>=  4;r |=  4;}
        if(v & 0x0000000C){v >>=  2;r |=  2;}
        if(v & 0x00000002){        ;r |=  1;}
    } while(0);

    return(r);
}

uint32_t alt_nand_poll_for_interrupt_status_register(uint32_t reg, uint32_t mask )
{
    uint32_t ret;
    uint32_t i = 0;

    if ( !s_nand_is_interrupt_enabled )
    {
        ret = alt_read_word(reg);
        while( !( ret & (mask | ALT_NAND_INT_STATUS_UNSUP_CMD ) ) )
        {
            ret = alt_read_word(reg);
            /*printf("<alt_nand_poll for interrupt status register>.interrupt status reg = %08lX\n", ret); */
            if ( ++i == g_nand_interrupt_status_register_poll_counter_limit )
            {
                break;
            }
        }

        if ( ret & ALT_NAND_STAT_INTR_EN0_UNSUP_CMD_SET_MSK )
        {
            /*printf( "Warning: Unsupported CMD interrupt INTR_STATUS_UNSUP_CMD is raised!!!!\n" ); */
        }
    }
    else
    {
        ret = s_nand_interrupt_handler(reg, mask);
    }

    return ret;
}


int32_t alt_nand_full_page_read_with_map10(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t *buffer )
{
    int32_t            ret = ALT_E_SUCCESS;
    int32_t            res = -1;
    const uint32_t    PAGES_TO_READ = 1;  /* NOTE: Only 2 bits wide */
    const uint32_t    interrupt_status_register = alt_nand_get_interrupt_status_register_addr( bank );
    const uint32_t    addr = alt_nand_compose_map10_cmd_addr( bank, block_addr, page_addr );

    alt_write_word( interrupt_status_register, ALT_UINT32_MASK );

    /* Sets up a pipeline read-ahead of for a read (0x2001) */
    alt_nand_write_indirect_data( addr, ALT_NAND_10_OP_READ_PIPE | PAGES_TO_READ );
    res = alt_nand_poll_for_interrupt_status_register( interrupt_status_register, 
                                                       ALT_NAND_INT_STATUS_TIME_OUT | 
                                                       ALT_NAND_INT_STATUS_LOAD_COMP );

    if((res &  ALT_NAND_INT_STATUS_LOAD_COMP) != 0)
    {
        alt_nand_full_page_read_with_map10_post_read_with_map01( bank, block_addr, page_addr, buffer);
    }
    else
    {
        dprintf("FAIL: Timeout loading NAND page. (%08lX,%ld,%ld)\n", res, bank, page_addr);
        ret = ALT_E_ERROR;
    }

    return ret;
}

uint32_t alt_nand_get_device_reset_register_bank(const uint32_t bank)
{
    uint32_t    ret=0;

    switch( bank )
    {
    case 0:
        ret = ALT_NAND_CFG_DEVICE_RST_BANK0_SET_MSK;
        break;
    
    case 1:
        ret = ALT_NAND_CFG_DEVICE_RST_BANK1_SET_MSK;
        break;
    
    case 2:
        ret = ALT_NAND_CFG_DEVICE_RST_BANK2_SET_MSK;
        break;
    
    case 3:
        ret = ALT_NAND_CFG_DEVICE_RST_BANK3_SET_MSK;
        break;
    
    default:
        /* info_assert(0, "Do not support more than 4 banks"); */
        break;
    }

    return ret;
}

uint32_t alt_nand_get_interrupt_status_register_addr(const uint32_t bank)
{
    ALT_NAND_STAT_raw_t * stat = (ALT_NAND_STAT_raw_t *)(nand->stat);
    uint32_t ret=0;

    switch( bank )
    {
    case 0:
        ret = (uint32_t)(&stat->intr_status0);
        break;
    
    case 1:
        ret = (uint32_t)(&stat->intr_status1);
        break;
    
    case 2:
        ret = (uint32_t)(&stat->intr_status2);
        break;
    
    case 3:
        ret = (uint32_t)(&stat->intr_status3);
        break;
    
    default:
        /* info_assert(0, "Do not support more than 4 banks"); */
        break;
    }

    return ret;
}

uint32_t alt_nand_get_interrupt_enable_register_addr(uint32_t bank)
{
    uint32_t  interrupt_enable_register=0;

    ALT_NAND_STAT_raw_t * stat = (ALT_NAND_STAT_raw_t *)(nand->stat);

    switch( bank )
    {
    case 0:
        interrupt_enable_register = (uint32_t)(&stat->intr_en0);
        /*printf("interrupt status register: %08lX \n", interrup_enable_register); */
        break;
    
    case 1:
        interrupt_enable_register = (uint32_t)(&stat->intr_en1);
        break;
    
    case 2:
        interrupt_enable_register = (uint32_t)(&stat->intr_en2);
        break;
    
    case 3:
        interrupt_enable_register = (uint32_t)(&stat->intr_en3);
        break;
    
    default:
        /* info_assert(0, "Do not support more than 4 banks"); */
        break;
    }

   return interrupt_enable_register;
}                        

uint32_t alt_nand_compose_map01_cmd_addr(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr)
{
    const uint32_t BANK_MASK = 0x3;
    const uint32_t BLOCK_ADDR_MASK = (1 << (23 - flash->blk_shift + 1)) - 1;
    const uint32_t PAGE_ADDR_MASK = (1 << flash->blk_shift) - 1;

    const uint32_t ret = ALT_NAND_MAP_01 |
                         ((bank & BANK_MASK) << ALT_NAND_ADDR_MAP_BANK_SEL_LSB_INDEX) | 
                         ((block_addr & BLOCK_ADDR_MASK) << flash->blk_shift) | 
                         (page_addr & PAGE_ADDR_MASK);

    return ret;
}

uint32_t alt_nand_compose_map10_cmd_addr(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr)
{
    const uint32_t BANK_MASK = 0x3;
    const uint32_t BLOCK_ADDR_MASK = (1 << (23 - flash->blk_shift + 1)) - 1;
    const uint32_t PAGE_ADDR_MASK =  (1 << flash->blk_shift) - 1;

    const uint32_t ret = ALT_NAND_MAP_10 |
                         ((bank & BANK_MASK) << ALT_NAND_ADDR_MAP_BANK_SEL_LSB_INDEX) | 
                         ((block_addr & BLOCK_ADDR_MASK) << flash->blk_shift) | 
                         (page_addr & PAGE_ADDR_MASK);

    return ret;
}

void alt_nand_write_indirect_data(const uint32_t address, const uint32_t value)
{
    alt_write_word(nand->ctrl_addr, address);
    alt_write_word(nand->data_addr,   value);
}

uint32_t alt_nand_read_indirect_data(const uint32_t address)
{
    alt_write_word(nand->ctrl_addr, address);
    return alt_read_word(nand->data_addr); /* data_addr is ctrl_addr + 0x10 */
}

void alt_nand_full_page_read_with_map10_post_read_with_map01(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t *buffer)
{
    const uint32_t    addr = alt_nand_compose_map01_cmd_addr( bank, block_addr, page_addr );
    uint32_t        *cur = buffer;
    uint32_t        i;

    for( i = 0; i < flash->page_size_32; ++i )
    {
        *cur = alt_nand_read_indirect_data( addr );
        cur++;
    }
}

int32_t alt_nand_full_page_write_with_map10(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, const uint32_t *buffer)
{
    int32_t            ret = 0;
    int32_t            res = -1;
    const uint32_t    PAGES_TO_READ = 1;  /* NOTE: Only 2 bits wide */
    const uint32_t    interrupt_status_register = alt_nand_get_interrupt_status_register_addr( bank );
    const uint32_t    addr = alt_nand_compose_map10_cmd_addr( bank, block_addr, page_addr );
    int i;

    alt_write_word( interrupt_status_register, ALT_UINT32_MASK );

    /* Sets up a pipeline read-ahead of "01" pages. "W" = 0 for a read (0x2001) */
    alt_nand_write_indirect_data( addr, ALT_NAND_10_OP_WRITE_PIPE | PAGES_TO_READ );

    /*
     * don't forget this one, it is a hardware bug
     */    
    for (i = 0; i < 10000; i++) ; 

    /* Temporarily disable status check as RTL doesn't seem to raise any flag.
     * But, it works.
     *res = alt_nand_poll_for_interrupt_status_register( interrup_status_register, INTR_STATUS0__TIME_OUT | INTR_STATUS0__PIPE_CPYBCK_CMD_COMP ); */
    res = ALT_NAND_INT_STATUS_PIPE_CPYBCK_CMD_COMP;
    if((res & ALT_NAND_INT_STATUS_PIPE_CPYBCK_CMD_COMP) != 0)
    {
        alt_nand_full_page_write_with_map10_post_write_with_map01( bank, block_addr, page_addr, buffer );
    }
    else
    {
        dprintf("FAIL: Timeout loading NAND page. (%08lX,%ld,%ld)\n", res, bank, page_addr);
        ret = 1;
    }

    return ret;
}

void alt_nand_full_page_write_with_map10_post_write_with_map01(const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, const uint32_t *buffer)
{
    const uint32_t    addr = alt_nand_compose_map01_cmd_addr( bank, block_addr, page_addr );
    const uint32_t    *cur = buffer;
    uint32_t        i;

    for( i = 0; i < flash->page_size_32; ++i )
    {
        alt_nand_write_indirect_data( addr, *cur );
        cur++;
    }
}


void alt_nand_set_sysmgr_bootstrap_value( uint32_t  bootstrp_inhibit_init,
                                          uint32_t  bootstrp_inhibit_b0p0_load,
                                          uint32_t  bootstrp_512b_device,
                                          uint32_t  bootstrp_two_row_addr_cycles)
{
    uint32_t settings = ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_SET(bootstrp_inhibit_init) |
                        ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_SET(bootstrp_512b_device) |  
                        ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_SET(bootstrp_inhibit_b0p0_load) |  
                        ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_SET(bootstrp_two_row_addr_cycles);

    alt_write_word(ALT_SYSMGR_NAND_BOOTSTRAP_ADDR, settings); 
}


uint32_t  alt_nand_bank_get(void)
{
    /* on SOC, only bank 0 of physical memory is connected */
    return ALT_NAND_FLASH_MEM_BANK_0;
}


int32_t alt_nand_dma_page_write(  const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t mem_addr )
{
    int32_t     ret = 0;
    uint32_t res;
    const uint32_t    interrupt_status_register = alt_nand_get_interrupt_status_register_addr( bank );

    alt_write_word( interrupt_status_register, ALT_UINT32_MASK );

    alt_nand_dma_set_enabled( true );

    alt_nand_dma_write_cmd_structure( bank, block_addr, page_addr, 1, mem_addr, false, 64);

    res = alt_nand_poll_for_interrupt_status_register( interrupt_status_register,  
                                                   ALT_NAND_INT_STATUS_DMA_CMD_COMP | 
                                                   ALT_NAND_INT_STATUS_PROGRAM_FAIL | 
                                                   ALT_NAND_INT_STATUS_LOCKED_BLK );  
                                                   /* 10.8. Order of interrupt status bits assertion  8. */

    if ( !(res & ALT_NAND_STAT_INTR_EN0_DMA_CMD_COMP_SET_MSK) )
    {
        /*printf( "Error: DMA command is incomplete: 0x%lx\n", res ); */
        ret = res;
    }

    alt_nand_dma_set_enabled( false );

    return ret;
}

int32_t alt_nand_dma_page_read(  const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, uint32_t mem_addr )
{
    int32_t        ret = 0;
    uint32_t    res;
    const uint32_t    interrupt_status_register = alt_nand_get_interrupt_status_register_addr( bank );

    alt_write_word( interrupt_status_register, ALT_UINT32_MASK );

    alt_nand_dma_set_enabled( true );

    alt_nand_dma_write_cmd_structure( bank, block_addr, page_addr, 1, mem_addr, true, 64 );

    res = alt_nand_poll_for_interrupt_status_register( interrupt_status_register,  
                                                   ALT_NAND_INT_STATUS_DMA_CMD_COMP | 
                                                   ALT_NAND_INT_STATUS_ECC_UNCOR_ERR);  
                                                   /* 10.8. Order of interrupt status bits assertion  9. */

    if ( !(res & ALT_NAND_INT_STATUS_DMA_CMD_COMP) )
    {
        /*printf( "Error: DMA command is incomplete: 0x%lx\n", res ); */
        ret = res;
    }

    alt_nand_dma_set_enabled( false );

    return ret;
}

void alt_nand_dma_set_enabled( int32_t is_enabled )
{
    ALT_NAND_DMA_raw_t * dma = (ALT_NAND_DMA_raw_t *)(nand->dma);
    alt_write_word(&dma->dma_enable, ( is_enabled ? ALT_NAND_DMA_DMA_EN_FLAG_SET_MSK : 0 ) );
    alt_read_word( &dma->dma_enable);
}

void alt_nand_dma_write_cmd_structure( const uint32_t bank, const uint32_t block_addr, const uint32_t page_addr, const uint32_t page_count, uint64_t mem_addr, int32_t is_read_op, const uint32_t burst_len )
{
    const uint32_t  MODE_BANK_MASK = 0xFF000000;
    uint32_t        addr = alt_nand_compose_map10_cmd_addr( bank, block_addr, page_addr );

    /* Transaction 1
     * Table 7.2. Address Encoding
     * Table 7.3. Data */
    alt_nand_write_indirect_data( addr, 0x2000 | (is_read_op ? 0x0 : 0x100) | page_count);

    /* Transaction 2
     * Table 7.4. Address Encoding
     * Table 7.5. Data */
    addr &= MODE_BANK_MASK;
    addr |= ((uint16_t)(mem_addr >> 16) << 8);
    alt_nand_write_indirect_data( addr, 0x2200 );

    /* Transaction 3
     * Table 7.6. Address Encoding
     * Table 7.7. Data */
    addr &= MODE_BANK_MASK;
    addr |= ((uint16_t)mem_addr << 8);
    alt_nand_write_indirect_data( addr, 0x2300 );

    /* Transaction 4
     * Table 7.8. Address Encoding
     * Table 7.9. Data */
    addr &= MODE_BANK_MASK;
    addr |= 0x10000 | burst_len << 8;  /* Enable INTR_STATUS__DMA_CMD_COMP always. */
    alt_nand_write_indirect_data( addr, 0x2400);
}


void alt_nand_dma_page_callback(ALT_STATUS_CODE status, void *callback_arg)
{
    /*printf("NAND DMA read Callback is successful.\n"); */
    /*do nothing for now*/
    (void)status;
    (void)callback_arg;

    return;
}

uint32_t  nand_read_register(const uint32_t offset)
{
    return alt_read_word(&nand->cfg + offset);
}

