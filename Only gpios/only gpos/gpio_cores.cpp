// gpo core class implementation

#include "gpio_cores.h"


GpoCore::GpoCore (uint32_t core_base_addr){

    base_addr = core_base_addr;
    wr_data = 0;
};

GpoCore::~GpoCore() {};

// writting a whole word
void GpoCore::write(uint32_t data){

    wr_data = data;
    io_write(base_addr, DATA_REG, wr_data);
  //io_write(base_addr, offset, data)   ( *(volatile uint32_t *) ( (base_addr) + 4 * (offset) )  = (data) )
};

