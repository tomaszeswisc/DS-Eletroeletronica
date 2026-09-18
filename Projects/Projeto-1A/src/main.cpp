#include <Arduino.h>

const int SENSOR = A0; //Potenciometro simulando sensor
const int leds[] = {2, 3, 4, 5, 6, 7, 8, 9}; //Arrey de Leds
const int QTD_LEDS = 8; //Quantidade dos leds

 void setup() {

  Serial.begin(9600); //configura porta serial

  //laço de repetiçao para configurar os pinos dos LEDS
  for (int i = 0; i < QTD_LEDS; i++) {
    pinMode(leds[i], OUTPUT);
  }

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

delay(200);
}