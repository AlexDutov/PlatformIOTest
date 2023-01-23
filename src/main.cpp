#include <Arduino.h>
#include <Ultrasonic.h>

Ultrasonic ultrasonic1(2, 3);

void setup() {
  //Init the led
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);

  //print distance 
  Serial.print("Sensor 01: ");
  Serial.print(ultrasonic1.read()); // Prints the distance on the default unit (centimeters)
  Serial.println("cm");

}