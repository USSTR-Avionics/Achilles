#pragma once
class SensorData{
private:

public:
    SensorData();

    void setData(SensorData data);
    //SensorData - needs to store data from the following sensors:
    //    - accelerometer -kx134
    //    - gyroscope 6axis includes accelerometer -bmi088
    //    - magnetometer -NA
    //    - find one which does all 3 of above sensors
    //    - barometer -bmp280
    //    - thermocouple - MAX31855

    //    - flight state

};