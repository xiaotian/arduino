#include <Arduino.h>
#include <SPI.h>
#include <SD.h>

const uint8_t CS_PIN = 4;  // CS stands for Chip Selection

File myFile;

void setup() {
  Serial.begin(9600);
  Serial.println("initializing");
  if (!SD.begin(CS_PIN)) {
    Serial.println("initialization failed.");
    return;
  }
  Serial.println("initialization complete.");
}

void loop() {
  myFile = SD.open("arduino.txt", FILE_WRITE);
  if (myFile) {
    myFile.println("Hello from Arduino UNO R3!");
    Serial.println("Message written");
    myFile.close();
  }
  delay(3000);
}
