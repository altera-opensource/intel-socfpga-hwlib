
.section .vectors, "ax"
.extern
.global __intc_interrupt_vector
.global lowlevel_init
.global _intc_main


lowlevel_init:
	mrc p15, 0, r0, c1, c1, 2
	orr r0, r0, #(0x3<<20)
	mcr p15, 0, r0, c1, c1, 2
	ldr r0, =(0xf << 20)
	mcr p15, 0, r0, c1, c0, 2
	mov r3, #0x40000000
	vmsr fpexc, r3
	bx LR
_intc_main:
	bl lowlevel_init
	b _mainCRTStartup
