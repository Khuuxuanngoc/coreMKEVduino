#include "Makerlabvn_I2C_Motor_Driver.h"

Makerlabvn_I2C_Motor_Driver myDriver(0);
void setup() {
  // put your setup code here, to run once:
  myDriver.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  bool dirValue = 1;  // Direction (1 or 0)
  unsigned char speedValueInPercent = 0;  // (0%->100%)
  myDriver.writeMB(dirValue, speedValueInPercent);    // Stop motor B
  myDriver.writeMA(dirValue, speedValueInPercent);    // Stop motor A
  delay(2000);

  dirValue = 1; // Direction 1
  speedValueInPercent = 100; // 100% (Max Speed)  
  myDriver.writeMB(dirValue, speedValueInPercent);    // Run motor B max Speed
  myDriver.writeMA(dirValue, speedValueInPercent);    // Run motor A max Speed
  delay(2000);

  dirValue = 1; // Direction 1
  speedValueInPercent = 50; // 50%
  myDriver.writeMB(dirValue, speedValueInPercent);    // Run motor B half Speed
  myDriver.writeMA(dirValue, speedValueInPercent);    // Run motor A half Speed
  delay(2000);

  dirValue = 1; // Direction 1
  speedValueInPercent = 0; // 0% => Stop
  myDriver.writeMB(dirValue, speedValueInPercent);    // Run motor B max Speed
  myDriver.writeMA(dirValue, speedValueInPercent);    // Run motor A max Speed
  delay(2000);

  dirValue = 0; // Direction 0
  speedValueInPercent = 50; // 50%
  myDriver.writeMB(dirValue, speedValueInPercent);    // Run motor B half Speed
  myDriver.writeMA(dirValue, speedValueInPercent);    // Run motor A half Speed
  delay(2000);

  dirValue = 0; // Direction 0
  speedValueInPercent = 100; // 100% (Max Speed)  
  myDriver.writeMB(dirValue, speedValueInPercent);    // Run motor B max Speed
  myDriver.writeMA(dirValue, speedValueInPercent);    // Run motor A max Speed
  delay(2000);
}
