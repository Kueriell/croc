// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Cyrill Rüttimann <cruettima@student.ethz.ch>

#include "uart.h"
#include "print.h"
#include "util.h"
#include "config.h"

int main() {

    uart_init();

    // Read ROM contents 4 characters per 32-bit word
    for (int i = 0; i < 32; i++) {

        uint32_t word = *reg32(USER_ROM_BASE_ADDR, i * 4);

        // Extract 4 characters from the word (little-endian)
        char c0 = (word >> 0)  & 0xFF;
        char c1 = (word >> 8)  & 0xFF;
        char c2 = (word >> 16) & 0xFF;
        char c3 = (word >> 24) & 0xFF;

        if (!c0) break; uart_write(c0);
        if (!c1) break; uart_write(c1);
        if (!c2) break; uart_write(c2);
        if (!c3) break; uart_write(c3);
    }

    uart_write('\n');
    uart_write_flush();
    return 0;
}