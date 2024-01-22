/*
  Dht22sp.cpp - Library for reading from Dht22 sensor
  Created by Željko Eremić
  Released into the public domai

  DHT22      NODEMCU
  -------------
  DATA       D2
  VCC        5V
  GND        0V
  
*/
#ifndef Dht22sp_h
#define Dht22sp_h
#include "Arduino.h"

class Dht22sp
{
  public:
    Dht22sp();
    Dht22sp(int pin);
    float ReadDht22temperature();
    float ReadDht22humidity();    
};

#endif

