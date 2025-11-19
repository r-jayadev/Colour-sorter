#include <Servo.h>

Servo topServo;

void setup() {
  topServo.attach(7);   // Connect servo to pin 7
  topServo.write(15);  // Move servo to 115 degrees
}

void loop() {
  // Nothing here — servo stays at 115°
}
