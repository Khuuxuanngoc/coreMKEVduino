#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
// LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

unsigned long delayTime = 3000; // 3000ms <=> 3s

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
}

void loop()
{
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("LCD1602 I2C");
  lcd.setCursor(2, 1);
  lcd.print("MakerEdu.vn");

  delay(delayTime);

  lcd.setCursor(2, 0);
  lcd.print("MakerEdu.vn");
  lcd.setCursor(1, 1);
  lcd.print("Hello, world!");

  delay(delayTime);
}