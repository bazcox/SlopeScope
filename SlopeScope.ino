#include <Stepper.h>


int stepsPerRevolution = 2048;


int rpm = 15;


Stepper myStepper (stepsPerRevolution, 8, 10, 9, 11);


void setup() {
 myStepper.setSpeed(rpm);
}


void loop() {
 myStepper.step(stepsPerRevolution);
}
