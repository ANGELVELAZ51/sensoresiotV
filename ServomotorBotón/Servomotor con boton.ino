// Definir los pines del motor
int motor1Pin1 = 27;
int motor1Pin2 = 26;
int enable1Pin = 14;

// Configurar las propiedades PWM
const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;
int dutyCycle = 200;

void setup() {
  // Establecer los pines como salidas
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1Pin, OUTPUT);

  // Configurar las funcionalidades PWM del LED
  ledcSetup(pwmChannel, freq, resolution);

  // Asociar el canal al GPIO para ser controlado por PWM
  ledcAttachPin(enable1Pin, pwmChannel);

  // Inicializar la comunicación serial a una velocidad de 115200 baudios
  Serial.begin(115200);
}

void loop() {
  // Aquí puedes agregar el código para controlar el motor usando PWM
  // por ejemplo:
  ledcWrite(pwmChannel, dutyCycle); // establece el ciclo de trabajo en dutyCycle
  digitalWrite(motor1Pin1, HIGH);  // establece el sentido de giro del motor
  digitalWrite(motor1Pin2, LOW);

  // Espera un segundo antes de cambiar la velocidad del motor
  delay(1000);

  // Incrementa el ciclo de trabajo en 10 unidades
  dutyCycle += 10;

  // Si el ciclo de trabajo llega a 255, vuelve a 0
  if (dutyCycle > 255) {
    dutyCycle = 0;
  }
}
