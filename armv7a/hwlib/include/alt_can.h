/******************************************************************************
*
* Copyright 2014 Altera Corporation. All Rights Reserved.
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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/alt_can.h#1 $
 */

/*! \file
 *  Altera - CAN Controller API
 */

/* Only include this code for Cyclone V / Arria V */
#if defined(soc_cv_av)

#ifndef __ALT_CAN_H__
#define __ALT_CAN_H__

#include "hwlib.h"
#include "alt_clock_manager.h"
#include "socal/alt_can.h"
#include "socal/alt_rstmgr.h"
#include "socal/hps.h"
#include "socal/socal.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

/******************************************************************************/
/*! \addtogroup ALT_CAN CAN Controller API
 * This module defines an API for configuring and managing the HPS CAN controllers.
 *
 * The hardware processor system (HPS) provides two controller area network (CAN) 
 * controllers for serial communication with the Cortex-A9 microprocessor unit
 * (MPU) subsystem host processor and the direct memory access (DMA) controller 
 * using the CAN protocol. The CAN controllers are instances of the Bosch
 * D_CAN controller and compliant with ISO 11898-1.
 * 
 * The CAN controllers perform communication according to the CAN protocol version 
 * 2.0 parts A and B. All communication on the CAN bus is through message objects. 
 * The CAN controller stores message objects in its internal message RAM. The host 
 * processor cannot access the message RAM directly, instead the IF1and IF2message 
 * interface register sets provide the host processor access to the messages. Messages are 
 * passed between the message RAM and the CAN core by the message handler. The 
 * message handler is also responsible for message level responsibilities such as 
 * acceptance filtering, interrupt generation, and transmission request generation.
 *
 * Features of the CAN Controller:
 * * Compliant with CAN Protocol Specification 2.0parts A and B
 * * Programmable communication rate up to 1 Mbps
 * * Holds up to 128 messages
 * * Error correction code (ECC)
 * * 11-bit standard and 29-bit extended identifiers
 * * Programmable loopback mode
 * * External direct memory access (DMA) controller for large data transfers
 * * Automatic retransmission
 *
 * For a complete details on the configuration and operation of CAN controller,
 * consult the following references:
 * * <em>Cyclone V Device Handbook Volume 3: Hard Processor System Technical
 *    Reference Manual, Chapter 25. CAN Controller </em>
 * * <em>D_CAN Controller Area Network User's Manual, Revision 1.11</em>
 * * <em>Automotive Electronics D_CAN IP Module</em>
 *
 * @{
 */

/*!
 * This type enumerates the CAN transfer mode choices.
 */
typedef enum ALT_CAN_TMOD_e
{
    ALT_CAN_TMOD_TX      = 0,        /*!< Transmit mode */
    ALT_CAN_TMOD_RX      = 1        /*!< Receive mode */
} ALT_CAN_TMOD_t;

/*!
 * This type enumerates single message object or FIFO mode for a mailbox.
 */
typedef enum ALT_CAN_FIFO_MODE_e
{
    ALT_CAN_FIFO_MODE_SINGLE_MSG,
                                /*!< This mailbox uses single message object.
                                 * In this mode, after the message object transmits/receives
                                 * a frame, it'll be automatically reenabled for the next
                                 * transmission or reception.
                                 */
    ALT_CAN_FIFO_MODE_BUFFER_NOT_LAST,
                                /*!< This mailbox belongs to FIFO buffer block, and is not
                                 *   the last message of that FIFO buffer block.
                                 *   After the message object transmits/receives a frame, it'll
                                 *   be disabled and won't be reused.
                                 */
    ALT_CAN_FIFO_MODE_BUFFER_LAST
                                /*!< This mailbox belongs to FIFO buffer block, and is
                                 *   the last message of that FIFO buffer block.
                                 *   After the message object transmits/receives a frame, it'll
                                 *   be disabled and won't be reused.
                                 */
} ALT_CAN_FIFO_MODE_t;

/*!
 * This type defines a structure for status and parameters of specified mailbox.
 */
typedef struct ALT_CAN_MAILBOX_PARAM_s 
{
    uint32_t        id;             /*!< Identifier Mask */
    uint32_t        mask;           /*!< Identifier Mask for acceptance filtering 
                                     *   of incoming messages.
                                     */
    uint32_t        dlc;            /*!< Data Length Code */
    ALT_CAN_TMOD_t  transfer_mode;  /*!< Transfer mode */
    bool            init_done;      /*!< Initialization is completed for specified
                                     *   mailbox if init_done is true
                                     */
    bool            extend;         /*!< Extended Identifier 
                                     *   true - the 29-bit (extended)
                                     *   identifier will be used for this mailbox.
                                     *   false - the 11-bit (standard)
                                     *   identifier will be used for this Message Object.
                                     */
    bool            remote;         /*!< Remote Enable 
                                     *   true - at the reception of a Remote Frame,
                                     *   TxRqst is set.
                                     *   false - at the reception of a Remote Frame,
                                     *   TxRqst is left unchanged.
                                     */
    ALT_CAN_FIFO_MODE_t fifo_mode;  /*!< Single message object, or fifo mode
                                     */
}
ALT_CAN_MAILBOX_PARAM_t;


