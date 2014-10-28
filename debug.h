/* 
 * File:   debug.h
 * Author: s45504
 *
 * Created on October 9, 2014, 1:15 PM
 */

#ifndef DEBUG_H
#define	DEBUG_H

// Define this to turn on instrumentation
#define DO_DEBUG
// Use definitions to make debugging configurable
#define I2C_INT LATBbits.LATB0
#define I2C_REPLY LATBbits.LATB1
#define UART_INT LATBbits.LATB2




// Define our debugging functions
#ifdef DO_DEBUG
#define DEBUG_ON(a) {\
a = 1;\
}
#define DEBUG_OFF(a){\
a = 0;\
}
#define DEBUG_FLIP(a){\
a ^= 1;\
}
#else
#define DEBUG_ON(a)
#define DEBUG_OFF(a)
#define DEBUG_FLIP(a)
#endif

#endif	/* DEBUG_H */

