// This project turns on and off a single Nixie tube.

#include <Arduino.h>

int daysLeft = 15;

int pinA = 8;
int pinB = 9;
int pinC = 10;
int pinD = 11;

int onesInt = 0;

void setup() {
  // init Serial
  Serial.begin(9600);

  // Set driver control pins to output mode
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);

}



void loop() {

  onesInt = daysLeft % 10;

  // Write to pins
  digitalWrite(pinA,bitRead(onesInt,0));
  digitalWrite(pinB,bitRead(onesInt,1));
  digitalWrite(pinC,bitRead(onesInt,2));
  digitalWrite(pinD,bitRead(onesInt,3));

  Serial.print(onesInt);
  Serial.println(" Sent to Nixie Tube");
}
