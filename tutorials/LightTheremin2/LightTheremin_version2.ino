/*
  Arduino Starter Kit example
  Project 6 - Light Theremin

  This sketch is written to accompany Project 6 in the Arduino Starter Kit

  Parts required:
  - photoresistor
  - 10 kilohm resistor
  - piezo

  created 13 Sep 2012
  by Scott Fitzgerald

  http://www.arduino.cc/starterKit

  This example code is part of the public domain.
*/

/* 
 Moderated slightly by Mari Lesteberg and Thomas Haaland on 19 March 2020, 
 for WoNoMute workshops and tutorials
 */

// variable to hold sensor value
int sensorValue;
// variable to calibrate low value
int sensorLow = 1023;
// variable to calibrate high value
int sensorHigh = 0;
// LED pin
int potPin = A5;
// Potentiometer 1
int potPin2 = A4;
// Potentiometer 2

const int ledPin = 13;


void setup() {
  // Make the LED pin an output and turn it on
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  // calibrate for the first five seconds after program runs
  while (millis() < 5000) {
    // record the maximum sensor value
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    // record the minimum sensor value
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }
  // turn the LED off, signaling the end of the calibration period
  digitalWrite(ledPin, LOW);

    // initialize serial communication at 9600 bits per second :
  Serial.begin(9600);
}

void loop() {


  // read the input on analog pin 5:
  int potValue = analogRead(potPin);



    // read the input on analog pin 4:
  int pitchPotValue = analogRead(potPin2);
   
  //read the input from A0 and store it in a variable
  sensorValue = analogRead(A0);

  // map the sensor values to a wide range of pitches
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, pitchPotValue);

  int maxPotvalue = 50; 
  // setting the max value of potmeter to 50
  
  int potValue2 = potValue / maxPotvalue + 1;
  // calclulating new value of potmeter, 

    // play the tone for 20 ms on pin 8
  tone(8, pitch, potValue2);

  // Printing the values from potentiometer2 to the Serial Monitor (open it from Tools/Serial Monitor)
  Serial.println(potValue2);
// delay(1);        // delay in between reads for stability
 
  // wait for a moment
  delay(10);
}
