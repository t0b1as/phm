
#pragma once

struct MachineConfig {

    float screw_pitch_mm = 5.0;
    float travel_mm = 300.0;

    float hub_mm = 120;
    float center_mm = 150;

    float speed_mm_s = 120;
    float accel_mm_s2 = 300;
    float jerk_mm_s3 = 1500;

    float force_target_N = 200;

    float hold_current_A = 2;
    float reverse_current_A = 10;

    float min_mm = 0;
    float max_mm = 300;

    bool calibrated = false;
};

extern MachineConfig config;
