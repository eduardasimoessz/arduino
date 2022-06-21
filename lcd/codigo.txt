#include <LiquidCrystal.h> 

byte lamp= 6;
int tempo = 0;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup (){
  pinMode(lamp, OUTPUT);
  lcd.begin(16,2);
}

void loop(){
  lcd.clear();
  
for(int i=0; i <= 10; i++) {
  lcd.setCursor(8,0);
  lcd.print(1); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(2); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(3); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(4); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(5); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(6); 
  delay(500);
  lcd.clear();
 
  lcd.setCursor(8,0);
  lcd.print(7); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(8); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(9); 
  delay(500);
  lcd.clear();
  
  lcd.setCursor(8,0);
  lcd.print(10); 
  delay(500);
  lcd.clear();
  
  digitalWrite (lamp,1);
  delay(3000);
  digitalWrite(lamp,0);
  delay(1000); }
}