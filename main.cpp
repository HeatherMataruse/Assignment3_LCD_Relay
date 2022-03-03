// Heather Mataruse

//including the required library
#include <LiquidCrystal.h>
// setting up the variabled of the pins
const int rs = 12, en = 11, d4 = 5, d5 = 6, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

  
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(4, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  lcd.begin(16, 2);
  lcd.print(analogRead(A0));
  if (analogRead(A0) > 350) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  delay(100); 
}
