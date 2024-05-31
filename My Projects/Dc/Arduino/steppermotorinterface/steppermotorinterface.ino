#include <Stepper.h>
const int spr=4;
Stepper steper (spr,8,9,10,11);

void setup() {
steper.setSpeed (10);
Serial.begin (9600);
}

void loop() {
steper.step (60);
delay (200);

steper.step (-40);
delay (200);
}
