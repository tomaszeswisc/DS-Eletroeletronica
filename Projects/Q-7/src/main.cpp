#include <Arduino.h>
// testar 30, 120 e 210

const int PINO_LED = 9; //Variável Global

void setup() {

    pinMode(PINO_LED, OUTPUT);

}

void loop() {
    analogWrite(PINO_LED, 30);// 0 a 255 PWM
    delay(3000);

    analogWrite(PINO_LED, 120);
    delay(3000);

    analogWrite(PINO_LED, 210);
    delay(3000);
 
}