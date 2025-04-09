# Ejemplos de Arduino UNO con Explicación Teórica

Este documento incluye ejemplos prácticos y teóricos para Arduino UNO, incluyendo conceptos clave como `HIGH`, `LOW`, `digitalWrite`, `digitalRead`, variables, funciones y estructuras de control.

---

## ✅ ¿Qué es `HIGH` y `LOW`?

En Arduino:

- `HIGH` significa nivel alto (5V en placas como Arduino UNO). Se usa para encender un pin de salida.
- `LOW` significa nivel bajo (0V). Se usa para apagar un pin de salida.

---

## ✅ ¿Qué es `digitalWrite()` y `digitalRead()`?

- `digitalWrite(pin, estado)` → Permite **escribir** en un pin digital (`HIGH` o `LOW`).
- `digitalRead(pin)` → Permite **leer** el estado de un pin digital (`HIGH` o `LOW`).

---

## ✅ Tipos de variables comunes en Arduino

- `int` → números enteros (ej: `int x = 5;`)
- `float` → números con decimales
- `bool` → valores booleanos: `true` o `false`
- `unsigned long` → enteros grandes sin signo, útil con `millis()`
- `volatile` → usada en interrupciones, puede cambiar en cualquier momento

---

## ✅ ¿Qué es un `for`?

Es una estructura de control que repite un bloque de código varias veces.

```cpp
for (int i = 0; i < 10; i++) {
  // Este bloque se ejecuta 10 veces
}
```

---

## 🔷 Parpadeo Led Integrado

```cpp
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
```

**Explicación:** Este ejemplo demuestra cómo funciona el sketch `parpadeo-led-integrado.ino`. Se puede usar en Arduino UNO. Se recomienda probarlo en Tinkercad o hardware real para observar el comportamiento.


---

## 🔷 Parpadeo Led Funciones

```cpp
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
```

**Explicación:** Este ejemplo demuestra cómo funciona el sketch `parpadeo-led-funciones.ino`. Se puede usar en Arduino UNO. Se recomienda probarlo en Tinkercad o hardware real para observar el comportamiento.

---


## 🔷 Interrupcion Boton Led

```cpp
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

```

**Explicación:** Este ejemplo demuestra cómo funciona el sketch `interrupcion-boton-led.ino`. Se puede usar en Arduino UNO. Se recomienda probarlo en Tinkercad o hardware real para observar el comportamiento.

---

## 🔷 Leer Boton

```cpp
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
```

**Explicación:** Este ejemplo demuestra cómo funciona el sketch `leer-boton.ino`. Se puede usar en Arduino UNO. Se recomienda probarlo en Tinkercad o hardware real para observar el comportamiento.

---

## 🔷 Monitor Serie Cuenta

```cpp
void setup() {
    Serial.begin(9600);
  }
  
  void loop() {
    for (int i = 1; i <= 10; i++) {
      Serial.print("Contando: ");
      Serial.println(i);
      delay(500);
    }
  
    delay(3000);
  }
```

**Explicación:** Este ejemplo demuestra cómo funciona el sketch `monitor-serie-cuenta.ino`. Se puede usar en Arduino UNO. Se recomienda probarlo en Tinkercad o hardware real para observar el comportamiento.

---

## 🔷 Parpadeo Led Boleana

```cpp
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
```

**Explicación:** Este ejemplo demuestra cómo funciona el sketch `parpadeo-led-boleana.ino`. Se puede usar en Arduino UNO. Se recomienda probarlo en Tinkercad o hardware real para observar el comportamiento.

---

