/*
  Dht22sp.cpp - Library for reading from Dht22 sensor
  Created by Željko Eremić
  Released into the public domain.

  DHT22      NODEMCU
  -------------
  DATA       D2
  VCC        5V
  GND        0V
  
*/
#include "Arduino.h"
#include "Dht22sp.h"
#include "DHT.h"

#define DHTPIN D2     
#define DHTTYPE DHT22 
DHT dhtsp(DHTPIN, DHTTYPE);

Dht22sp::Dht22sp(){
  dhtsp.begin();  
}

Dht22sp::Dht22sp(int pin){
  dhtsp.begin();  
}

float Dht22sp::ReadDht22temperature(){
  float t = dhtsp.readTemperature();
  return t;
}

float Dht22sp::ReadDht22humidity(){
  float h = dhtsp.readHumidity();
  return h;
}   

