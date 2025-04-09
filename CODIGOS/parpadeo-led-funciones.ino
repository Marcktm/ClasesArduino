int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  parpadear(3); // Llama a la función y parpadea 3 veces
  delay(2000);
}

// Función que hace parpadear el LED n veces
void parpadear(int veces) {
  for (int i = 0; i < veces; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}
