#include "gpio_cores.h"  // Assuming gpio.h contains the C definitions

// Check individual LED
// led_p: pointer to GpoCore instance
// n: number of LEDs
void led_check(GpoCore *led_p, int n) {
    int i;

    for (i = 0; i < n; i++) {
        GpoCore_write(led_p, 1);
    }
}

// Instantiate the LED with GpoCore_init
GpoCore led;

int main() {
    // Initialize the GpoCore structure with the base address
    GpoCore_init(&led, get_slot_addr(BRIDGE_BASE, S2_LED));

    while (1) {
        led_check(&led, 16);
    }

    return 0;
}

