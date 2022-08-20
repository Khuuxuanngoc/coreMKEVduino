#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 20 chars and 4 line display
// LiquidCrystal_I2C lcd(0x3F,20, 4);  // set the LCD address to 0x3F for a 20 chars and 4 line display

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();

  lcd.setCursor(3, 0);
  lcd.print("Hello, world!");

  lcd.setCursor(1, 1);
  lcd.print("LCD2004 I2C MODULE");

  lcd.setCursor(5, 2);
  lcd.print("power by");

  lcd.setCursor(4, 3);
  lcd.print("MakerEdu.vn");
}

void loop()
{
  
}