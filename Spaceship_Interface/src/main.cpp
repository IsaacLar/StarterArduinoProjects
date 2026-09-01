#include <Arduino.h>

int switchState = 0;

void setup() {
  //Switch
  pinMode(2, INPUT);
  
  //Green LED
  pinMode(3, OUTPUT);
  //Red LEDs
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  switchState = digitalRead(2);

  //Button is NOT pressed
  if (switchState == LOW){
    //Idle state
    digitalWrite(3, 1);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
  //Button is pressed
  } else {
    //Flash red LEDs
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 1);

    delay(250);

    digitalWrite(4, 1);
    digitalWrite(5, 0);

    delay(250);
  }
}