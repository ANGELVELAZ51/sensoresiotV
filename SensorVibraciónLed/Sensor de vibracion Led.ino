
const int ledPin = 2; // Pin donde se conecta
const int sensorpin = 4; // Pin donde se cone

void setup(){
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop(){
  int sensorvalue = digitalRead(sensorPin); // Le
  if (sensorvalue == HIGH) {
    digitalwrite(ledPin, HIGH); // Encender el LED
    delay(100); // Esperar un corto periodo de tien
    digitalWrite(ledPin, LOW); // Apagar el LED
    
   // si se detecta vibr
  }
  delay(10); // Esperar un corto periodo de tiempo ar
}
    
  


