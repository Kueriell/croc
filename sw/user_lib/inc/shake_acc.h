// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

#ifndef SHAKE_ACC_H
#define SHAKE_ACC_H

#include <stdint.h>
#include "config.h"

#define WORDS_PER_BLOCK 34 // 1088 / 32

// Register Offsets
#define SHAKE_LEN     (USER_SHAKE_BASE_ADDR + 0x00)
#define SHAKE_IN_BUF  (USER_SHAKE_BASE_ADDR + 0x100)
#define SHAKE_OUT_BUF (USER_SHAKE_BASE_ADDR + 0x200)

void shake256_acc(uint32_t *msg_data, uint16_t msg_bits, uint16_t msg_words, uint32_t *hash_out, uint16_t out_bits, uint16_t out_words);

#endif
