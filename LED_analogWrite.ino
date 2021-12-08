#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int val;

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("Hello, world!");

  val = 0;
}


void loop()
{
  delay(250);
  analogWrite(3, val);
  lcd.setCursor(4,1);
  lcd.print("Val="+String(val)+"     ");
  val++;
  if (val > 255) {
    val = 0;
  }
}
