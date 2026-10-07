#include <Arduino.h>

const int leds[] = {2, 3, 4, 5};
const int botoes[] = {6, 7, 8, 9};
const int tons[] = {400, 600, 800, 1000};

const int QTD_CORES = 4;
const int BUZZER = 10;

void setup() {

  for (int i = 0; i < QTD_CORES; i++){
    pinMode(leds[i], OUTPUT);
    pinMode(botoes[i], INPUT_PULLUP);
  }
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  for (int i =0; i < QTD_CORES; i++){

    if(digitalRead(botoes[i]) == LOW){
      digitalWrite(leds[i], HIGH);
      tone(BUZZER, tons[i]);

      delay(200);

      digitalWrite(leds[i], LOW);
      noTone(BUZZER);
    }
  }
  
}