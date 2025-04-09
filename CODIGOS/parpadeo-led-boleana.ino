int ledPin = 13;
bool encendido = false; // Estado inicial: apagado

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  encendido = !encendido; // Cambia el estado: si estaba en true, pasa a false y viceversa

  if (encendido) {
    digitalWrite(ledPin, HIGH); // Enciende
  } else {
    digitalWrite(ledPin, LOW);  // Apaga
  }

  delay(1000); // Espera 1 segundo
}
