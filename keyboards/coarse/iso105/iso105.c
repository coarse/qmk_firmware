#include "iso105.h"

void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up
    matrix_init_user();
    led_init_ports();
}

void led_init_ports(void) {
    // * Set our LED pins as output and high
    setPinOutput(C15);
    writePinHigh(C15);

    setPinOutput(C14);
    writePinHigh(C14);
}

bool led_update_kb(led_t led_state) {
    if (led_update_user(led_state)) {
        writePin(C15, !led_state.num_lock);
        writePin(C14, !led_state.caps_lock);
    }

    return true;
}
