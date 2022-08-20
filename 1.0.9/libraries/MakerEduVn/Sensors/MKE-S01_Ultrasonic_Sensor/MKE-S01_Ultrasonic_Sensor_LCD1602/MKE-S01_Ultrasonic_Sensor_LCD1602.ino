/*
    https://wiki.makeredu.vn/index.php/C%E1%BA%A3m_bi%E1%BA%BFn_si%C3%AAu_%C3%A2m_MKE-S01_ultra_sonic_distance_sensor
*/
#include "UltraSonicDistanceSensor.h"
#include "Wire.h"
#include "LiquidCrystal_I2C.h"

const int PIN_TRIG = 13;
const int PIN_ECHO = 12;

UltraSonicDistanceSensor distanceSensor(PIN_TRIG, PIN_ECHO);  // Initialize sensor that uses digital pins 13 and 12.

// LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

double valuecm = 0;
void setup(){
    lcd.init();
    lcd.backlight();
    lcd.setCursor(2,0);
    lcd.print("MakerEdu.vn");
    lcd.setCursor(4,1);
    lcd.print("Hello");
    delay(2000);
}

void loop(){
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    valuecm = distanceSensor.getcm();
    lcd.setCursor(4,1);
    lcd.print(String(valuecm));
    lcd.print(" cm    ");
    delay(500);
}
