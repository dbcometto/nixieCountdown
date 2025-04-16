// This project turns on and off a single Nixie tube.

#include <Arduino.h>

int daysLeft = 15;

int pinA = 8;
int pinB = 9;
int pinC = 10;
int pinD = 11;

void setup() {

  // Set driver control pins to output mode
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);

}

void loop() {

  
  // put your main code here, to run repeatedly:
}
