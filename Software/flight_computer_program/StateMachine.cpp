#include "SensorData.h"
#include "StateMachine.h"


void StateMachine::set_variables(){
    
}

void StateMachine::unarmed(){

}

void StateMachine::ground_idle(){

}

void StateMachine::powered_flight(){

}

void StateMachine::unopowered_flight(){

}

void StateMachine::balistic_decent(){

}

void StateMachine::main_chute(){

}

void StateMachine::land_safe(){

}

void StateMachine::call_function(){
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

StateMachine::StateMachine(){

}
