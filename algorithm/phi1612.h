#ifndef PHI1612_H
#define PHI1612_H

#include "miner.h"

extern int phi1612_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void phi1612_regenhash(struct work *work);

#endif