/*!
 * The number of mailboxes of the CAN controller.
 */
#define ALT_CAN_MAILBOXES_COUNT       (128)

/*!
 * Default baudrate.
 */
#define ALT_CAN_DEFAULT_BAUDRATE      (100000)

/******************************************************************************/
/*
 * A pointer or handle to the CAN controller device instance. The ALT_CAN_DEV_t is
 * initialized by a call to alt_can_init() and subsequently used by the other CAN
 * controller API functions as a reference to a specified device.
 *
 * \internal
 * ALT_CAN_DEV_t may be a struct or reference to an opaque data
 * structure. Whatever "internal" type is suited to the needs of the
 * implementation.
 * \endinternal
 */
typedef struct ALT_CAN_DEV_s
{
    void *                      location;      /*!< HPS address of can instance. */
    ALT_CAN_MAILBOX_PARAM_t     mailboxes[ALT_CAN_MAILBOXES_COUNT];
}
ALT_CAN_DEV_t;

/*!
 * This type enumerates the HPS CAN controller instances.
 */
typedef enum ALT_CAN_CTLR_e
{
    ALT_CAN_CAN0        = (int)ALT_CAN0_OFST,  /*!< CAN0 instance. */
    ALT_CAN_CAN1        = (int)ALT_CAN1_OFST   /*!< CAN1 instance. */
} ALT_CAN_CTLR_t;

/*!
 * This type enumerates the HPS CAN message interfaces.
 */
typedef enum ALT_CAN_INTERFACE_e
{
    ALT_CAN_INTERFACE_READ   = (int)ALT_CAN_MSGIF_IF1CMR_OFST,  /*!< IF1 Register. */
    ALT_CAN_INTERFACE_WRITE  = (int)ALT_CAN_MSGIF_IF2CMR_OFST   /*!< IF2 Register. */
} ALT_CAN_INTERFACE_t;

/*!
 * This type enumerates the test types for the CAN controller.
 */
typedef enum ALT_CAN_TEST_TYPE_e
{
    ALT_CAN_TEST_SILENT     = 0,
    ALT_CAN_TEST_LOOP_BACK  = 1,
    ALT_CAN_TEST_MIXED      = 2 
} ALT_CAN_TEST_TYPE_t;

/*!
 * This type enumerates interrupt groups for the CAN controller.
 */
typedef enum ALT_CAN_LAST_ERROR_e
{
    ALT_CAN_STAT_ERROR_NOERROR,
                                /*!< Set together with CSTS.RxOK or CSTS.TxOK.
                                 */
    ALT_CAN_STAT_ERROR_STUFF,
                                /*!< More than 5 equal bits in a sequence have occurred
                                 *   in a part of a received message where this is not
                                  *  allowed.
                                 */
    ALT_CAN_STAT_ERROR_FORM,
                                /*!< A fixed format part of a received frame has
                                 *   the wrong format.
                                 */
    ALT_CAN_STAT_ERROR_ACK,
                                /*!< The message this CAN Core transmitted was not
                                 *   acknowledged by another node.
                                 */
    ALT_CAN_STAT_ERROR_BIT1,
                                /*!< During the transmission of a message
                                 *   (with the exception of the arbitration field),
                                 *   the device wanted to send a recessive level
                                 *   (bit of logical value 1), but the monitored
                                 *   bus value was dominant.
                                 */
    ALT_CAN_STAT_ERROR_BIT0,
                                /*!< During the transmission of a message (or acknowledge
                                 *   bit, or active error flag, or overload flag),
                                 *   the device wanted to send a dominant level 
                                 *   (data or identifier bit logical value 0),
                                 *   but the monitored bus value was recessive.
                                 *   During Bus_Off recovery this status is set each time
                                 *   a sequence of 11 recessive bits has been monitored.
                                 *   This enables the CPU to monitor the proceeding
                                 *   of the Bus_Off recovery sequence (indicating
                                 *   the bus is not stuck at dominant or continuously
                                 *   disturbed).
                                 */
    ALT_CAN_STAT_ERROR_CRC,
                                /*!< The CRC checksum was incorrect in the message received,
                                 *   the CRC received for an incoming message does not match
                                 *   with the calculated CRC for the received data.
                                 */
    ALT_CAN_STAT_ERROR_NOCNG 
                                /*!< Any read access to the Status Register re initializes 
                                 *   the LEC to 7. When the LEC shows the value 7, no CAN bus
                                 *   event was detected since the last CPU read access to the
                                 *   Status Register..
                                 */
} ALT_CAN_LAST_ERROR_t;

/*!
 * This type defines a structure for status of CAN instance.
 */
