// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Cyrill Rüttimann <cruettima@student.ethz.ch>

// Implements SHAKE-256 according to NIST FIPS 202

#ifndef SHAKE256_H
#define SHAKE256_H

#include <stddef.h>
#include <stdint.h>

// SHAKE256: XOF with rate = 136 bytes (1088 bits)
void shake256(uint8_t *out, size_t outlen, const uint8_t *in, size_t inlen);

#endif
