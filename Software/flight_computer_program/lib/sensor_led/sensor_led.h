#include "sensor_pins.h"
#include <Arduino.h>

#define BUILTIN_LED 13 // this does not really change unless microcontroller changes

class sensor_led
{
    public:
        /**
        * @brief  initialize the LED pins
        */
        int init_LED();

        /**
        * @brief  resets the led to no colour
        */
        void reset_led();

        /**
        * @brief  set the green LED on
        */
        void set_led_green();

        /**
        * @brief  set the red LED on
        */
        void set_led_red();

        /**
        * @brief  set the blue LED on
        */
        void set_led_blue();

        /**
        * @brief  flash the internal LED
        */
        void flash_internal_led(bool x);

};