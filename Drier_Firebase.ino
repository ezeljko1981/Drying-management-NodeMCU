/*
 System for automatic measurement and storage of Drier data
 NodeMCU_Firebase Library for :
 - Reading values from sensors for temperature, humididty and weight and sending values to Firebase. 
 - Reading param values from Firebase.

 The circuit:  

***************************
 INPUT: 
  DHT22(1)   NODEMCU
  -------------
  DATA       D0  
  VCC        5V
  GND        0V

  DHT22(2)   NODEMCU
  -------------
  DATA       D1 
  VCC        5V
  GND        0V

***************************
OUTPUT: 
  RELAY(3)   NODEMCU
  -------------
  DATA       D3 
  VCC        3.3V
  GND        0V

  PCFAN   NODEMCU
  -------------
  DATA       D4 
  VCC        5V
  GND        0V
***************************
  
 Library originally added
 by Željko Eremić

 This example code is in the public domain.
*/

#include "NodeMCU_Firebase.h"

NodeMCU_Firebase nodeMCU_Firebase(D3, D7);

void setup(void) 
{
  Serial.begin(9600);
  nodeMCU_Firebase.SetupFirebase();
  while(1)
  {
    nodeMCU_Firebase.Loop();  
  } 
}
void loop(void) { }

