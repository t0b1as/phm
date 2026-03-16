
#include "config.h"
#include "axis.h"

bool forward = true;

void pendulum_update()
{
    float pos = axis.get_position_mm();

    float min = config.center_mm - config.hub_mm/2;
    float max = config.center_mm + config.hub_mm/2;

    if(forward && pos >= max)
        forward = false;

    if(!forward && pos <= min)
        forward = true;

    float target = forward ? max : min;

    axis.move_to_mm(target);
}
