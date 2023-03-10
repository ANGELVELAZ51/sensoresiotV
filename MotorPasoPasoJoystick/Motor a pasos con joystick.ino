#include <AccelStepper.h>
#include <Joystick.h>

// Definir los pines del motor
#define motorPin1 10
#define motorPin2 18
#define motorPin3 5
#define motorPin4 33

// Crear un objeto AccelStepper
AccelStepper stepper(1, motorPin1, motorPin3, motorPin2, motorPin4);

// Definir los pines del joystick
const int xPin = A0;
const int yPin = A1;
const int buttonPin = 7;

// Crear un objeto Joystick
Joystick_ joystick;

void setup() {
  // Inicializar el objeto AccelStepper
  stepper.setMaxSpeed(1000);
  stepper.setAcceleration(100);

  // Inicializar el objeto Joystick
  joystick.begin();

  // Configurar el botón del joystick como entrada
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Leer los valores del joystick
  int xValue = joystick.getAxis(X_AXIS);
  int yValue = joystick.getAxis(Y_AXIS);
  int buttonValue = digitalRead(buttonPin);

  // Convertir los valores del joystick en velocidades para el motor
  int speedX = map(xValue, 0, 1023, -500, 500);
  int speedY = map(yValue, 0, 1023, -500, 500);

  // Mover el motor según los valores del joystick
  stepper.setSpeed(speedX + speedY);

  // Si se presiona el botón del joystick, detener el motor
  if (buttonValue == LOW) {
    stepper.stop();
    stepper.setCurrentPosition(0);
  }

  // Hacer un paso del motor
  stepper.runSpeed();
}
