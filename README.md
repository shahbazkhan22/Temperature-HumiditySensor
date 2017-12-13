# Temperature-HumiditySensor
This repository contains arduino code for detecting current temperature and humidity and displaying it on a LCD.
# Hardware required
    - Arduino Uno (Development Board)
      LM35 (Temperature sensing device)
      DHT11 (Humidity sensing device)
      I2C Module (Module to connect arduino to LCD)
      LCD display (16 x 2)
      
# Connections
    - Analog Pin(A0) as the input pin for humidity sensor.
      Analog Pin(A1) as the input pin for temperature sensor.
      Analog Pin(A4) connected to SDA of I2C Module.
      Analog Pin(A5) connected to SCL of I2C Module.
      GND & 5V to respective Ground and VCC.
      
# Header files included
    - <Wire.h>
      <LiquidCrystal_I2C.h>
       
* These header files need to be installed before including them in codes.