typedef struct ALT_CAN_STATUS_s
{
    ALT_CAN_LAST_ERROR_t    last_err_code;  /*!< The LEC field holds a code which indicates the
                                             *   type of the last error to occur on the CAN bus. 
                                             *   This field will be cleared to 0 when a message 
                                             *   has been transferred (reception or transmission)
                                             *   without error..
                                             */
    bool                    tx_success;     /*!< Since this bit was last reset by a read access 
                                             *   of the CPU, a message has been successfully 
                                             *   (error free and acknowledged by at least one 
                                             *   other node) transmitted. This bit will be reset
                                             *   by reading the Status Register.
                                             */
    bool                    rx_success;     /*!< Since this bit was last reset by a read access
                                             *   of the CPU, a message has been successfully
                                             *   received (independently of the result of 
                                             *   acceptance filtering). This bit will be reset
                                             *   by reading the Status Register.
                                             */
    bool                    err_passive;    /*!< Limited error signaling and transmission
                                             *   features.
                                             */
    bool                    warning;        /*!< At least one of the error counters in the EML 
                                             *   has reached the error warning limit of 96.
                                             */
    bool                    bus_off;        /*!< The CAN module is in Bus_Off state. */
    bool                    par_error;      /*!< The Parity Check Mechanism has detected a parity
                                             *   error in the Message RAM, this bit will be reset
                                             *   if Status Register is read.
                                             */
}
ALT_CAN_STATUS_t;

/*!
 * This type defines a structure for status of CAN instance.
 */
typedef struct ALT_CAN_BITTIME_s {
    uint32_t brp;         /*!< The value by which the oscillator frequency is 
                           *   divided for generating the bit time quanta.
                           */
                           
    uint32_t sjw;         /*!< Synchronisation jump width in TQs. The actual interpretation 
                           *   by the hardware of this value is such that one more than the 
                           *   value programmed here is used.*/
                           
    uint32_t tseg1;       /*!< The time segment before the sample point */
    
    uint32_t tseg2;       /*!< The time segment after the sample point */
    
    uint32_t brpe;        /*!< By programming BRPE the Baud Rate Prescaler 
                           *   can be extended to values up to 1023. The actual 
                           *   interpretation by the hardware is that one more 
                           *   than the value programmed by BRPE (MSBs) and BRP
                           *   (LSBs) is used.
                           */
}
ALT_CAN_BITTIME_t;

/*!
 * This type defines a structure for config parameters of CAN Message Object.
 */
typedef struct ALT_CAN_MSG_PARAM_s
{
    bool        auto_inc;           /*!< The behavior of the Message Object Number increment
                                     *   depends on the Transfer Direction, IFxCMR.WR1RD0.
                                     *   Read: The first transfer will be initiated (Busy Bit
                                     *         will set) at write of IFxCMR.MONum. The Message
                                     *         Object Number will be incremented and the next
                                     *         Message Object will be transferred from Message
                                     *         Object RAM to Interface Registers after 
                                     *         a read access of Data-Byte 7.
                                     *   Write: The first as well as each other transfer
                                     *         will be started after write access to Data- Byte7.
                                     *         The Message Object Number will be incremented 
                                     *         after successful transfer from the Interface
                                     *         Registers to the Message Object RAM..
                                     */
    bool        DMA_active;         /*!< Activation of DMA feature for subsequent internal
                                     *   IFx Register Set */
    bool        data_B;             /*!< Access Data Bytes 4-7 
                                     *   Write Direction:
                                     *   false = Data Bytes 4-7 unchanged.
                                     *   true = transfer Data Bytes 4-7 to Message Object.
                                     *   Read Direction:
                                     *   false = Data Bytes 4-7 unchanged.
                                     *   true = transfer Data Bytes 4-7 to IFxDB.
                                     */
    bool        data_A;             /*!< Access Data Bytes 0-3 
                                     *   Write Direction:
                                     *   false = Data Bytes 0-3 unchanged.
                                     *   true = transfer Data Bytes 0-3 to Message Object.
                                     *   Read Direction:
                                     *   false = Data Bytes 0-3 unchanged.
                                     *   true = transfer Data Bytes 0-3 to IFxDA.
                                     */
    bool        tx_rqst_new_dat;    /*!< Access Transmission Request Bit and NewDat Bit 
                                     *   Write Direction:
                                     *   false = TxRqst and NewDat bit will be handled according
                                     *   IFxMCTR.NewDat bit and IFxMCTR.TxRqst bit.
                                     *   true = set TxRqst and NewDat in Message Object to one
                                     *   Note: If a CAN transmission is requested by setting
                                     *   IFxCMR.TxRqst/NewDat, the TxRqst and NewDat bits in 
                                     *   the Message Object will be set to one independently
                                     *   of the values in IFxMCTR.
                                     *   Read Direction:
                                     *   false = NewDat bit remains unchanged.
                                     *   true = clear NewDat bit in the Message Object.
                                     *   Note: A read access to a Message Object can be combined
                                     *   with the reset of the control bits IntPnd and NewDat.
                                     *   The values of these bits transferred to the IFxMCTR 
                                     *   always reflect the status before resetting them.
                                     */
    bool        clr_int_pnd;        /*!< Clear Interrupt Pending Bit 
                                     *   Write Direction:
                                     *   Has no influence to Message Object at write transfer.
                                     *   Note: When writing to a Message Object, this bit is 
                                     *   ignored and copying of IntPnd flag from IFx Control 
                                     *   Register to Message RAM could only be controlled by 
                                     *   IFxMTR.IntPnd bit.
                                     *   Read Direction:
                                     *   false = IntPnd bit remains unchanged.
                                     *   true = clear IntPnd bit in the Message Object.
                                     */
    bool        control;            /*!< Access control Bits
                                     *   Write Direction:
                                     *   false = Control Bits unchanged.
                                     *   true = transfer Control Bits to Message Object.
                                     *   Note: If IFxCMR.TxRqst/NewDat bit is set, bits 
                                     *   IFxMCTR.TxRqst and IFxMCTR.NewDat will be ignored.
                                     *   Read Direction:
                                     *   false = Control Bits unchanged.
                                     *   true = transfer Control Bits to IFxMCTR Register.
                                     */
    bool        arbitration;        /*!< Access Arbitration Bits 
                                     *   Write Direction:
                                     *   false = Control Bits unchanged.
                                     *   true = transfer Control Bits to Message Object.
                                     *   Note: If IFxCMR.TxRqst/NewDat bit is set, bits 
                                     *   IFxMCTR.TxRqst and IFxMCTR.NewDat will be ignored.
                                     *   Read Direction:
                                     *   false = Control Bits unchanged.
                                     *   true = transfer Control Bits to IFxMCTR Register.
                                     */
    bool        mask;               /*!< Access mask Bits 
                                     *   Write Direction:
                                     *   false = Mask bits unchanged.
                                     *   true = transfer Identifier Mask + MDir + MXtd
                                     *   to Message Object.
                                     *   Read Direction:
                                     *   false = Mask bits unchanged.
                                     *   true = transfer Identifier Mask + MDir + MXtd 
                                     *   to IFxMSK Register.
                                     */
    bool        write;              /*!< true = write transfer 
                                     *   false = read transfer
                                     */
    bool        clr_auto_inc;       /*!< Clear the AutoInc bit without starting a transfer,
                                     *   all other bits will be ignored. 
                                     */
} __attribute__((aligned(4))) ALT_CAN_MSG_PARAM_t;

