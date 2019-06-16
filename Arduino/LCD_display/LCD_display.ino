#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print("Answer");
delay(500);
 lcd.clear();
  

lcd.print("Answer is.");
delay(500);
lcd.clear();
  
  lcd.print("Answer is..");
delay(500);
lcd.clear();
  
  lcd.print("Answer is...");
delay(2000);
lcd.clear();
lcd.setCursor(0,1);
  lcd.print("42");
delay(1000);
  

lcd.clear();

}
