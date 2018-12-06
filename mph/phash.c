/*ifndef STANDARD
#include "standard.h"
#endif /* STANDARD */

#include "phash.h"
#endif /* PHASH */
#ifndef LOOKUPA
#include "lookupa.h"
#endif /* LOOKUPA */

/* small adjustments to _a_ to make values distinct */
uint8_t tab[] = {
19,49,28,0,28,10,51,51,0,22,0,33,12,51,51,26,
7,60,36,51,33,50,60,60,0,10,19,16,0,46,58,38,
};

/* The hash function */
uint32_t phash(key, len)
char *key;
int   len;
{
  uint32_t rsl, val = lookup(key, len, 0x9e3779b9);
  rsl = ((val>>27)^tab[val&0x1f]);//val mod 2^5 -1
  return rsl;
}

