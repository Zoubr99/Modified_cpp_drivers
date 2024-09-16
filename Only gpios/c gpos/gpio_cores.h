#ifndef _GPIO_H_INCLUDED
#define _GPIO_H_INCLUDED

#include "io_rw.h"
#include "io_map.h"

// Structure for GpoCore
typedef struct {
    uint32_t base_addr;
    uint32_t wr_data;
} GpoCore;

// Register offset
#define DATA_REG 0

// Constructor equivalent function
void GpoCore_init(GpoCore* core, uint32_t core_base_addr);


// Function to write data
void GpoCore_write(GpoCore* core, uint32_t data);

#endif
