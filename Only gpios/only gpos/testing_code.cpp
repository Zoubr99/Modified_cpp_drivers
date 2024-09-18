#include "gpio_cores.h"


// instantiate switch, led
GpoCore led(get_slot_addr(BRIDGE_BASE, S2_LED));
GpoCore *led_p;

int main()
{
   int n = 16;
   int i;
   while (1) 
   {
      for (i = 0; i < n; i++){
      led_p->write(1);
      }
   }
} 

