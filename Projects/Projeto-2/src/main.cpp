#include <Arduino.h>
//Definir os pinos utilizados pelo sensor ultrassonico
const int TRIG = 11; // Envia o pulso ultrassonico
const int ECHO = 10; // Recebe o retorno do pulso

void setup() {
  // inicia o Monitor Serial
  Serial.begin(9600); // com velocidade de 9600

  // O TRIG é uma saida, o arduino enviar um sinal para o sensor
  pinMode(TRIG, OUTPUT);

  // O ECHO é um entrada, o arduino recebe um sinal do sensor
  pinMode(ECHO, INPUT);
  
}

void loop() {

  // Garantir que o pino TRIG começe desligado
  digitalWrite(TRIG, LOW);

  // Aguarda 2 microsegundos
  delayMicroseconds(2);

  // Enviar um pulso inical para medição
  digitalWrite(TRIG, HIGH);

  // Manter o pulso ligado por 
  delayMicroseconds(10);

  // Encerra o pulso
  digitalWrite(TRIG, LOW);

  // medir o tempo que o ECHO permanece ligao(HIGH)
  // Representa o tempo de ida e volta do som
  unsigned long duracao = pulseIn(ECHO, HIGH);

  //Fazer a converção tempo em centimetros
  // caminho de ida e volta ate o objeto medido
  float distancia = duracao / 58.0;

  //Exibir a distancia no Monitor Serial
  Serial.print(duracao, 5);
  Serial.print(" - ");
  Serial.print("Distancia: ");
  //Mostrar a distancia com 1 casa decimal
  Serial.print(distancia, 1);
  Serial.println(" cm");

//Aguardar alguns milissegundos

  delay(300);
  
}