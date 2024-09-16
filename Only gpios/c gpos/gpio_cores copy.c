#include "gpio_cores.h"

// Initialize the GpoCore structure
void GpoCore_init(GpoCore* core, uint32_t core_base_addr) {
    core->base_addr = core_base_addr;
    core->wr_data = 0;
}

// Clean up the GpoCore structure
void GpoCore_destroy(GpoCore* core) {
    // No dynamic memory to free in this simple example
}

// Write data to the GPO core
void GpoCore_write(GpoCore* core, uint32_t data) {
    core->wr_data = data;
    // Assuming there's a function to write to the hardware register
    io_rw_write(core->base_addr + DATA_REG, data);
}
