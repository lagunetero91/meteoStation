#include <SFE_BMP180.h>
#include <Wire.h>
#include <DHT11.h>
#include "meteoStation.h"
#include <avr/sleep.h>
#include <avr/interrupt.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  uint8_t err;
  // put your main code here, to run repeatedly:
   err = getHumTem();
   if (err == 0){
      // Mostrar datos por lcd.
   }
}
