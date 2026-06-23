// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

#include "../../lib/inc/uart.h"
#include "../../lib/inc/print.h"
#include "../../lib/inc/util.h"

#include <string.h>


#include "../inc/aes_de_acc.h"

void aes_de_acc(uint32_t *Input, uint32_t *Key, uint32_t *Output) {

    // Transport the Input
    for (int i = 0; i < 4; i++) {
        *(volatile uint32_t *)(AES_INPUT + 4 * i) = Input[i];
    }
    //idma_memcpy(AES_INPUT, (uint32_t)block_buf, 16);
    // Transport the Key
    for (int i = 0; i < 4; i++) {
        *(volatile uint32_t *)(AES_KEY + 4 * i) = Key[i];
    }
    //idma_memcpy(AES_KEY, (uint32_t)Key, 32);

    // Read the results
    for (int i = 0; i < 4; i++) {
        Output[i] = *(volatile uint32_t *)(AES_OUTPUT + 4 * i);
    }
}
