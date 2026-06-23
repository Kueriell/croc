// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include "../lib/inc/uart.h"
#include "../lib/inc/print.h"
#include "../lib/inc/util.h"

#include "../user_lib/inc/shake256.h"     // SW SHAKE-256
#include "../user_lib/inc/shake_acc.h"    // HW SHAKE-256 Accelerator
#include "../user_lib/inc/shake_vector.h" // SHAKE-256 test vectors (words)

// Convert 32-bit words into byte array (little-endian, as in memory)
static inline void words_to_bytes_le(uint8_t *dst, const uint32_t *src, int n_words) {
    for (int i = 0; i < n_words; i++) {
        uint32_t w = src[i];
        dst[4*i + 0] = (w >>  0) & 0xFF;
        dst[4*i + 1] = (w >>  8) & 0xFF;
        dst[4*i + 2] = (w >> 16) & 0xFF;
        dst[4*i + 3] = (w >> 24) & 0xFF;
    }
}

int main() {

    uart_init();
    printf("--- SHAKE-256 Testing ---\n\n");
    uart_write_flush();

    // --- Only one vector ---
    const shake_vector_t *vec = &shake_vectors[0];

    uint32_t in_bytes  = vec->LenBits  / 8;
    uint32_t out_bytes = vec->OutBits  / 8;

    // --- Allocate buffers ---
    uint8_t  sw_msg[in_bytes];
    uint8_t  sw_expected[out_bytes];
    uint8_t  sw_out[out_bytes];

    uint32_t hw_out_words[vec->OutWords];
    uint8_t  hw_out[out_bytes];

    memset(sw_out,       0, sizeof(sw_out));
    memset(hw_out_words, 0, sizeof(hw_out_words));
    memset(hw_out,       0, sizeof(hw_out));

    // --- Convert vector words -> bytes (LE, wie im Speicher) ---
    words_to_bytes_le(sw_msg,      vec->Msg,    vec->MsgWords);
    words_to_bytes_le(sw_expected, vec->Output, vec->OutWords);

    // --- Software SHAKE256 ---
    uint64_t start_sw = get_mcycle();
    shake256(sw_out, out_bytes, sw_msg, in_bytes);
    uint64_t end_sw   = get_mcycle();
    uint64_t sw_cycles = end_sw - start_sw;

    // --- Hardware SHAKE256 Accelerator ---
    uint64_t start_hw = get_mcycle();
    shake256_acc((uint32_t *)vec->Msg,
                 vec->LenBits,
                 vec->MsgWords,
                 hw_out_words,
                 vec->OutBits,
                 vec->OutWords);
    uint64_t end_hw   = get_mcycle();
    uint64_t hw_cycles = end_hw - start_hw;

    // Convert HW words -> bytes (LE)
    words_to_bytes_le(hw_out, hw_out_words, vec->OutWords);

    // --- Results ---
    printf("SW SHAKE256 cycles: %x\n", (uint32_t)sw_cycles);
    printf("HW SHAKE256_acc cycles: %x\n", (uint32_t)hw_cycles);
    uart_write_flush();

    printf("\nSW Output (first 32 bytes):\n");
    uint32_t print_bytes = (out_bytes < 32) ? out_bytes : 32;
    for (uint32_t i = 0; i < print_bytes; i++) printf("%x", sw_out[i]);
    printf("\n");

    printf("HW Output (first 32 bytes):\n");
    for (uint32_t i = 0; i < print_bytes; i++) printf("%x", hw_out[i]);
    printf("\n");

    // --- Verification ---
    bool sw_ok = (memcmp(sw_out, sw_expected, out_bytes) == 0);
    bool hw_ok = (memcmp(hw_out, sw_expected, out_bytes) == 0);

    printf("\nSW Correct: %s\n", sw_ok ? "YES" : "NO");
    printf("HW Correct: %s\n", hw_ok ? "YES" : "NO");

    uart_write_flush();
    return 0;
}
