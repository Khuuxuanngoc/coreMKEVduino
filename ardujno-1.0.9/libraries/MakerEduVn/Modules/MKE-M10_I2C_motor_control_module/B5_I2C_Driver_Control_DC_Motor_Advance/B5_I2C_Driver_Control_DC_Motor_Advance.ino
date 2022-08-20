/*
  This example will show the second method control the DC motor
*/
#include "Makerlabvn_I2C_Motor_Driver.h"

Makerlabvn_I2C_Motor_Driver myDriver;
void setup() {
  // put your setup code here, to run once:
  myDriver.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  bool dirValue = 1;  // Direction (1 or 0)
  unsigned char pwmSpeedValue = 0;  // (0->255)
  myDriver.MB(dirValue, pwmSpeedValue);    // Stop motor B
  myDriver.MA(dirValue, pwmSpeedValue);    // Stop motor A
  delay(2000);

  dirValue = 1; // Direction 1
  pwmSpeedValue = 255; // 255 (Max Speed)  
  myDriver.MB(dirValue, pwmSpeedValue);    // Run motor B max Speed
  myDriver.MA(dirValue, pwmSpeedValue);    // Run motor A max Speed
  delay(2000);

  dirValue = 1; // Direction 1
  pwmSpeedValue = 127; // 50% speed
  myDriver.MB(dirValue, pwmSpeedValue);    // Run motor B half Speed
  myDriver.MA(dirValue, pwmSpeedValue);    // Run motor A half Speed
  delay(2000);

  dirValue = 1; // Direction 1
  pwmSpeedValue = 0; // 0 => Stop
  myDriver.MB(dirValue, pwmSpeedValue);    // Run motor B max Speed
  myDriver.MA(dirValue, pwmSpeedValue);    // Run motor A max Speed
  delay(2000);

  dirValue = 0; // Direction 0
  pwmSpeedValue = 127; // 50% speed
  myDriver.MB(dirValue, pwmSpeedValue);    // Run motor B half Speed
  myDriver.MA(dirValue, pwmSpeedValue);    // Run motor A half Speed
  delay(2000);

  dirValue = 0; // Direction 0
  pwmSpeedValue = 255; // 255 (Max Speed)  
  myDriver.MB(dirValue, pwmSpeedValue);    // Run motor B max Speed
  myDriver.MA(dirValue, pwmSpeedValue);    // Run motor A max Speed
  delay(2000);
}
