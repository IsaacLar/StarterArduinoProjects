#include <Arduino.h>

void setup(){
  pinMode(2, OUTPUT);
}

void loop() {
  //D
  tone(2, 294);
  delay(80);
  noTone(2);
  delay(20);
  tone(2, 294);
  delay(100);
  tone(2, 587);
  delay(200);
  tone(2, 440);
  delay(350);
  tone(2, 415);
  delay(200);
  tone(2, 392);
  delay(200);
  tone(2, 349);
  delay(200);
  tone(2, 294);
  delay(100);
  tone(2, 349);
  delay(100);
  tone(2, 392);
  delay(100);

  //C
  tone(2, 262);
  delay(80);
  noTone(2);
  delay(20);
  tone(2, 262);
  delay(100);
  tone(2, 587);
  delay(200);
  tone(2, 440);
  delay(350);
  tone(2, 415);
  delay(200);
  tone(2, 392);
  delay(200);
  tone(2, 349);
  delay(200);
  tone(2, 294);
  delay(100);
  tone(2, 349);
  delay(100);
  tone(2, 392);
  delay(100);

  //B
  tone(2, 247);
  delay(80);
  noTone(2);
  delay(20);
  tone(2, 247);
  delay(100);
  tone(2, 587);
  delay(200);
  tone(2, 440);
  delay(350);
  tone(2, 415);
  delay(200);
  tone(2, 392);
  delay(200);
  tone(2, 349);
  delay(200);
  tone(2, 294);
  delay(100);
  tone(2, 349);
  delay(100);
  tone(2, 392);
  delay(100);

  //B flat
  tone(2, 233);
  delay(80);
  noTone(2);
  delay(20);
  tone(2, 233);
  delay(100);
  tone(2, 587);
  delay(200);
  tone(2, 440);
  delay(350);
  tone(2, 415);
  delay(200);
  tone(2, 392);
  delay(200);
  tone(2, 349);
  delay(200);
  tone(2, 294);
  delay(100);
  tone(2, 349);
  delay(100);
  tone(2, 392);
  delay(100);

}