/*!
 * This type defines a structure for message mask of CAN message object.
 */
typedef struct ALT_CAN_MSG_MSK_s
{
    uint32_t  mask;                  /*!< Identifier Mask 
                                     *   ID28 - ID0 29-bit Identifier (Extended Frame).
                                     *   ID28 - ID18 11-bit Identifier (Standard Frame).
                                     */
    bool      direction;            /*!< Mask Message Direction 
                                     *   true = the message direction bit (Dir) is used for 
                                     *   acceptance filtering..
                                     */
    bool      extended;             /*!< Mask Extended Identifier 
                                     *   true = the extended identifier bit (IDE) is used for 
                                     *   acceptance filtering..
                                     */
}
ALT_CAN_MSG_MSK_t;

/*!
 * This type defines a structure for message control arbitration of CAN message object.
 */
typedef struct ALT_CAN_MSG_ARB_s
{
    uint32_t  id;                   /*!< Identifier Mask 
                                     *   ID28 - ID0 29-bit Identifier (Extended Frame).
                                     *   ID28 - ID18 11-bit Identifier (Standard Frame).
                                     */
    bool      direction;            /*!< Message Direction 
                                     *   On TxRqst, the respective Message Object is 
                                     *   transmitted as a Data Frame. On reception of 
                                     *   a Remote Frame with matching identifier, 
                                     *   the TxRqst bit of this Message Object is set 
                                     *   (if RmtEn = one)..
                                     */
    bool      extended;             /*!< Extended Identifier 
                                     *   true = The 29-bit (extended) Identifier will be used 
                                     *   for this Message Object.
                                     *   false = The 11-bit (standard) Identifier will be used
                                     *   for this Message Object.
                                     */
    bool      valid;                /*!< Message Valid
                                     *   The CPU must reset the MsgVal bit of all unused 
                                     *   Messages Objects during the initialization before 
                                     *   it resets bit Init in the CAN Control Register.
                                     *   MsgVal must also be reset if the Messages Object
                                     *   is no longer used in operation. For reconfiguration
                                     *   of Message Objects during normal operation..
                                     */
} __attribute__((aligned(4))) ALT_CAN_MSG_ARB_t;

/*!
 * This type defines a structure for message control parameters of CAN message object.
 */
