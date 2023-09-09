#pragma once
#include "flight_states.h"
class SensorData{
private:

public:
    SensorData();

    void setData(SensorData data);

    //SensorData - needs to store data from the following sensors:
    //    - accelerometer -kx134 - 8bit, 16bit https://www.mouser.ca/ProductDetail/Kionix/KX134-1211?qs=BJlw7L4Cy79%2FET%2FI6G7icQ%3D%3D
    
    //    - scrapped - gyroscope 6axis includes accelerometer -bmi088
    //    - magnetometer -NA
    //    - find one which does all 3 of above sensors
    //    - barometer -bmp280 8bit https://www.bosch-sensortec.com/products/environmental-sensors/pressure-sensors/bmp280/#software
    //    - thermocouple - MAX31855 https://learn.adafruit.com/thermocouple/downloads
    //    - fram - adafruit i2c fram

    //    - flight state
    FlightStates State;
};