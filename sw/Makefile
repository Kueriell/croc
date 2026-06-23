# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Paul Scheffler <paulsc@iis.ee.ethz.ch>
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>


# Toolchain
RISCV_XLEN    ?= 32
RISCV_MARCH   ?= rv$(RISCV_XLEN)i_zicsr
RISCV_MABI    ?= ilp32
RISCV_PREFIX  ?= riscv64-unknown-elf-
RISCV_CC      ?= $(RISCV_PREFIX)gcc
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump
RISCV_OBJCOPY ?= $(RISCV_PREFIX)objcopy
RISCV_AR      ?= $(RISCV_PREFIX)ar

RISCV_FLAGS   ?= -march=$(RISCV_MARCH) -mabi=$(RISCV_MABI) -mcmodel=medany \
                 -static -std=gnu99 -Os -nostdlib -fno-builtin -ffreestanding
RISCV_CCFLAGS ?= $(RISCV_FLAGS) -Iinclude -Ilib/inc -Iuser_lib/inc -I$(CURDIR)
RISCV_LDFLAGS ?= -static -nostartfiles -lm -lgcc $(RISCV_FLAGS)


# Directories
BINDIR   ?= bin
BUILDDIR ?= build
SRCDIR   ?= lib/src
CRT0     ?= crt0.S
LINK     ?= link.ld


# Source Discovery
LIB_SOURCES       := $(wildcard lib/src/*.[cS])
TEST_SOURCES      := $(wildcard test/*.[cS])
TOP_SOURCES       := $(filter-out $(CRT0), $(wildcard *.[cS]))

# user_lib groups ? libraries
AES_SRCS          := user_lib/src/aes.c
AES_ACC_SRCS      := user_lib/src/aes_de_acc.c user_lib/src/aes_en_acc.c
SHAKE_SRCS        := user_lib/src/shake256.c user_lib/src/sponge.c user_lib/src/keccak_f.c
SHAKE_ACC_SRCS    := user_lib/src/shake_acc.c


# Object Files
CRT0_OBJ       := $(BUILDDIR)/$(basename $(CRT0)).o
LIB_OBJS       := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(LIB_SOURCES))))
TEST_OBJS      := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(TEST_SOURCES))))
TOP_OBJS       := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(TOP_SOURCES))))

AES_OBJS       := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(AES_SRCS))))
AES_ACC_OBJS   := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(AES_ACC_SRCS))))
SHAKE_OBJS     := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(SHAKE_SRCS))))
SHAKE_ACC_OBJS := $(addprefix $(BUILDDIR)/,$(addsuffix .o,$(basename $(SHAKE_ACC_SRCS))))


# Build Directories
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(BINDIR):
	mkdir -p $(BINDIR)

$(BINDIR)/test:
	mkdir -p $(BINDIR)/test

$(BINDIR)/user_apps:
	mkdir -p $(BINDIR)/user_apps


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

$(BUILDDIR)/libshake.a: $(SHAKE_OBJS)
	$(RISCV_AR) rcs $@ $^

$(BUILDDIR)/libshake_acc.a: $(SHAKE_ACC_OBJS)
	$(RISCV_AR) rcs $@ $^


# Generic linking rule for TEST programs
$(BINDIR)/test/%.elf: $(BUILDDIR)/test/%.o \
	$(CRT0_OBJ) $(LIB_OBJS) \
	$(BUILDDIR)/libaes.a $(BUILDDIR)/libaes_acc.a \
	$(BUILDDIR)/libshake.a $(BUILDDIR)/libshake_acc.a \
	$(LINK)
	mkdir -p $(dir $@)
	$(RISCV_CC) -o $@ $(filter-out $(LINK),$^) $(RISCV_LDFLAGS) -T$(LINK)


# Generic linking rule for TOP-LEVEL programs
$(BINDIR)/%.elf: $(BUILDDIR)/%.o \
	$(CRT0_OBJ) $(LIB_OBJS) \
	$(BUILDDIR)/libaes.a $(BUILDDIR)/libaes_acc.a \
	$(BUILDDIR)/libshake.a $(BUILDDIR)/libshake_acc.a \
	$(LINK)
	mkdir -p $(dir $@)
	$(RISCV_CC) -o $@ $(filter-out $(LINK),$^) $(RISCV_LDFLAGS) -T$(LINK)


# Linking rules for SPECIAL user_apps programs

# AES decrypt
$(BINDIR)/user_apps/test_AES_de.elf: | $(BINDIR)/user_apps
$(BINDIR)/user_apps/test_AES_de.elf: \
	$(BUILDDIR)/user_apps/test_AES_de.o \
	$(CRT0_OBJ) $(LIB_OBJS) \
	$(BUILDDIR)/libaes.a $(BUILDDIR)/libaes_acc.a \
	$(LINK)
	$(RISCV_CC) -o $@ $(filter-out $(LINK),$^) $(RISCV_LDFLAGS) -T$(LINK)

# AES encrypt
$(BINDIR)/user_apps/test_AES_en.elf: | $(BINDIR)/user_apps
$(BINDIR)/user_apps/test_AES_en.elf: \
	$(BUILDDIR)/user_apps/test_AES_en.o \
	$(CRT0_OBJ) $(LIB_OBJS) \
	$(BUILDDIR)/libaes.a $(BUILDDIR)/libaes_acc.a \
	$(LINK)
	$(RISCV_CC) -o $@ $(filter-out $(LINK),$^) $(RISCV_LDFLAGS) -T$(LINK)

# SHAKE
$(BINDIR)/user_apps/test_shake.elf: | $(BINDIR)/user_apps
$(BINDIR)/user_apps/test_shake.elf: \
	$(BUILDDIR)/user_apps/test_shake.o \
	$(CRT0_OBJ) $(LIB_OBJS) \
	$(BUILDDIR)/libshake.a $(BUILDDIR)/libshake_acc.a \
	$(LINK)
	$(RISCV_CC) -o $@ $(filter-out $(LINK),$^) $(RISCV_LDFLAGS) -T$(LINK)

# HEX + DUMP
$(BINDIR)/%.hex: $(BINDIR)/%.elf
	$(RISCV_OBJCOPY) -O verilog $< $@

$(BINDIR)/%.dump: $(BINDIR)/%.elf
	$(RISCV_OBJDUMP) -D -s $< > $@


# Phony Targets
all: $(BINDIR) $(BUILDDIR) \
     $(TEST_SOURCES:test/%.c=$(BINDIR)/test/%.hex) \
     $(TOP_SOURCES:%.c=$(BINDIR)/%.hex) \
     $(BINDIR)/user_apps/test_AES_de.hex \
     $(BINDIR)/user_apps/test_AES_en.hex \
     $(BINDIR)/user_apps/test_shake.hex

clean:
	rm -rf $(BINDIR) $(BUILDDIR)

-include $(wildcard $(BUILDDIR)/**/*.d)
