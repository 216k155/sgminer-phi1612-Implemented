#ifndef SKUNKHASH_H
#define SKUNKHASH_H

#include "miner.h"

extern int skunkhash_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void skunkhash_regenhash(struct work *work);

#endif
