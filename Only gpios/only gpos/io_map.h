#ifndef _IO_MAP_INCLUDED
#define _IO_MAP_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

// system clock rate in MHz; used for timer and uart
#define SYS_CLK_FREQ 100

// io base adress for uBlaze MCS
#define BRIDGE_BASE 0x01000000

// slot module definition
// format: Slot#_ModuleType_Name
#define S2_LED       0

#ifdef __cplusplus
} // exetrn "C"
#endif



#endif