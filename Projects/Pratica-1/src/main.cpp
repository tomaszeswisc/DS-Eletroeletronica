#include <Arduino.h>

const int SENSOR = A0; // Potenciometro simulando sensor
const int leds[] = {2, 3, 4, 5, 6, 7, 8, 9}; //Arrey de Leds
const int QNT_LEDS = 8; //Quantidade de leds

void setup() {
  Serial.begin(9600);//Configura a porta serial

  //laço para configurar os pinos dos LEDS
  for (int i; i < QNT_LEDS; i++){
    pinMode(leds[i], OUTPUT);
    }
}

void loop() {
  
  int leitura = analogRead(SENSOR);
  int nivel = map(leitura, 0, 1023, 0, 9);
  nivel = constrain(nivel, 0, 8);

  Serial.print("ACD = ");
  Serial.print(leitura);
  Serial.print(" | Nivel = ");
  Serial.println(nivel);

  for (int i = 0; i < QNT_LEDS; i++){
    if (i < nivel){
      digitalWrite(leds[i], HIGH);
      }else{
        digitalWrite(leds[i], LOW);
      }
  }

  delay(200);
}