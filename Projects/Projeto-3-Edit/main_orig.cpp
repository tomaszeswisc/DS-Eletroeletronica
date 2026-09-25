#include <Arduino.h>

//Vetor de leds (pinos para cada Led)
const int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
const int QTD_LEDS = 10; // Qnt de leds no circuito

const int PUSH = 12; //Pino do Push Button
const int BUZZER = 13; // Pino do Buzzer

int contador = 0; // Variavel para Guardar QNT de toques

void setup() {

  Serial.begin(9600); //Configura porta serial velocidade 9600

  // Configura pinos dos Leds com o vetor em modo de saida
  // PinMode(2, OUTPUT); PinMode(3, OUTPUT)... ate QTD de portas
  for (int i = 0; i < QTD_LEDS; i++){
    pinMode(leds[i], OUTPUT);
  }

  //Configura o Botao Solto = HIGH | Pressionado = LOW
  // Utiliza a resistencia interna do arduino
  pinMode(PUSH, INPUT_PULLUP);

  //Configura o Pino do Buzzer
  pinMode(BUZZER, OUTPUT);

}

void loop() {
  // Verificar se o botao foi pressionado
  if (digitalRead(PUSH) == LOW){

    // Verificar se chegamos a 10, 
    //caso sim o proximo toque reinicia
    if(contador >= 10){
      contador = 0;
    }

    //Atingiu 10 apaga todos os Leds
    for(int i = 0; i < QTD_LEDS; i++){
      digitalWrite(leds[i], LOW);
    }

    Serial.println("Contagem = 0");
    
  } 
  
  // Caso nao tenha chegado a 10 contador soma 1.
  else {
    
    contador++;
    Serial.print("Contagem = ");
    Serial.println(contador);

    for(int i = 0; i < QTD_LEDS; i++){
      if (i < contador){
        digitalWrite(leds[i], HIGH);
      }else{
        digitalWrite(leds[i], LOW);
      }
    }

  }
 delay(1000);
}