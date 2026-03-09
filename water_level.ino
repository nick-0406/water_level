#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define water A0
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.setCursor(2,0);
  lcd.print("water level: ");
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile int sensor = analogRead(water);
  lcd.setCursor(7, 1);
  if(sensor<10) lcd.print("0");
  if(sensor<100) lcd.print("0");
  lcd.print(sensor);
  delay(500);
}

