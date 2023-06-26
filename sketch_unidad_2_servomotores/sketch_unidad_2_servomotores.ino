#include <Servo.h>

#define SENSOR A0
#define SERVO  3

Servo servo;

void setup() {
  servo.attach(SERVO, 520, 2700);
  
  servo.write(0);
  // Comienza en posicion inicial
}

void loop() {
  int value = analogRead(SENSOR);
  value = map(value, 0, 1023, 0, 179);

  servo.write(value);
}
