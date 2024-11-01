#include <LiquidCrystal.h>
#include <DHT11.h>

DHT11 dht11(2);



LiquidCrystal lcd(4, 6, 10, 11, 12, 13);



void setup() {
  lcd.begin(16, 2);    
     lcd.clear();         
     delay(1000);
}

void loop() {
  
     int humidity = dht11.readHumidity();
      lcd.setCursor(0, 0);
      lcd.print("Humidity: ");
      lcd.print(humidity);
      lcd.print(" % ");

    
    float temp = dht11.readTemperature();
    lcd.setCursor(0,1);
    lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print(" C ");



}
