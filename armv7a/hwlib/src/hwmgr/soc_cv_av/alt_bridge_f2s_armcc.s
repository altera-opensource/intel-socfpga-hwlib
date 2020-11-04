;; *****************************************************************************
;; *
;; * Copyright 2014 Altera Corporation. All Rights Reserved.
;; *
;; * Redistribution and use in source and binary forms, with or without
;; * modification, are permitted provided that the following conditions are met:
;; *
;; * 1. Redistributions of source code must retain the above copyright notice,
;; * this list of conditions and the following disclaimer.
;; *
;; * 2. Redistributions in binary form must reproduce the above copyright notice,
;; * this list of conditions and the following disclaimer in the documentation
;; * and/or other materials provided with the distribution.
;; *
;; * 3. Neither the name of the copyright holder nor the names of its contributors
;; * may be used to endorse or promote products derived from this software without
;; * specific prior written permission.
;; * 
;; * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
;; * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
;; * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
;; * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
;; * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
;; * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
;; * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
;; * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
;; * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
;; * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
;; * POSSIBILITY OF SUCH DAMAGE.
;; *
;; *****************************************************************************/

;;
;; $Id: //acds/rel/20.1std/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/soc_cv_av/alt_bridge_f2s_armcc.s#1 $
;;

    AREA ALT_BRIDGE_F2S_ARMCC, CODE, READONLY

    EXPORT alt_bridge_init_f2s_helper

alt_bridge_init_f2s_helper FUNCTION

    isb     sy
    dsb     sy

;;;    alt_setbits_word(ALT_SDR_CTL_STATICCFG_ADDR,
;;;                     ALT_SDR_CTL_STATICCFG_APPLYCFG_SET_MSK); 

    movw    r3, #20572      ; 0x505c
    movt    r3, #65474      ; 0xffc2
    ldr     r2, [r3, #0]
    orr     r2, r2, #8
    str     r2, [r3, #0]

    isb     sy
    dsb     sy
    bx      lr

    ENDFUNC

    END
