#include <Arduino.h>

/**
  Don't forget connect 74HC595's pin13(OE) to GND to enable output. otherwise
  the LEDs won't light.
  Also seems the MR pin needs to be connected to VCC(5v) otherwise seems the
  output is not consistent (saw it once)
*/
int latchPin = 5;
int clockPin = 6;
int dataPin = 4;

byte leds = 0;

void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop()
{
  leds = 0;
  updateShiftRegister(0);
  for(uint8_t i = 1; i <= 32; ++i) {
    updateShiftRegister(i);
    delay(1000);
  }

}

void updateShiftRegister(uint8_t val)
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, MSBFIRST, val);
   digitalWrite(latchPin, HIGH);
}
