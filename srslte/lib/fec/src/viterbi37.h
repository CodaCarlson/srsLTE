/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2015 The srsLTE Developers. See the
 * COPYRIGHT file at the top-level directory of this distribution.
 *
 * \section LICENSE
 *
 * This file is part of the srsLTE library.
 *
 * srsLTE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsLTE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#include <stdbool.h>

void *create_viterbi37_port(uint32_t polys[3], 
                            uint32_t len);

int init_viterbi37_port(void *p, 
                        uint32_t starting_state);

int chainback_viterbi37_port(void *p, 
                             uint8_t *data, 
                             uint32_t nbits, 
                             uint32_t endstate);

void delete_viterbi37_port(void *p);

int update_viterbi37_blk_port(void *p, 
                              uint8_t *syms, 
                              uint32_t nbits, 
                              uint32_t *best_state);
