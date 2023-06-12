#include "PDB.h"

PDB::PDB(/* args */)
{

}

void PDB::send_abort_signal(){
    
}

bool PDB::check_main_battery_voltage(){
    return true;
}

bool PDB::check_secindary_battery_voltage(){
    return true;
}

void PDB::secondary_system_loop(){
    if(check_secindary_battery_voltage()){
        secondary_system_loop();
    }
    else{
        send_abort_signal();
    }
}

void PDB::main_system_loop(){
    if(check_main_battery_voltage()){
        main_system_loop();
    }
    else{
        switch_to_secondary_battery();
        secondary_system_loop();
    }

}