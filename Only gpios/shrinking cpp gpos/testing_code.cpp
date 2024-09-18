#include "gpio_cores.h"








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

