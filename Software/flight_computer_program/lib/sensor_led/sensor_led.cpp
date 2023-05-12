#include "sensor_led.h"

int sensor_led::init_LED()
{
    pinMode(BUILTIN_LED, OUTPUT);
	pinMode(LED_GREEN, OUTPUT);
	pinMode(LED_RED, OUTPUT);
	pinMode(LED_BLUE, OUTPUT);
	return EXIT_SUCCESS; 
}

void sensor_led::reset_led()
{
    digitalWrite(LED_RED, LOW);
	digitalWrite(LED_GREEN, LOW);
	digitalWrite(LED_BLUE, LOW);
}

void sensor_led::set_led_green()
{
    digitalWrite(LED_GREEN, HIGH);
	digitalWrite(LED_RED, LOW);
	digitalWrite(LED_BLUE, LOW);
}

void sensor_led::set_led_red()
{
    digitalWrite(LED_RED, HIGH);
	digitalWrite(LED_GREEN, LOW);
	digitalWrite(LED_BLUE, LOW);
}

void sensor_led::set_led_blue()
{
    digitalWrite(LED_BLUE, HIGH);
	digitalWrite(LED_RED, LOW);
	digitalWrite(LED_GREEN, LOW);
}

void sensor_led::flash_internal_led(bool x)
{
    if (x == true)
	{
		digitalWrite(BUILTIN_LED, HIGH);
	}
	else
	{
		digitalWrite(BUILTIN_LED, LOW);
	}
}
