#include <Arduino.h>

const uint8_t PIN_RED = 11;
const uint8_t PIN_GREEN = 10;
const uint8_t PIN_BLUE = 9;

void displayColor(uint8_t r, uint8_t g, uint8_t b) {
  analogWrite(PIN_RED, r);
  analogWrite(PIN_GREEN, g);
  analogWrite(PIN_BLUE, b);
}

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);
}

void loop() {
  for (uint8_t v = 0; v <= 255; v += 10) {
    displayColor(v, 0, 0);
    delay(1000);
    displayColor(0, v, 0);
    delay(1000);
    displayColor(0, 0, v);
    delay(1000);
    displayColor(v, v, 0);
    delay(1000);
    displayColor(0, v, v);
    delay(1000);
    displayColor(v, 0, v);
    delay(1000);
  }
}
