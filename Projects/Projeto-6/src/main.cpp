#include <Arduino.h>
#include <Servo.h>
//Comandos Servo.h
// attach(); => associa o pino 
// write(); => posição do braço do servo 
            // em angulo 0 a 180º
// Servo => Cria o objeto para controlar o servo
            // o motor que estamos utilizando
//--------------inicia o Servo --------------------

Servo s1;

void setup() {

  s1.attach(5);

}

void loop() {

  // posiçao inicial 0º
  s1.write(0);
  delay(1000);

  //posição 45º
  s1.write(45);
  delay(1000);

  //posição 90º
  s1.write(90);
  delay(1000);

  //posição de 135º
  s1.write(135);
  delay(1000);

  // posição 180º
  s1.write(180);
  delay(1000);

  
  s1.write(90);
  delay(1000);
}