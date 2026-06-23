// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

#ifndef AES_DE_ACC_H
#define AES_DE_ACC_H

#include <stdint.h>
#include "../../config.h"

// Register Offsets
#define AES_INPUT  (USER_AES_de_BASE_ADDR + 0x00)
#define AES_KEY    (USER_AES_de_BASE_ADDR + 0x10)
#define AES_OUTPUT (USER_AES_de_BASE_ADDR + 0x20)

void aes_de_acc(uint32_t *Input, uint32_t *Key, uint32_t *Output);

#endif
