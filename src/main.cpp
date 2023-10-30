/*
  Blink
  Turns an LED on for one second, then off for one second, repeatedly.
*/
#include <Arduino.h>
#include <SPI.h>

void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  Serial.println("LED ON");
  delay(500);                    // wait for a second
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  Serial.println("LED OFF");
  delay(500);                    // wait for a second
}