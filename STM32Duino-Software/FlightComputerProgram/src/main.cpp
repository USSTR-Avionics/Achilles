//Demo program for I2C (BMP280) and FreeRTOS (Blink LED)

#include <STM32FreeRTOS.h>
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_BMP280.h>

#define BMP_SCK (13)
#define BMP_MISO (12)
#define BMP_MOSI (11)
#define BMP_CS (10)

const uint8_t LED_PIN = LED_BUILTIN;

Adafruit_BMP280 bmp; // use I2C interface
Adafruit_Sensor *bmp_temp = bmp.getTemperatureSensor();
Adafruit_Sensor *bmp_pressure = bmp.getPressureSensor();

// handle for blink task
TaskHandle_t blink;

//------------------------------------------------------------------------------
// high priority for blinking LED
static void vLEDFlashTask(void *pvParameters) {
  UNUSED(pvParameters);
  pinMode(LED_PIN, OUTPUT);

  // Flash led every 200 ms.
  for (;;) {
    // Turn LED on.
    digitalWrite(LED_PIN, HIGH);

    // Sleep for 50 milliseconds.
    vTaskDelay((50L * configTICK_RATE_HZ) / 1000L);

    // Turn LED off.
    digitalWrite(LED_PIN, LOW);

    // Sleep for 150 milliseconds.
    vTaskDelay((150L * configTICK_RATE_HZ) / 1000L);
  }
}
//------------------------------------------------------------------------------
static void vPrintTask(void *pvParameters) {
  UNUSED(pvParameters);
  while (1) {
    sensors_event_t temp_event, pressure_event;
    bmp_temp->getEvent(&temp_event);
    bmp_pressure->getEvent(&pressure_event);
    
    Serial.print(F("Temperature = "));
    Serial.print(temp_event.temperature);
    Serial.print(" *C, ");

    Serial.print(F("Pressure = "));
    Serial.print(pressure_event.pressure);
    Serial.println(" hPa");

    Serial.println();
    vTaskDelay(2000);

  }
}
//------------------------------------------------------------------------------
void setup() {
  Serial.begin(9600);
  // wait for Leonardo

  unsigned status;
  //status = bmp.begin(BMP280_ADDRESS_ALT, BMP280_CHIPID);
  status = bmp.begin();
  if (!status) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    Serial.print("SensorID was: 0x"); Serial.println(bmp.sensorID(),16);
    Serial.print("        ID of 0xFF probably means a bad address, a BMP 180 or BMP 085\n");
    Serial.print("   ID of 0x56-0x58 represents a BMP 280,\n");
    Serial.print("        ID of 0x60 represents a BME 280.\n");
    Serial.print("        ID of 0x61 represents a BME 680.\n");
    while (1) delay(10);
  }

  /* Default settings from datasheet. */
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */

  bmp_temp->printSensorDetails();

  while(!Serial) {}

  // create blink task
  xTaskCreate(vLEDFlashTask,
    "Task1",
    configMINIMAL_STACK_SIZE + 50,
    NULL,
    tskIDLE_PRIORITY + 2,
    &blink);

  // create print task
  xTaskCreate(vPrintTask,
    "Task2",
    configMINIMAL_STACK_SIZE + 100,
    NULL,
    tskIDLE_PRIORITY + 1,
    NULL);

  // start FreeRTOS
  vTaskStartScheduler();

  // should never return
  Serial.println(F("Die"));
  while(1);
}


void loop() {
  while(1) {
    // must insure increment is atomic
    // in case of context switch for print
    noInterrupts();
    interrupts();
  }
}
