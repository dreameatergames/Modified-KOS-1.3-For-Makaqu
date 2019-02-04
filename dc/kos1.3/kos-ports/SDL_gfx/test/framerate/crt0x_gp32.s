
@********************************************************************
@* crt0.s - startup code for arm-elf-gcc v0.2 (w) Groepaz/Hitmen
@* Target CPU: Arm/T9  Machine: GamePark GP32
@* Changed by CHUI
@********************************************************************

@  .include "../include/gp32.inc"

    .GLOBAL     _start
    .GLOBAL     atexit
    .GLOBAL     exit

    .EXTERN     main    @ user entry point
    .EXTERN	x_gp32_SetPrintBase
    .EXTERN     x_gp32_ShutdownGraphics
    .EXTERN	x_gp32_SetLcdBuffer
    .EXTERN	x_gp32_init_timer
    .EXTERN	x_gp32_initFramebuffer
    .EXTERN	SmcInit 

    .section ".text"
    .align 4
    .code  32

_start:
        b start_vector

        @ .text start+.rodata end

          .word 0x0c000000      @ Start of ROM code
          .word _romdata        @ End of ROM code (=start of ROM data)

        @ .data start/end

          .word _bdata          @ Base of RAM to initialize (=start of RAM data)
          .word _edata

        @ .bss start/end

          .word _bstart         @ Base of RAM to Zero Out
          .word _bend

        @ some weirdo sequence ?! ;=P

        .word 0x44450011

        .word 0x01234567
        .word 0x12345678
        .word 0x23456789
        .word 0x34567890
        .word 0x45678901
        .word 0x56789012
        .word 0x23456789
        .word 0x34567890
        .word 0x45678901
        .word 0x56789012
        .word 0x23456789
        .word 0x34567890
        .word 0x45678901
        .word 0x56789012

@    .ALIGN  4
@    .CODE   32

start_vector:
		mrc p15, 0, R5, c1, c0, 0		@ read control register
		bic r5,r5,#2				@ align control OFF
		orr r5,r5,#0x1000
		orr r5,r5,#4
		mcr p15, 0, R5, c1, c0, 0		@ write control register

		ldr sp, =0x0c78fffc

		bl	SmcInit

@		mov     r0, #8
@		bl	x_gp32_SetGraphicsMode

		mov     r1, #8
		mov     r2, #50
		mov     r0, #208666624
		add     r0, r0, #737280
		bl	x_gp32_initFramebuffer

		mov     r0, #208666624
		add     r0, r0, #737280
		bl	x_gp32_SetLcdBuffer

		mov     r0, #208666624
		add     r0, r0, #737280
		bl	x_gp32_SetPrintBase

		bl	x_gp32_init_timer

		bl      main @ jump to entry point

@ dummy restart function

exit:
		bl	x_gp32_ShutdownGraphics
        	ldr	lr,=0x00000000

@ dummy function to keep gcc happy

atexit:
          	mov	pc,lr

.pool

.END

