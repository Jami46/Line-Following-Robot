#include <Arduino.h>

// Motor pins
#define LEFT_MOTOR_FORWARD 5
#define LEFT_MOTOR_BACKWARD 6
#define RIGHT_MOTOR_FORWARD 9
#define RIGHT_MOTOR_BACKWARD 10

// Sensor pins
#define LEFT_SENSOR A0
#define RIGHT_SENSOR A1

void setup() {
  // Initialize motor pins as output
  pinMode(LEFT_MOTOR_FORWARD, OUTPUT);
  pinMode(LEFT_MOTOR_BACKWARD, OUTPUT);
  pinMode(RIGHT_MOTOR_FORWARD, OUTPUT);
  pinMode(RIGHT_MOTOR_BACKWARD, OUTPUT);

  // Initialize sensor pins as input
  pinMode(LEFT_SENSOR, INPUT);
  pinMode(RIGHT_SENSOR, INPUT);
}

void loop() {
  int leftSensor = analogRead(LEFT_SENSOR);
  int rightSensor = analogRead(RIGHT_SENSOR);

  // Threshold to detect line
  if (leftSensor < 500 && rightSensor < 500) {
    // Move Forward
    digitalWrite(LEFT_MOTOR_FORWARD, HIGH);
    digitalWrite(RIGHT_MOTOR_FORWARD, HIGH);
    digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
    digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
  } else if (leftSensor < 500) {
    // Turn Right
    digitalWrite(LEFT_MOTOR_FORWARD, HIGH);
    digitalWrite(RIGHT_MOTOR_FORWARD, LOW);
    digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
    digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
  } else if (rightSensor < 500) {
    // Turn Left
    digitalWrite(LEFT_MOTOR_FORWARD, LOW);
    digitalWrite(RIGHT_MOTOR_FORWARD, HIGH);
    digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
    digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
  } else {
    // Stop
    digitalWrite(LEFT_MOTOR_FORWARD, LOW);
    digitalWrite(RIGHT_MOTOR_FORWARD, LOW);
    digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
    digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
  }
}
