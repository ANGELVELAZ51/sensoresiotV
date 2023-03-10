#include <Servo.h>

Servo myservo;  // crea un objeto Servo
int buttonPin = 21;  // pin del botón
int servoPin = 26;   // pin del servo
int angle = 0;      // ángulo inicial del servo
int increment = 10; // incremento del ángulo

void setup() {
  myservo.attach(servoPin);  // adjunta el servo al pin
  pinMode(buttonPin, INPUT_PULLUP);  // establece el botón como entrada
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {  // verifica si el botón está presionado
    angle += increment;  // incrementa el ángulo del servo
    if (angle > 180) {   // limita el ángulo a 180 grados
      angle = 180;
    }
    myservo.write(angle);  // mueve el servo al ángulo actual
    delay(50);  // espera para evitar rebotes del botón
  }
}