typedef struct ALT_CAN_MSG_IFMCTR_s
{
    uint32_t  data_len;             /*!< Data Length Code 
                                     *   0-8 Data Frame has 0-8 data bytes.
                                     *   9-15 Data Frame has 8 data bytes.
                                     *   Note: The Data Length Code of a Message Object 
                                     *   must be defined the same as in all the corresponding 
                                     *   objects with the same identifier at other nodes.
                                     *   When the Message Handler stores a data frame,
                                     *   it will write the DLC to the value given by the 
                                     *   received message.
                                     */
    bool      block_end;            /*!< End Of Block 
                                     *   Single Message Object or last Message Object
                                     *   of a FIFO Buffer Block.
                                     */
    bool      tx_rqst;              /*!< Transmit Request 
                                     *   The transmission of this Message Object is requested
                                         and is not yet done.
                                     */
    bool      remote;               /*!< Remote Enable
                                     *   At the reception of a Remote Frame, TxRqst is set.
                                     */
    bool      rx_int;               /*!< Receive Interrupt Enable
                                     *   IntPnd will be set after a successful reception 
                                     *   of a frame.
                                     */
    bool      tx_int;               /*!< Transmit Interrupt Enable 
                                     *   IntPnd will be set after a successful transmission
                                     *   of a frame.
                                     */
    bool      accept_mask;          /*!< Use Acceptance Mask 
                                     *   (Msk28-0, MXtd, and MDir) for acceptance filtering,
                                     *   formula: 
                                     *   ((RTRRx & MDIR) == (~DIR & MDIR))
                                     *   && ((IDERx & MXtd) == (IDE & MXtd))
                                     *   && ((IDRx & Msk) == (ID & Msk)) 
                                     *   Note: If the UMask bit is set to one, the Message 
                                     *   Object's mask bits have to be programmed during 
                                     *   initialization of the Message Object before 
                                     *   MsgVal is set to one.
                                     */
    bool      int_pending;          /*!< Interrupt Pending
                                     *   This message object is the source of an interrupt.
                                     *   The Interrupt Identifier in the Interrupt Register
                                     *   will point to this message object if there is 
                                     *   no other interrupt source with higher priority.
                                     */
    bool      msg_lost;             /*!< Message Lost
                                     *   The Message Handler stored a new message into 
                                     *   this object when NewDat was still set, the CPU 
                                     *   has lost a message.
                                     */
    bool      new_data;             /*!< New Data 
                                     *   The Message Handler or the CPU has written 
                                     *   new data into the data portion of this Message Object.
                                     */
} __attribute__((aligned(4))) ALT_CAN_MSG_IFMCTR_t;

/*!
 * This type enumerates interrupt groups for the CAN controller.
 */
typedef enum ALT_CAN_INT_GROUP_e
{
    ALT_CAN_INT_GROUP_MOD_LINE   = 1UL << 0,
                                /*!< Error and status interrupts (if CCTRL.EIE=1 
                                 *   and CCTRL.SIE=1) will set line CAN_INT_STATUS
                                 *   to one, signal remains one until all pending
                                 *   interrupts are processed. If MIL is disabled,
                                 *   the message object interrupts will also affect
                                 *   this interrupt line.
                                 */
    ALT_CAN_INT_GROUP_STATUS     = 1UL << 1,
                                /*!< When a message transfer is successfully completed
                                 *   or a CAN bus error is detected, indicated by flags
                                 *   CSTS.RxOk, CSTS.TxOk and CSTS.LEC, the interrupt
                                 *   line CAN_INT_STATUS gets active (if ILE=1) and
                                 *   CIR.StatusInt is set.
                                 */
    ALT_CAN_INT_GROUP_ERROR      = 1UL << 2,
                                /*!< If CSTS.PER flag is one, or CSTS.BOff or CSTS.
                                 *   EWarn are changed, the interrupt line
                                 *   CAN_INT_STATUS gets active (if ILE=1) and
                                 *   CIR.StatusInt is set.
                                 */
    ALT_CAN_INT_GROUP_MSG_LINE   = 1UL << 3,
                                /*!< Message object interrupts will set CAN_INT_MO
                                 *   to one, signal remains one until all pending 
                                 *   interrupts are processed.
                                 */
    ALT_CAN_INT_GROUP_ALL        = 0xF
                                /*!< All Combined and Individual Interrupts.
                                 */
} ALT_CAN_INT_GROUP_t;

/*!
 * This type defines a structure for error counters of CAN controller.
 */
typedef struct ALT_CAN_ERROR_COUNTER_s
{
    uint32_t  tx_error_counter;     /*!< Transmit Error Counter
                                     *   values betwen 0 and 255.
                                     */
    uint32_t  rx_error_counter;     /*!< Receive Error Counter
                                     *   Values between 0 and 127.
                                     */
    bool      rx_above_passive;     /*!< If receive error counter has reached the error
                                     *   passive level. 0 below, 1 above.
                                     */
} __attribute__((aligned(4))) ALT_CAN_ERROR_COUNTER_t;

/*!
 * Initializes the specified CAN controller instance for use and return a device
 * handle referencing it.
 *
 * \param       can
 *              The HPS CAN controller instance to initialize.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * Initialization process:
 * * Initialize internal driver state
 * * Check clock setup (ALT_CLK_L4_SP)
 * * Take CAN instance out of reset (System Manager)
 * * Disable and clear all interrupts and status conditions
 * * Setup and initialize any expected initial CAN controller state, 100kbps
 * \endinternal
 */
ALT_STATUS_CODE alt_can_init(const ALT_CAN_CTLR_t can, ALT_CAN_DEV_t *can_dev);

/*!
 * Resets the specified CAN controller instance for use.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * Reset process:
 * * Deinitialize CAN
 * * Take CAN instance out of reset (System Manager)
 * * Initialize CAN to 100kbps
 * \endinternal
 */
ALT_STATUS_CODE alt_can_reset(ALT_CAN_DEV_t * can_dev);

