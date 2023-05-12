#include <Arduino.h>
#include "sensor_led.h"

int main()
{
  sensor_led led;
  led.flash_internal_led(1);

  return 0;
}