// Pin definitions
#define LEFT_SENSOR_PIN 2   // IR sensor for left side
#define RIGHT_SENSOR_PIN 3  // IR sensor for right side
#define LEFT_MOTOR_FORWARD 5  // Motor driver pin for left motor forward
#define LEFT_MOTOR_BACKWARD 6 // Motor driver pin for left motor backward
#define RIGHT_MOTOR_FORWARD 9  // Motor driver pin for right motor forward
#define RIGHT_MOTOR_BACKWARD 10 // Motor driver pin for right motor backward

void setup() {
  // Set up sensor pins
  pinMode(LEFT_SENSOR_PIN, INPUT);
  pinMode(RIGHT_SENSOR_PIN, INPUT);

  // Set up motor pins
  pinMode(LEFT_MOTOR_FORWARD, OUTPUT);
  pinMode(LEFT_MOTOR_BACKWARD, OUTPUT);
  pinMode(RIGHT_MOTOR_FORWARD, OUTPUT);
  pinMode(RIGHT_MOTOR_BACKWARD, OUTPUT);
}

void loop() {
  // Read sensor values
  int leftSensorValue = digitalRead(LEFT_SENSOR_PIN);
  int rightSensorValue = digitalRead(RIGHT_SENSOR_PIN);

  // Line-following logic
  if (leftSensorValue == LOW && rightSensorValue == LOW) {
    // Both sensors detect the line: move forward
    moveForward();
  } else if (leftSensorValue == LOW && rightSensorValue == HIGH) {
    // Left sensor detects the line: turn left
    turnLeft();
  } else if (leftSensorValue == HIGH && rightSensorValue == LOW) {
    // Right sensor detects the line: turn right
    turnRight();
  } else {
    // Both sensors are off the line: stop
    stopMotors();
  }
}

void moveForward() {
  digitalWrite(LEFT_MOTOR_FORWARD, HIGH);
  digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
  digitalWrite(RIGHT_MOTOR_FORWARD, HIGH);
  digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
}

void turnLeft() {
  digitalWrite(LEFT_MOTOR_FORWARD, LOW);
  digitalWrite(LEFT_MOTOR_BACKWARD, HIGH);
  digitalWrite(RIGHT_MOTOR_FORWARD, HIGH);
  digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
}

void turnRight() {
  digitalWrite(LEFT_MOTOR_FORWARD, HIGH);
  digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
  digitalWrite(RIGHT_MOTOR_FORWARD, LOW);
  digitalWrite(RIGHT_MOTOR_BACKWARD, HIGH);
}

void stopMotors() {
  digitalWrite(LEFT_MOTOR_FORWARD, LOW);
  digitalWrite(LEFT_MOTOR_BACKWARD, LOW);
  digitalWrite(RIGHT_MOTOR_FORWARD, LOW);
  digitalWrite(RIGHT_MOTOR_BACKWARD, LOW);
}