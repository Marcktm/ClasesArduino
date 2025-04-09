volatile bool estadoLed = false; // Guarda el estado actual del LED

void setup() {
  pinMode(13, OUTPUT);         // LED en el pin 13
  pinMode(2, INPUT_PULLUP);    // Botón con resistencia pull-up

  // Asocia la función "cambiarEstado" a la interrupción externa del pin 2
  attachInterrupt(digitalPinToInterrupt(2), cambiarEstado, FALLING);
}

void loop() {
  // Enciende o apaga el LED según el valor de estadoLed
  if (estadoLed == true) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}

// Esta función se llama automáticamente cuando se presiona el botón
void cambiarEstado() {
  estadoLed = !estadoLed; // Cambia el valor: true -> false, false -> true
}
