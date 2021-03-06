#ifndef STANDARD
#include "standard.h"
#endif /* STANDARD */
#ifndef PHASH
#define PHASH

extern uint8_t tab[];
#define PHASHLEN 0x20  /* length of hash mapping table */
#define PHASHNKEYS 58  /* How many keys were hashed */
#define PHASHRANGE 64  /* Range any input might map to */
#define PHASHSALT 0x9e3779b9 /* internal, initialize normal hash */

uint32_t phash();

#endif  /* PHASH */

