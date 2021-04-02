#ifndef _MURMURHASH3_H_
#define _MURMURHASH3_H_

#ifndef __KERNEL__
#include <stdint.h>
#endif

uint32_t MurmurHash3_x86_32(const void * key, uint32_t len, uint32_t seed);

#endif
