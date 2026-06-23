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

#include "../user_lib/inc/aes.h"          // SW AES (KeyExpansion, InvCipher)
#include "../user_lib/inc/aes_de_acc.h"   // HW AES Accelerator
#include "../user_lib/inc/aes_vector.h"   // AES vector (uint32_t words)

// Convert 32-bit words into byte array (big-endian, NIST format)
static inline void words_to_bytes(uint8_t *dst, const uint32_t *src, int n_words) {
    for (int i = 0; i < n_words; i++) {
        uint32_t w = src[i];
        dst[4*i + 0] = (w >> 24) & 0xFF;
        dst[4*i + 1] = (w >> 16) & 0xFF;
        dst[4*i + 2] = (w >>  8) & 0xFF;
        dst[4*i + 3] = (w >>  0) & 0xFF;
    }
}

uint8_t sw_in[16];
uint8_t sw_key[16];
uint8_t sw_expected[16];
uint8_t sw_out[16] = {0};

uint32_t hw_out_words[4] = {0};
uint8_t hw_out[16] = {0};

uint32_t w[4 * (Nr + 1)] = {0};

int main() {

    uart_init();
    printf("--- AES-128 Decryption Testing ---\n\n");
    uart_write_flush();


    // --- Prepare SW vectors from shared HW vectors ---

    const aes_vector_t *vec = &aes_de[0];

    words_to_bytes(sw_in,       vec->Input,  4);
    words_to_bytes(sw_key,      vec->Key,    4);
    words_to_bytes(sw_expected, vec->Output, 4);


    // --- Software AES ---
    uint64_t start_key = get_mcycle();
    KeyExpansion(sw_key, w);
    uint64_t end_key = get_mcycle();
    uint64_t key_cycles = end_key - start_key;

    uint64_t start_sw = get_mcycle();
    InvCipher(sw_in, sw_out, w);
    uint64_t end_sw = get_mcycle();
    uint64_t sw_cycles = end_sw - start_sw;


    // --- Hardware AES Accelerator ---
    uint64_t start_hw = get_mcycle();
    aes_de_acc((uint32_t*)vec->Input, (uint32_t*)vec->Key, hw_out_words);
    uint64_t end_hw = get_mcycle();
    uint64_t hw_cycles = end_hw - start_hw;

    words_to_bytes(hw_out, hw_out_words, 4);


    // --- Results ---
    printf("SW KeyExpansion cycles: %x\n", (uint32_t)key_cycles);
    printf("SW InvCipher cycles:    %x\n", (uint32_t)sw_cycles);
    printf("HW Accelerator cycles:  %x\n", (uint32_t)hw_cycles);
    uart_write_flush();

    printf("\nSW Output:\n");
    for (int i = 0; i < 16; i++) printf("%x", sw_out[i]);
    printf("\n");

    printf("HW Output:\n");
    for (int i = 0; i < 16; i++) printf("%x ", hw_out[i]);
    printf("\n");


    // --- Verification ---
    bool sw_ok = memcmp(sw_out, sw_expected, 16) == 0;
    bool hw_ok = memcmp(hw_out, sw_expected, 16) == 0;

    printf("\nSW Correct: %s\n", sw_ok ? "YES" : "NO");
    printf("HW Correct: %s\n", hw_ok ? "YES" : "NO");


    uart_write_flush();
    return 0;
}
