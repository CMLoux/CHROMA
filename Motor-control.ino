#include <AccelStepper.h>

#define STEP_PIN 3
#define DIR_PIN 2

const int STEPS_PER_REV = 400;

const float MOTOR_RPM = 200.0;

const float MOTOR_SPEED = (STEPS_PER_REV * MOTOR_RPM) / 60.0;

AccelStepper stepper(
  AccelStepper::DRIVER,
  STEP_PIN,
  DIR_PIN
);

void setup() {
  stepper.setMinPulseWidth(7.5);

  stepper.setMaxSpeed(MOTOR_SPEED);

  stepper.setAcceleration(100);
  stepper.moveTo(1000000000);

  stepper.setSpeed(MOTOR_SPEED);

}

void loop() {
  
  stepper.run();
  // Rest of the program
}
