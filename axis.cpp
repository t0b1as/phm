
#include "axis.h"
#include "config.h"
#include "vesc_uart.h"

Axis axis;

float rot_to_mm(float r)
{
    return r * config.screw_pitch_mm;
}

float mm_to_rot(float mm)
{
    return mm / config.screw_pitch_mm;
}

void Axis::init()
{
}

float Axis::get_position_mm()
{
    float rot = vesc_get_position();
    return rot_to_mm(rot);
}

void Axis::move_to_mm(float mm)
{
    float rot = mm_to_rot(mm);
    vesc_set_position(rot);
}

void Axis::update()
{
}

void axis_init()
{
    axis.init();
}

void axis_update()
{
    axis.update();
}
