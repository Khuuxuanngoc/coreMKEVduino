#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 20 chars and 4 line display

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop()
{
  // Turn off the cursor:
  lcd.noCursor();
  delay(500);
  // Turn on the cursor:
  lcd.cursor();
  delay(500);
}
