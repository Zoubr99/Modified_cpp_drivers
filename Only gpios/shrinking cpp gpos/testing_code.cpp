#include "gpio_cores.h"





GpoCore::GpoCore (uint32_t core_base_addr){

    base_addr = core_base_addr;
    wr_data = 0;
};

GpoCore::~GpoCore() {};

void GpoCore::write(uint32_t data){
    wr_data = data;
    io_write(base_addr, 0, wr_data);
  //io_write(base_addr, offset, data)   ( *(volatile uint32_t *) ( (base_addr) + 4 * (offset) )  = (data) )
};



int main()
{

   GpoCore led(get_slot_addr(BRIDGE_BASE, S2_LED));
   GpoCore *led_p;

   while (1) 
   {

   int i;

   for (i = 0; i < 16; i++) {


      led_p->write(1);

   }


   }
} 

