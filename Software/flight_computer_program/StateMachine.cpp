#include "SensorData.cpp"
//state machine
class StateMachine{
private:
    SensorData sensor_data;
public:
    void set_variables(SensorData data){
        sensor_data = data;
    }

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

    void unarmed(){

    }

    void ground_idle(){

    }

    void powered_flight(){

    }

    void unopowered_flight(){

    }

    void balistic_decent(){

    }

    void main_chute(){

    }

    void land_safe(){

    }

    void call_function(){
        switch (flight_state)
        {
        case UNARMED:
            unarmed();
            break;
        case GROUND_IDLE:
            ground_idle();
            break;
        case POWERED_FLIGHT:
            powered_flight();
            break;
        case UNPOWERED_FLIGHT:
            unopowered_flight();
            break;
        case BALISTIC_DECENT:
            balistic_decent();
            break;
        case MAIN_CHUTE:
            main_chute();
            break;
        case LAND_SAFE:
            land_safe();
            break;
        default:
            //add Emergency Function
            break;
        }
    }
};