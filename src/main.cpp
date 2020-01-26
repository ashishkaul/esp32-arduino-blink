#include <Arduino.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 25
#endif

void setup() {
  // put your setup code here, to run once:
   pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(1000);
}