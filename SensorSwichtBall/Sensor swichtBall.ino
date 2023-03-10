const int ballSwitchPin =2;

void setup() {
pinMode(ballSwitchPin, INPUT_PULLUP); // Configurar el pin del
Serial.begin(9600);  
}

void loop() {
int ballswitchValue = digitalRead(ballswitchPin): // Leer el valor
if (ballswitchvalue == LOW) ( // si el sensor detecta la bola en movin
Serial.printin("Bola en movimiento"):
// Haz aqui lo que desees cuando el.sensor
}


