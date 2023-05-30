#include "StaticVariables.h"
#include "StateMachine.cpp"
#include "SensorData.cpp"

class FlightComputer{
    bool AbleToFly = true;

    StateMachine flight_function = StateMachine();

    SensorData sensor_data = SensorData();


    //HealthCheck
    bool start_health_check(){
        return true;
    }

    bool mid_flight_health_check(){

    }


    void retrieve_data(){
        //get data through canbus and set it to sensor_data
    }

    //Main
    void main_loop(){

        while (AbleToFly)
        {
            retrieve_data();
            mid_flight_health_check();
            flight_function.set_variables(sensor_data);
            flight_function.call_function();
        }
    }
public:
    //Initialization
    void init(){
        retrieve_data();
        if(start_health_check()){
            main_loop();
        }
    }
};

