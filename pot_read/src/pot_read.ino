#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value*5.0/1023);
  delay(1000);
}
