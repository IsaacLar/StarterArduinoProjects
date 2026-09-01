#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // Initialise built-in LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on;
  digitalWrite(LED_BUILTIN, HIGH);

  //Wait for a second
  delay(1000);

  //Turn the LED off;
  digitalWrite(LED_BUILTIN, LOW);

  //Wait for a second
  delay(1000);
}