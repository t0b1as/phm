
#include <Arduino.h>
#include "vesc_uart.h"

HardwareSerial VESC(2);

void vesc_init()
{
    VESC.begin(115200, SERIAL_8N1, 16, 17);
}

float vesc_get_position()
{
    return 0; // placeholder
}

float vesc_get_current()
{
    return 0; // placeholder
}

float vesc_get_motor_temp()
{
    return 25; // placeholder
}

void vesc_set_position(float rot)
{
    // send position command
}

void vesc_set_current(float current)
{
    // send current command
}
