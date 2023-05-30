#pragma once
class StateMachine{
private:
    SensorData sensor_data;
public:

    enum FlightStates{
        UNARMED,
        GROUND_IDLE,
        POWERED_FLIGHT,
        UNPOWERED_FLIGHT,
        BALISTIC_DECENT,
        MAIN_CHUTE,
        LAND_SAFE
    };

    FlightStates flight_state = UNARMED;

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