#include <Arduino.h>

//Definir os pinos utilizados pelo sensor ultrassonico
const int TRIG = 11; // Envia o pulso ultrassonico
const int ECHO = 10; // Recebe o retorno do pulso

//Vetor de leds
const int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int QTD_LEDS = 8;

//Configurar o Buzzer
const int BUZZER = 12;


void setup() {
  // inicia o Monitor Serial
  Serial.begin(9600); // com velocidade de 9600

  // O TRIG é uma saida, o arduino enviar um sinal para o sensor
  pinMode(TRIG, OUTPUT);

  // O ECHO é um entrada, o arduino recebe um sinal do sensor
  pinMode(ECHO, INPUT);

  //Laço de repetição para PinMode para cada porta dos Leds
  for (int i =0; i < QTD_LEDS; i++){
    pinMode(leds[i], OUTPUT);
  }

  // PinMode do Buzzer
  pinMode(BUZZER, OUTPUT);
  
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


  //TRANSFORMAR DISTANCIA EM NIVEL
  // Indica quantos Leds devem acender
  // Quanto MENOR a distancia MAIOR sera o nivel

  int nivel;

  if(distancia <= 10){
    nivel = 8;
  }else if(distancia <= 15){
    nivel = 7;
  }else if(distancia <= 20){
    nivel = 6;
  }else if(distancia <= 30){
    nivel = 5;
  }else if(distancia <= 45){
    nivel = 4;
  }else if(distancia <= 60){
    nivel = 3;
  }else if(distancia <= 80){
    nivel = 2;
  }else if(distancia <=100){// pode chegar a 400cm
    nivel = 1;
  } else{
    //Acima de 100cm, nunhum led fica aceso.
    nivel = 0;
  }



  //Exibir a distancia no Monitor Serial
  Serial.print(duracao, 5);//resposta em sinal do Sensor
  Serial.print(" - ");
  Serial.print("Distancia: ");
  //Mostrar a distancia com 1 casa decimal
  Serial.print(distancia, 1);
  Serial.print(" cm");
  //Mostrar o nivel 
  Serial.print(" - ");
  Serial.println(nivel);

  //Aguardar alguns milissegundos

  delay(300);

  //Fazer acender os Leds

  for(int i = 0; i < QTD_LEDS; i++){
    // Se a posição do LED for menor que o nivel
    //o Led sera ligado
    if(i < nivel){
      digitalWrite(leds[i], HIGH);
    }else{
      //os demais ficam apagados.
      digitalWrite(leds[i],LOW);
    }
  }

  //Criar as regras para o Buzzer

  //Nivel 0 => acima de 100cm vai partir do led verde
  // Nenhum Led acende e nenhum som
  if(nivel ==0){
    noTone(BUZZER);
    delay(100);
  } 
  
  //Nivel 1 => acender primeiro Led verde
  //som bips bem lentos 
  else if(nivel == 1){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(1000);
  }
  
  //Nivel 2 => acende o segundo Led verde
  //som diminui o intervalo de tempo
  else if(nivel == 2){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(700);
  }

  //Nivel 3 => acende o terceiro Led verde
  //som diminui o intervalo de tempo
  else if(nivel == 3){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(500);
  }

  //Nivel 4 => acende o primeiro amarelo
  //Fase de Atenção
   else if(nivel == 4){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(350);
  } 


  //Nivel 5 => acende o segundo amarelo
  //
  else if(nivel == 5){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(250);
  } 

  //Nivel 6 => acende o terceiro amarelo
  //
  else if(nivel == 6){
    tone(BUZZER, 1000);
    delay(100);
    noTone(BUZZER);
    delay(150);
  } 

  //Nivel 7 => acende o primeiro vermelho
  //Atenção passa para o Nivel Maximo
  else if(nivel == 7){
    tone(BUZZER, 1200);
    delay(100);
    noTone(BUZZER);
    delay(70);
  }   
  
  //Nivel 8 => ultimo Led vermelho
  // Som permanece ativo (Nivel Maximo)
  else {
    tone(BUZZER, 1500);
    delay(100);
  }
}