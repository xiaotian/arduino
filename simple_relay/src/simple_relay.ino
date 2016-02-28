#include <Arduino.h>

const uint8_t RELAY_PIN = 4;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  delay(1000);
  digitalWrite(RELAY_PIN, HIGH);
  delay(4000);
  digitalWrite(RELAY_PIN, LOW);
}
