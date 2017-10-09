#ifndef PHI1612_H
#define PHI1612_H

#include "miner.h"

void precalc_hash_phi1612(dev_blk_ctx *blk, uint32_t *midstate, uint32_t *pdata);
void phi1612_regenhash(struct work *work);

#endif
