#include <Arduino.h>
#include <Servo.h>

const int SENSOR = A0; //Potenciometro simulando sensor
const int leds[] = {2, 3, 4, 5, 6, 7, 8, 9}; //Arrey de Leds
const int QTD_LEDS = 8; //Quantidade dos leds
const int BUZZER = 12; // Difine pino do Buzzer

 void setup() {

  Serial.begin(9600); //configura porta serial

  //laço de repetiçao para configurar os pinos dos LEDS
  for (int i = 0; i < QTD_LEDS; i++) {
    pinMode(leds[i], OUTPUT);
  }

  pinMode(BUZZER, OUTPUT);

}


void loop() {

  int leitura = analogRead(SENSOR); //Faz a leitura porta A0 Analogica
  int nivel = map(leitura, 0, 1023, 0, 9);
  nivel = constrain(nivel, 0, 8);

  Serial.print("ADC = ");
  Serial.print(leitura);
  Serial.print(" | Nivel = ");
  Serial.println(nivel);

  for (int i = 0; i < QTD_LEDS; i++){
    if (i < nivel){
      digitalWrite(leds[i], HIGH);
    }else{
      digitalWrite(leds[i], LOW);
    }
  }

  //Tons do Buzzer
  //Tocar de acordo com o nivel
  if(nivel == 0){
    noTone(BUZZER);
    delay(100);
  }else if(nivel == 1){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(1000);    
  }else if(nivel == 2){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(900);    
  }else if(nivel == 3){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(800);    
  }else if(nivel == 4){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(700);    
  }else if(nivel == 5){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(600);    
  }else if(nivel == 6){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(500);    
  }else if(nivel == 7){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(400);    
  }else {
    tone(BUZZER, 1000);
    delay(100);   
  }
}