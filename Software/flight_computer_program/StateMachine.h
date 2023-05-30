#pragma once
#include "flight_states.h"

class StateMachine{
private:
    SensorData sensor_data;
public:
    void set_variables();

    void unarmed();

    void ground_idle();

    void powered_flight();

    void unopowered_flight();

    void balistic_decent();

    void main_chute();

    void land_safe();

    void call_function();

    StateMachine();
};
