#include <Arduino.h>

//Declaração de Variaveis Globais

void setup() {

  Serial.begin(9600);

}

void loop() {
  
  int leitura = analogRead(A0);//Varial Local

  Serial.print("ADC = ");
  Serial.println(leitura);

  delay(200);
}
