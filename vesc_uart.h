
#pragma once

void vesc_init();
float vesc_get_position();
float vesc_get_current();
float vesc_get_motor_temp();

void vesc_set_position(float rot);
void vesc_set_current(float current);
