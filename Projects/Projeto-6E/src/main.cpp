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

    //Inicia a Medição
    digitalWrite(TRIG,LOW); // TRIG inicia Desligado
    delayMicroseconds(2);

    digitalWrite(TRIG, HIGH); // Envia pulso de 10 microsegundos
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);
    
    //Medir o tempo que o Echo permanece em HIGH
    unsigned long duracao = pulseIn(ECHO, HIGH);

    //Coverter o tempo em distancia em centimetros
    float distancia = duracao / 58.2;

    //Converter distancia em proximidade
    // 400 cm =   0% de proximidade
    //   0 cm = 100% de proximidade
    int proximidade = map(distancia, 400, 0, 0, 100);

    // garantir que fique de 0 a 100
    proximidade = constrain(proximidade, 0, 100);

    Serial.print("Distancia: ");
    Serial.print(distancia);
    Serial.print("cm | Proximidade: ");
    Serial.print(proximidade);
    Serial.println("%");

    // Verificar a Proximidade
    // Abrir a porta de 70% ou mais de proximidade

    if (proximidade >= 70){
        //Status Luminoso => Porta Aberta
        digitalWrite(Led_Vermelho,LOW); //Apaga o Led Vermelho
        digitalWrite(Led_Verde, HIGH); // Acende o Led Verde

        //Abrir a Porta Somente se ela estiver Fechada
        if(aberta ==0){
            //Os angulos vao de 0 ate 90 graus
            for(int angulo = 0; angulo <=90; angulo++){
                S1.write(angulo); // Servo 1: 0 -> 90 graus
                S2.write(180 - angulo); // Servo 2: 180 -> 90graus
                delay(10); // pausa para ver o movimento            
            }
            aberta = 1; //Mudar estado da porta para aberta
        }
        //Bipar com a porta aberta
        tone(Buzzer, 1200);
        delay(100);
        noTone(Buzzer);
        delay(300);
    } 
    else{ //Fechar a porta com a proximidade menor que 70%
    
        //Desligar o Buzzer
        noTone(Buzzer);

        //Fechar a porta somente se ela estiver aberta
        if(aberta == 1){

            //movinto invertido
            for(int angulo = 90; angulo >=0; angulo--){
                S1.write(angulo); // Servo 1: 0 -> 90 graus
                S2.write(180 - angulo); // Servo 2: 180 -> 90graus
                delay(10); // pausa para ver o movimento            
            }
            aberta = 0; //Mudar estado da porta para aberta
        }

        //Status luminoso => Porta Fechada
        digitalWrite(Led_Vermelho, HIGH); // Led vermelho aceso
        digitalWrite(Led_Verde, LOW); // Led verde apagado
        delay(300);

    }
}