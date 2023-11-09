#include <Arduino.h>
// Include the Servo library for working with Servo Motors
#include <Servo.h>
Servo servo;

// Assign pin for Servo signal
int servo_pin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(servo_pin, OUTPUT);
  
  //  Connect the ervo pin to `servo` instance
  servo.attach(servo_pin);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  to move the servo motor from 0° to 180° 
  for (int servo_position = 0; servo_position < 180; servo_position += 1) {
    Serial.print(servo_position);
    Serial.println("°");
    servo.write(servo_position);
    delay(50);
  }

  for (int servo_position = 180; servo_position > 0; servo_position -= 1) {
    Serial.print(servo_position);
    Serial.println("°");
    servo.write(servo_position);
    delay(50);
  }
}