/*!
 * Disables the CAN controller.
 *
 * When the CAN controller is disabled, the following occurs:
 * * The Init bit in the CAN control register (CCTRL) is set to 1.
 * * While the Init bit is 1, messages are not transferred to or from the CAN bus,
 *   and the CAN_TXD CAN bus output is held in the high state.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_disable(ALT_CAN_DEV_t *can_dev);

/*!
 * Enables the CAN controller.
 *
 * When the CAN controller is enabled, the following occurs:
 * * The Init bit in the CAN control register (CCTRL) is cleared to 0.
 * * The CAN core synchronizes itself to the data transfer on the CAN bus by waiting
 *   for the bus to reach an idle state before it can take part in bus activities and
 *   message transfers.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_enable(ALT_CAN_DEV_t *can_dev);

/*!
 * Returns ALT_E_TRUE if the CAN controller is enabled, ALT_E_FALSE otherwise
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_TRUE      The CAN controller in question is enabled.
 * \retval      ALT_E_FALSE     The CAN controller in question is disabled.
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_is_enabled(ALT_CAN_DEV_t *can_dev);

/*!
 * Configures the specified CAN controller instance to the desired baudrate.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       bitrate
 *              baudrate desired
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_baudrate_set(ALT_CAN_DEV_t * can_dev, const uint32_t bitrate);

/*!
 * Uninitializes the CAN controller referenced by the \e can_dev handle.
 *
 * This function attempts to gracefully shutdown the CAN controller by waiting for
 * any incomplete transactions to finish and then putting the CAN controller into
 * reset.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_uninit(ALT_CAN_DEV_t *can_dev);

/*!
 * Disables the specified CAN controller interrupt status conditions identified in
 * the mask.
 *
 * This function disables one or more of the status conditions as contributors to
 * the \b ALT_INT_INTERRUPT_CAN<em>n</em>_IRQ interrupt signal state.
 *
 * NOTE: A cleared bit for any status condition in the mask value does not have
 *       the effect of enabling it as a contributor to the \b
 *       ALT_INT_INTERRUPT_CAN<em>n</em>_IRQ interrupt signal state. The function
 *       alt_can_int_enable() is used to enable status source conditions.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       mask
 *              Specifies the status conditions to disable as interrupt source
 *              contributors. \e mask is a mask of logically OR'ed \ref
 *              ALT_CAN_STATUS_t values that designate the status conditions to
 *              disable.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_int_disable(ALT_CAN_DEV_t *can_dev, const uint8_t mask);

/*!
 * Enables the specified CAN controller interrupt status conditions identified in
 * the mask.
 *
 * This function enables one or more of the status conditions as contributors to
 * the \b ALT_INT_INTERRUPT_CAN<em>n</em>_IRQ interrupt signal state.
 *
 * NOTE: A cleared bit for any status condition in the mask value does not have
 *       the effect of disabling it as a contributor to the \b
 *       ALT_INT_INTERRUPT_CAN<em>n</em>_IRQ interrupt signal state. The function
 *       alt_can_int_disable() is used to disable status source conditions.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       mask
 *              Specifies the status conditions to enable as interrupt source
 *              contributors. \e mask is a mask of logically OR'ed \ref
 *              ALT_CAN_STATUS_t values that designate the status conditions to
 *              enable.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_int_enable(ALT_CAN_DEV_t *can_dev, const uint8_t mask);

/*!
 * Gets the interrupt identifier of the CAN instance.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       interrupt
 *              [out] Pointer to a 32bit structure for holding
 *              the returned interrupt identifier.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_int_ident_get(ALT_CAN_DEV_t *can_dev, uint32_t * interrupt);

/*!
 * Returns the current CAN controller status interrupt conditions.
 *
 * This function returns the current value of the CAN controller interrupt status
 * register value which reflects the current CAN controller status conditions that
 * are not disabled (i.e. masked).
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 *
 * \retval      ALT_E_TRUE      Status Interrupt has occurred.
 * \retval      ALT_E_FALSE     Status Interrupt has not occurred.
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_int_status_get(ALT_CAN_DEV_t *can_dev);

/*!
 * Gets the current configuration of the CAN bittiming.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       params
 *              [out] Pointer to a ALT_CAN_BITTIME_t structure for holding
 *              the returned CAN  bittiming parameters.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_bit_timing_get(ALT_CAN_DEV_t *can_dev, ALT_CAN_BITTIME_t * params);

/*!
 * Sets the configuration of the CAN bittiming.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       bittime
 *              Pointer to a ALT_CAN_BITTIME_t structure holding the desired
 *              CAN bittiming parameters.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_bit_timing_set(ALT_CAN_DEV_t * can_dev,ALT_CAN_BITTIME_t * bittime);

/*!
 * Returns CAN controller configurations based on speed parameter(Hz).
 *
 * \param       can_dev
 *              A pointer to the CAN controller device instance.
 *
 * \param       bitrate
 *              Speed (Hz) of the can bus.
 *
 * \param       bittime
 *              A pointer to the structure for bittiming configurations.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
* \endinternal
 */
