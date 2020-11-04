# Copyright (C) ARM Limited, 2011. All rights reserved.
#
# This example is intended to be built with the ARM Compiler armcc

BOARD=stratix10
SCATTER_FILE=$(BOARD)_scatter.scat
TARGET=Altera-SoCFPGA-HelloWorld-Baremetal-S10-ARMClang.axf

CC=armclang
AS=armasm
LD=armlink
AR=armar

# Select build rules based on Windows or Unix
ifdef WINDIR
DONE=@if exist $(1) echo Build completed.
RM=if exist $(1) del /q $(1)
SHELL=$(WINDIR)\system32\cmd.exe
else
ifdef windir
DONE=@if exist $(1) echo Build completed.
RM=if exist $(1) del /q $(1)
SHELL=$(windir)\system32\cmd.exe
else
DONE=@if [ -f $(1) ]; then echo Build completed.; fi
RM=rm -f $(1)
endif
endif


all: $(TARGET)
	$(call DONE,$(TARGET))

rebuild: clean all

clean:
	$(call RM,*.o)
	$(call RM,$(TARGET))

hello.o: hello.c
	$(CC) -c -g --target=aarch64-arm-none-eabi -mcpu=cortex-a53 -O0 hello.c

$(TARGET): hello.o $(SCATTER_FILE)
	$(LD) hello.o -o $(TARGET) --scatter=$(SCATTER_FILE)
