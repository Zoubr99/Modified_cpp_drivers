/**********************************************************************
 * basic uart and timer functions
 *  - obtain BRIDGE_BASE from io_map.h

 *********************************************************************/

#ifndef _INIT_H_INCLUDED
#define _INIT_H_INCLUDED

// library
#include "io_rw.h"
#include "io_map.h"
#include "timer_core.h"


#ifdef __cplusplus
extern "C" {
#endif

#define TIMER_SLOT 0


//Current system "up time" in microsecond.
unsigned long now_us();


//Current system "up time" in millisecond.
unsigned long now_ms();


//idle for t microsecond.
void sleep_us(unsigned long int t);


//idle for t millisecond.
void sleep_ms(unsigned long int t);


#ifdef __cplusplus
} // extern "C"
#endif


//low-level bit-manipulation macros
#define bit_set(data, n) ((data) |= (1UL << (n)))
#define bit_clear(data, n) ((data) &= ~(1UL << (n)))
#define bit_toggle(data, n) ((data) ^= (1UL << (n)))
#define bit_read(data, n) (((data) >> (n)) & 0x01)
#define bit_write(data, n, bitvalue) (bitvalue ? bit_set((data), n) : bit_clear((data), n))
#define bit(n) (1UL << (n))

#endif  // _INIT_H_INCLUDED