ALT_STATUS_CODE alt_can_rate_to_bittime(ALT_CAN_DEV_t *can_dev, uint32_t bitrate,
                                        ALT_CAN_BITTIME_t * bittime);
/*!
 * Disables test mode of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_test_mode_disable(ALT_CAN_DEV_t *can_dev);

/*!
 * Enables test mode of the CAN controler and set type of it.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       type
 *              The type of test mode. Valid values: ALT_CAN_TEST_SILENT,
 *              ALT_CAN_TEST_LOOP_BACK, ALT_CAN_TEST_MIXED.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_test_mode_enable(ALT_CAN_DEV_t *can_dev, ALT_CAN_TEST_TYPE_t type);

/*!
 * Returns ALT_E_TRUE if the test mode of the CAN controller is enabled.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 * \param       type
 *              Test mode type.
 *
 * \retval      ALT_E_TRUE   - test mode is enabled.
 * \retval      ALT_E_FALSE  - test mode is not enabled
 * \retval      ALT_E_ERROR  - Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_test_mode_is_enabled(ALT_CAN_DEV_t *can_dev, ALT_CAN_TEST_TYPE_t * type);

/*!
 * Returns the error counters of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       counter
 *              [out] Pointer to the ALT_CAN_ERROR_COUNTER_t structure for holding
 *              Transmit Error Counter, Receive Error Counter and Receive Error Passive.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_error_counter_get(ALT_CAN_DEV_t *can_dev,  ALT_CAN_ERROR_COUNTER_t* counter);

/*!
 * Gets the current status of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       status
 *              [out] Pointer to a ALT_CAN_STATUS_t structure for holding
 *              the returned CAN status.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_status_get(ALT_CAN_DEV_t *can_dev, ALT_CAN_STATUS_t * status);

/*!
 * Sets the message object parameters of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       msg_obj_num
 *              Message Number. 0x01-0x80 Valid Message Number. msg_obj_num is the Message Object
 *              in the Message RAM selected for data transfer (up to 128 MsgObj).
 *
 * \param       cmd_params
 *              Pointer to a ALT_CAN_MSGIF_IF1CMR_t structure for holding
 *              the command configurations.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_cmd_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                   uint32_t msg_obj_num, ALT_CAN_MSG_PARAM_t * cmd_params);

/*!
 * Sets the message object mask of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       mask_param
 *              Pointer to a ALT_CAN_MSG_MSK_t structure for holding
 *              the message object mask.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_mask_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                    ALT_CAN_MSG_MSK_t * mask_param);

/*!
 * Gets the message object mask of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       mask_param
 *              [out]Pointer to a ALT_CAN_MSG_MSK_t structure for holding
 *              the message object mask.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_mask_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                    ALT_CAN_MSG_MSK_t * mask_param);

/*!
 * Sets the message object arbitration of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       arb_param
 *              Pointer to a ALT_CAN_MSG_ARB_t structure for holding
 *              the message object mask.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_arb_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                   ALT_CAN_MSG_ARB_t * arb_param);

/*!
 * Gets the message object arbitration of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       arb_param
 *              [out]Pointer to a ALT_CAN_MSG_ARB_t structure for holding
 *              the message object mask.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_arb_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                   ALT_CAN_MSG_ARB_t * arb_param);

/*!
 * Sets the message object control of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       ctrl
 *              Pointer to a ALT_CAN_MSGIF_IF1MCTR_t structure holding the desired
 *              CAN message parameters.
 * 
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_msg_ctrl_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        ALT_CAN_MSG_IFMCTR_t * ctrl);

/*!
 * Gets the message object control of the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       ctrl
 *              [out] Pointer to a ALT_CAN_MSGIF_IF1MCTR_t structure holding the desired
 *              CAN message parameters.
 * 
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_msg_ctrl_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        ALT_CAN_MSG_IFMCTR_t * ctrl);

/*!
 * Sets 8 data bytes on the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       dataA
 *              Value for holding 1 - 4 bytes of CAN data.
 *
 * \param       dataB
 *              Value for holding 5 - 8 bytes of CAN data.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_data_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                    uint32_t dataA, uint32_t dataB);

/*!
 * Gets 8 data bytes from the CAN controller.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       dataA
 *              [out] Pointer to integer value for holding
 *              1 - 4 bytes of CAN data.
 *
 * \param       dataB
 *              [out] Pointer to integer value for holding
 *              5 - 8 bytes of CAN data.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_if_data_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                    uint32_t * dataA, uint32_t * dataB);

/*!
 * Resets specified mailbox.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_mailbox_reset(ALT_CAN_DEV_t *can_dev, ALT_CAN_INTERFACE_t if_index,
                                      uint32_t msg_obj_num);

/*!
 * Returns ALT_E_TRUE if specified message in specified interface is busy.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \retval      ALT_E_TRUE   - Message object is writing.
 * \retval      ALT_E_FALSE  - Message object is free.
 * \retval      ALT_E_ERROR  - Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_message_is_busy(ALT_CAN_DEV_t *can_dev, ALT_CAN_INTERFACE_t if_index);

/*!
 * Puts Message Object to mailbox from interface registers.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       cmd_params
 *              Pointer to a ALT_CAN_MSGIF_IF1CMR_t structure for holding
 *              the command configurations.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_message_put(ALT_CAN_DEV_t *can_dev, ALT_CAN_INTERFACE_t if_index,
                                    uint32_t msg_obj_num, ALT_CAN_MSG_PARAM_t * cmd_params);

/*!
 * Gets Message Object from mailbox to interface registers.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       if_index
 *              Interface number. Valid number 1 or 2.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       cmd_params
 *              Pointer to a ALT_CAN_MSGIF_IF1CMR_t structure for holding
 *              the command configurations.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_message_get(ALT_CAN_DEV_t *can_dev, ALT_CAN_INTERFACE_t if_index,
                                    uint32_t msg_obj_num, ALT_CAN_MSG_PARAM_t * cmd_params);

/*!
 * Initializes mailbox for transfer with specified parameters.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       id
 *              Identifier Mask for message identifier.
 *              ID28 - ID0 29-bit Identifier (Extended Frame).
 *              ID28 - ID18 11-bit Identifier (Standard Frame).
 *
 * \param       id_mask
 *              Identifier Mask for filtering.
 *              ID28 - ID0 29-bit Identifier (Extended Frame).
 *              ID28 - ID18 11-bit Identifier (Standard Frame).
 *
 * \param       transfer_mode
 *              One transfer mode type of enumerate ALT_CAN_TMOD_t.
 *
 * \param       fifo_mode
 *              one type of enumerate ALT_CAN_FIFO_MODE_t.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_mailbox_init(ALT_CAN_DEV_t *can_dev,
                                     uint32_t msg_obj_num,
                                     uint32_t id,
                                     uint32_t id_mask,
                                     ALT_CAN_TMOD_t transfer_mode,
                                     ALT_CAN_FIFO_MODE_t fifo_mode);

/*!
 * Initializes mailbox for transfer with specified parameters.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       id
 *              Identifier Mask for message identifier.
 *              ID28 - ID0 29-bit Identifier (Extended Frame).
 *              ID28 - ID18 11-bit Identifier (Standard Frame).
 *
 * \param       id_mask
 *              Identifier Mask for filtering.
 *              ID28 - ID0 29-bit Identifier (Extended Frame).
 *              ID28 - ID18 11-bit Identifier (Standard Frame).
 *
 * \param       transfer_mode
 *              One transfer mode type of enumerate ALT_CAN_TMOD_t.
 *
 * \param       fifo_mode
 *              one type of enumerate ALT_CAN_FIFO_MODE_t.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_mailbox_ext_id_init(ALT_CAN_DEV_t *can_dev,
                                     uint32_t msg_obj_num,
                                     uint32_t id,
                                     uint32_t id_mask,
                                     ALT_CAN_TMOD_t transfer_mode,
                                     ALT_CAN_FIFO_MODE_t fifo_mode);

/*!
 * Uninitializes mailbox for transfer.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_mailbox_uninit(ALT_CAN_DEV_t *can_dev, uint32_t msg_obj_num);

/*!
 * Resets all mailboxes (uninitialize all mailboxes).
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_mailboxes_reset(ALT_CAN_DEV_t *can_dev);

/*!
 * Reads one frame of the data.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       buffer
 *              [out] Pointer to the memory for saving received data.
 *
 * \param       frame_size
 *              [out] Pointer to the memory for storing frame size in bytes.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_frame_read(ALT_CAN_DEV_t *can_dev, 
                                   uint32_t msg_obj_num,
                                   void * buffer,
                                   uint32_t *frame_size);

/*!
 * Writes one frame of the data (size of frame = data length code).
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       buffer
 *              Pointer to the memory with sending data.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_frame_write(ALT_CAN_DEV_t *can_dev,
                                    uint32_t msg_obj_num,
                                    void * buffer);

/*!
 * Reads array of the data.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       buffer
 *              [out] Pointer to the memory for saving received data.
 *
 * \param       size
 *              The requested number of data bytes to read from the CAN bus. 
 *              If size is zero, the function will return as soon as one frame has been received.
 *              If size is non-zero, the function will return when all the data requested has been received.
 *
 * \param       bytes_read
 *              [out] Pointer to the memory for storing the length of received data.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code

 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_data_read(ALT_CAN_DEV_t *can_dev, 
                                  uint32_t msg_obj_num,
                                  void * buffer,
                                  uint32_t size,
                                  uint32_t * bytes_read);

/*!
 * Writes array of the data.
 *
 * \param       can_dev
 *              A pointer to the CAN controller device block instance.
 *
 * \param       msg_obj_num
 *              Message Number. Valid values from 1 to ALT_CAN_MAILBOXES_COUNT
 *
 * \param       buffer
 *              [out] Pointer to the memory that stores the data to be written.
 *
 * \param       size
 *              The requested number of data bytes to write to CAN bus.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * \endinternal
 */
ALT_STATUS_CODE alt_can_data_write(ALT_CAN_DEV_t *can_dev,
                                   uint32_t msg_obj_num,
                                   void * buffer,
                                   uint32_t size);

/*! @} */

/*! @} */

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_CAN_H__ */

#endif /* defined soc_cv_av */

