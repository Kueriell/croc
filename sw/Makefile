# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0.
# SPDX-License-Identifier: Apache-2.0

# Toolchain
RISCV_XLEN    ?= 32
RISCV_MARCH   ?= rv$(RISCV_XLEN)i_zicsr
RISCV_MABI    ?= ilp32
RISCV_PREFIX  ?= riscv64-unknown-elf-
RISCV_CC      ?= $(RISCV_PREFIX)gcc
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump
RISCV_OBJCOPY ?= $(RISCV_PREFIX)objcopy
RISCV_AR      ?= $(RISCV_PREFIX)ar

# Flags mit Optimierung für Sektions-Entfernung
RISCV_FLAGS   ?= -march=$(RISCV_MARCH) -mabi=$(RISCV_MABI) -mcmodel=medany \
                 -static -std=gnu99 -Os -nostdlib -fno-builtin -ffreestanding \
                 -ffunction-sections -fdata-sections
RISCV_CCFLAGS ?= $(RISCV_FLAGS) -Iinclude -Ilib/inc -Iuser_lib/inc -I$(CURDIR)
RISCV_LDFLAGS ?= -static -nostartfiles -lm -lgcc -Wl,--gc-sections $(RISCV_FLAGS)

# Directories
BINDIR   ?= bin
BUILDDIR ?= build
CRT0     ?= crt0.S
LINK     ?= link.ld

# Source Discovery
LIB_SOURCES      := $(wildcard lib/src/*.[cS])
TEST_SOURCES     := $(wildcard test/*.[cS])
TOP_SOURCES      := $(filter-out $(CRT0), $(wildcard *.[cS]))
USER_APP_SOURCES := $(wildcard user_apps/*.[cS])

# Object Files
CRT0_OBJ      := $(BUILDDIR)/$(basename $(CRT0)).o
LIB_OBJS      := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(LIB_SOURCES))))

# Library Sources
AES_SRCS      := user_lib/src/aes.c
AES_ACC_SRCS  := user_lib/src/aes_de_acc.c user_lib/src/aes_en_acc.c
AES_OBJS      := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(AES_SRCS))))
AES_ACC_OBJS  := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(AES_ACC_SRCS))))

# Build Directories
$(BUILDDIR) $(BINDIR) $(BINDIR)/test $(BINDIR)/user_apps:
	mkdir -p $@

# Compilation Rules
$(BUILDDIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(RISCV_CC) $(RISCV_CCFLAGS) -MMD -MP -c $< -o $@

$(BUILDDIR)/%.o: %.S
	mkdir -p $(dir $@)
	$(RISCV_CC) $(RISCV_CCFLAGS) -MMD -MP -c $< -o $@

# Build static libraries
$(BUILDDIR)/libaes.a: $(AES_OBJS)
	$(RISCV_AR) rcs $@ $^

$(BUILDDIR)/libaes_acc.a: $(AES_ACC_OBJS)
	$(RISCV_AR) rcs $@ $^

# Generic linking rule for all programs
$(BINDIR)/%.elf: $(BUILDDIR)/%.o $(CRT0_OBJ) $(LIB_OBJS) $(BUILDDIR)/libaes.a $(BUILDDIR)/libaes_acc.a $(LINK)
	mkdir -p $(dir $@)
	$(RISCV_CC) -o $@ $(filter-out $(LINK),$^) $(RISCV_LDFLAGS) -T$(LINK)

# HEX + DUMP generation
$(BINDIR)/%.hex: $(BINDIR)/%.elf
	$(RISCV_OBJCOPY) -O verilog $< $@

$(BINDIR)/%.dump: $(BINDIR)/%.elf
	$(RISCV_OBJDUMP) -D -s $< > $@

# Phony Targets
all: $(BINDIR)/user_apps \
	 $(TEST_SOURCES:test/%.c=$(BINDIR)/test/%.hex) \
	 $(TOP_SOURCES:%.c=$(BINDIR)/%.hex) \
	 $(USER_APP_SOURCES:user_apps/%.c=$(BINDIR)/user_apps/%.hex)

clean:
	rm -rf $(BINDIR) $(BUILDDIR)

-include $(wildcard $(BUILDDIR)/**/*.d)