
#include <math.h>
#include "vesc_uart.h"

float motor_kT = 0.08;
float pitch = 0.005;

void set_force(float newton)
{
    float torque = newton * pitch / (2 * M_PI);
    float current = torque / motor_kT;

    vesc_set_current(current);
}
