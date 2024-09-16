
//#define _DEBUG
#include "init.h"
#include "gpio_cores.h"




// check individual led
// led_p pointer to led instance
// n number of led
void led_check(GpoCore *led_p, int n) {
   int i;

   for (i = 0; i < n; i++) {
      led_p->write(1, i);

   }
}


// leds flash according to switch positions.
// led_p pointer to led instance
// sw_p pointer to switch instance
void sw_check(GpoCore *led_p, GpiCore *sw_p) {
   int i, s;

   s = sw_p->read();
   for (i = 0; i < 30; i++) {
      led_p->write(s);
   }
}



// instantiate switch, led
GpoCore led(get_slot_addr(BRIDGE_BASE, S2_LED));
GpiCore sw(get_slot_addr(BRIDGE_BASE, S3_SW));


int main()
{

   while (1) 
   {
      led_check(&led, 16);
      sw_check(&led, &sw);
   }
} 

