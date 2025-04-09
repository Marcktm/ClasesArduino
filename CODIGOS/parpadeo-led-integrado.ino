int ledPin = 13; // Pin donde está conectado el LED

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {   // Repite 5 veces
    digitalWrite(ledPin, HIGH);  // Enciende el LED
    delay(300);                  
    digitalWrite(ledPin, LOW);   // Apaga el LED
    delay(300);
  }

  delay(2000); // Espera 2 segundos antes de repetir
}
