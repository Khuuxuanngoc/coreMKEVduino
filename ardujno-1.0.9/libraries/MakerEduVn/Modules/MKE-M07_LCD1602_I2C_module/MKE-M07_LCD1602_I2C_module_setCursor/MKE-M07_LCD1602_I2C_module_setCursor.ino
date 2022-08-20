#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// these constants won't change.  But you can change the size of
// your LCD using them:
const int numRows = 2;
const int numCols = 16;

LiquidCrystal_I2C lcd(0x27, numCols, numRows); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();
  lcd.backlight();
}

void loop()
{
  // loop from ASCII 'a' to ASCII 'z':
  for (int thisLetter = 'a'; thisLetter <= 'z'; thisLetter++)
  {
    // loop over the columns:
    for (int thisRow = 0; thisRow < numRows; thisRow++)
    {
      // loop over the rows:
      for (int thisCol = 0; thisCol < numCols; thisCol++)
      {
        // set the cursor position:
        lcd.setCursor(thisCol, thisRow);
        // print the letter:
        lcd.write(thisLetter);
        delay(200);
      }
    }
  }
}
