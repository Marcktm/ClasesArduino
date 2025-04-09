int botonPin = 2;
int ledPin = 13;
bool estadoLed = false;

void setup() {
  pinMode(botonPin, INPUT_PULLUP); // Usamos pull-up interno
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(botonPin) == LOW) { // Botón presionado (activo en bajo)
    estadoLed = !estadoLed;           // Cambia el estado del LED
    delay(300); // Debounce (antirebote simple)
  }

  digitalWrite(ledPin, estadoLed ? HIGH : LOW); // Enciende o apaga según el estado
}
