#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

/*******************************************************************
                        CONNECTIONS
   Analog Pin A0 as the input pin for humidity sensor.
   Analog Pin A1 as the input pin for temperature sensor.
   Analog Pin A4 connected to SDA of I2C Module.
   Analog Pin A5 connected to SCL of I2C Module.

   GND & 5V to respective Ground and VCC.
   
 *******************************************************************/

/*******************************************************************
                         PART NAME
    Temperature Sensor --> LM35.
    Humidity Sensor -----> DHT11.
    16 x 2 LCD Module.
    I2C Module.
    
 *******************************************************************/


// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

#include<dht.h>
dht DHT;
void setup()
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
  lcd.begin();
  
  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Welcome");

}
void loop()
{
  lcd.setCursor(0,0);
  float f;
  f=analogRead(A1);
  f=(5*f*100/1024);
  DHT.read11(A0);
  lcd.print("Temp=");
  lcd.print(f,2);
  lcd.print(" C ");
  lcd.setCursor(0,1);
  lcd.print("Humidity=");
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(1000);
}

