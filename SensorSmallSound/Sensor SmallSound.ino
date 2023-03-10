const int avoidPin = 13; // Pin donde está

void setup() {
pinMode(avoidPin, INPUT); // Configura el
}
void loop() {
int avoidValue = digitalRead(avoidPin); // L
if (avoidValue == HIGH) {
// Objetos detectados
// Hacer algo aquí
}else {
// No se detectaron objetos

}

}
// Hacer algo aquí