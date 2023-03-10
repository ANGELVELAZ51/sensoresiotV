int sensorPin = 34; // Pin del sensor de sonido KY-038
const int theresholdValue = 400; 

void setup() {
pinMode(soundSensroPin, INPUT);
pinMode(ledPin,OUTPUT);
  Serial.begin(9600); // Inicializa la comunicación serial a 9600 baudios
}

void loop() {
  sensorValue = analogRead(sensorPin); // Lee el valor del pin analógico del sensor
  Serial.println(sensorValue); // Imprime el valor leído en el puerto serial
  delay(100); // Espera 100 milisegundos antes de tomar la siguiente lectura
}