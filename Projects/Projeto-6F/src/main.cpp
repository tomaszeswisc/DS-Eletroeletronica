//incluir as bibliotecas
#include <Arduino.h>
#include <Servo.h>

//variaveis e constantes

//Ultrassonico
const int TRIG = 11; // envia pulso
const int ECHO = 10; // recebo o pulso

// Leds
const int Led_Vermelho = 8;
const int Led_Verde = 9;

// Buzzer
const int Buzzer = 13;

//Configurar os Servos
//Comandos Servo.h
// attach(); => associa o pino 
// write(); => posição do braço do servo 
            // em angulo 0 a 180º
// Servo => Cria o objeto para controlar o servo
            // o motor que estamos utilizando

//--------------inicia o Servo --------------------
Servo S1; // Cria o Servo 1
Servo S2; // Cria o Servo 2

// Estados da Porta
// 0 = Porta Fechada
// 1 = Porta Aberta
int aberta = 0; // iniciar com a porta fechada

//Funçoes e Procedimentos

//Função para tocar o Buzzer
void som(){

    tone(Buzzer, 1200);
    delay(100);

    noTone(Buzzer);
    delay(300);
}

//Fução Porta Aberta
void abrirPorta () {

    digitalWrite(Led_Vermelho, LOW);
    digitalWrite(Led_Verde, HIGH);

    if(aberta == 0){
        for(int angulo = 0; angulo <= 90; angulo++){
            S1.write(angulo);
            S2.write(180 - angulo);

            delay(10);
        }
        aberta = 1;
    }
}

//Fução Porta Fechada
void fecharPorta () {
    
    noTone(Buzzer);

    if(aberta == 1){
        for(int angulo = 90; angulo >= 0; angulo--){
            S1.write(angulo);
            S2.write(180 - angulo);

            delay(10);
        }
        aberta = 0;
    }
    digitalWrite(Led_Vermelho, HIGH);
    digitalWrite(Led_Verde, LOW);
}

//Função Para Medir a Distancia

float medirDistancia() {
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);

    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);

    unsigned long durucao = pulseIn(ECHO, HIGH);
    float distancia = durucao / 58.2;

    return distancia;
}



void setup() {
//Configura o que iremos utilizar

// Configurar o Monitor Serial e os Pinos do Sensor
Serial.begin(9600);
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);

//Configurar Pinos dos Leds e o Buzzer
pinMode(Led_Vermelho, OUTPUT);
pinMode(Led_Verde, OUTPUT);
pinMode(Buzzer, OUTPUT);

//Configurar os Pinos dos Servos
S1.attach(5);
S2.attach(6);

//Configurar posição inicial da porta
S1.write(0); // inicia em 0 graus
S2.write(180); // inicia em 180 graus

//Definir inicio dos Leds e Buzzer
//Porta Fechada = Led Vermelho aceso - Led Verde apagado
//Buzzer não toca
digitalWrite(Led_Vermelho, HIGH); // Led Vermelho acende
digitalWrite(Led_Verde, LOW); // Led Verde apagado
noTone(Buzzer); // Buzzer não toca

}

void loop() {
    // area do programa
    
    float distancia = medirDistancia();
    int proximidade = map(distancia, 400, 0, 0, 100);
    proximidade = constrain(proximidade, 0, 100);

    Serial.print("Distancia: ");
    Serial.print(distancia);
    Serial.print("cm | Proximidade: ");
    Serial.print(proximidade);
    Serial.println("%");

    if (proximidade >= 70){
        abrirPorta();
        som();
    }
    
    else{
        fecharPorta();
        delay(200);
    }
}