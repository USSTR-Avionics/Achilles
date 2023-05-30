#include "StaticVariables.h"
#include "StateMachine.h"
#include "SensorData.h"
#pragma once

class FlightComputer{
private:
    bool AbleToFly = true;

    StateMachine flight_function;

    SensorData sensor_data;


    //HealthCheck
    bool start_health_check();

    bool mid_flight_health_check();

    void retrieve_data();

    void main_loop();
public:
    void init();
};
