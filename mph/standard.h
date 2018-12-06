/*
------------------------------------------------------------------------------
Standard definitions and types, Bob Jenkins
------------------------------------------------------------------------------
*/

#  include <stdio.h>
#  include <stddef.h>

typedef  unsigned long long  uint64_t;
#define UB8MAXVAL 0xffffffffffffffffLL
#define UB8BITS 64
typedef    signed long long  int64_t;
#define SB8MAXVAL 0x7fffffffffffffffLL
typedef  unsigned long  int  uint32_t;   /* unsigned 4-byte quantities */
#define UB4MAXVAL 0xffffffff
typedef    signed long  int  int32_t;
#define UB4BITS 32
#define SB4MAXVAL 0x7fffffff
typedef  unsigned short int  uint16_t;
#define UB2MAXVAL 0xffff
#define UB2BITS 16
typedef    signed short int  int16_t;
#define SB2MAXVAL 0x7fff
typedef  unsigned       char uint8_t;
#define UB1MAXVAL 0xff
#define UB1BITS 8
typedef    signed       char int8_t;   /* signed 1-byte quantities */
#define SB1MAXVAL 0x7f
typedef                 int  word;  /* fastest type available */

#define bis(target,mask)  ((target) |=  (mask))
#define bic(target,mask)  ((target) &= ~(mask))
#define bit(target,mask)  ((target) &   (mask))
#ifndef min
#define min(a,b) (((a)<(b)) ? (a) : (b))
#endif /* min */
#ifndef max
#define max(a,b) (((a)<(b)) ? (b) : (a))
#endif /* max */
#ifndef align
#define align(a) (((uint32_t)a+(sizeof(void *)-1))&(~(sizeof(void *)-1)))
#endif /* align */
//#ifndef abs
//#define abs(a)   ((a) <0   ?   -(a)   :(a)) 
//#endif
#define TRUE  1
#define FALSE 0
#define SUCCESS 0  /* 1 on VAX */

#endif /* STANDARD */
