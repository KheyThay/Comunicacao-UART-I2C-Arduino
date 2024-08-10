// Código feito em c++

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);

String contador;

void setup()
{
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0){
    contador = Serial.readString();
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print("Recebi: ");
    lcd.print(contador.toInt());
  }
}