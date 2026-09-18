#include <Arduino.h>

void setup() {
  
  Serial.begin(9600);

}

void loop() {
 
  int leitura = analogRead(A0);

  Serial.print("ADC = ");
  Serial.println(leitura);

  delay(300);

}