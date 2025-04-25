# 🛎️ Unidad 6 - Interrupciones en Microcontroladores

## 🎯 Objetivo

Comprender qué son las interrupciones, cómo se configuran en Arduino y qué ventajas ofrecen en comparación con la verificación continua (polling).

---

## 1. Introducción a las Interrupciones

Una **interrupción** es un mecanismo que permite ejecutar una función específica en respuesta a un evento, **sin necesidad de estar revisando continuamente** el estado de entrada (como un botón).

---

## 2. Tipos de Interrupciones

- **Externas**: activadas por un cambio en el estado de un pin digital (ej: botón).
- **Internas**: generadas dentro del microcontrolador (ej: temporizadores).
- **Por temporizador**: disparadas tras un intervalo de tiempo configurado.

---

## 3. Configuración de Interrupciones en Arduino

### 🔹 Función principal

```cpp
attachInterrupt(digitalPinToInterrupt(pin), funcion_ISR, modo);
```

- `pin`: número de pin digital (solo ciertos pines).
- `funcion_ISR`: función que se ejecutará al interrumpir.
- `modo`: `RISING`, `FALLING`, `CHANGE`, `LOW`.

### 🧪 Ejemplo: botón para prender/apagar LED

```cpp
volatile bool estado = false;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), cambiarEstado, FALLING);
}

void loop() {
  digitalWrite(13, estado ? HIGH : LOW);
}

void cambiarEstado() {
  estado = !estado;
}
```

---

## 4. Temporizadores e Interrupciones

### 🔸 Alternativa a `delay()`: `millis()` y `micros()`

Permiten medir el tiempo **sin detener el programa**.

### 🔸 Interrupciones por Timer (ej: Timer1)

Generan eventos periódicos automáticos.

---

## 5. Buenas Prácticas

- Las funciones de interrupción (`ISR`) deben ser **muy cortas**.
- Evitar usar `delay()`, `Serial.print()`, o funciones que bloqueen.
- Utilizar variables `volatile` para comunicación entre ISR y `loop()`.
- Sincronizar con flags o variables compartidas.

---

## 6. Ejercicio Práctico

Simular en **Tinkercad** un sistema que:

- Encienda un LED al presionar un botón mediante **interrupción externa**.
- Parpadee un LED de forma periódica usando **temporizador sin delay()**.

---

## ✅ TAREA PRÁCTICA

1. Usar un **botón físico** conectado a un pin con `INPUT_PULLUP`.
2. Programar una **interrupción externa** para encender/apagar un LED.
3. Usar `millis()` para hacer parpadear un segundo LED cada 2 segundos.
4. Simular el sistema completo en Tinkercad.
5. Subir capturas del circuito y del código.
6. Reflexionar: ¿por qué usar interrupciones en lugar de `delay()`?

---

## 📌 Conclusión

Las interrupciones permiten que nuestros sistemas reaccionen **en tiempo real**, sin necesidad de depender de ciclos constantes de verificación. Usarlas correctamente mejora la eficiencia, reduce el consumo y facilita sistemas multitarea.

