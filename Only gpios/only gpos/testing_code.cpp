#include "gpio_cores.h"




// check individual led
// led_p pointer to led instance
// n number of led
void led_check(GpoCore *led_p, int n) {
   int i;

   for (i = 0; i < n; i++) {


      led_p->write(1);

   }
}

// instantiate switch, led
GpoCore led(get_slot_addr(BRIDGE_BASE, S2_LED));


int main()
{

   while (1) 
   {
      led_check(&led, 16);
   }
} 

