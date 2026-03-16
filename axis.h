
#pragma once

class Axis
{
public:
    void init();
    void update();

    float get_position_mm();
    void move_to_mm(float mm);
};

extern Axis axis;

void axis_init();
void axis_update();
