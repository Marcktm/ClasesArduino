# 🔊 Unidad 8 - Aplicaciones Avanzadas con Sensores, Interrupciones y Sonidos

## 🎯 Objetivo

Explorar la combinación de sensores, sonidos e interrupciones para diseñar proyectos interactivos avanzados en entornos educativos. Esta unidad promueve la integración de múltiples componentes para crear respuestas automáticas, visuales o sonoras.

---

## 1. Sensores con Interrupciones

- Utilizar **interrupciones** permite reaccionar a eventos externos sin bloquear el programa principal.
- Ideal para sistemas de **alarma** o **respuesta inmediata**.

### 🧪 Ejemplo: Alarma con sensor de movimiento

> Al detectar movimiento con un sensor PIR, se activa una alarma sonora o luminosa sin usar `delay()`.

---

## 2. Sonidos con Arduino

- Los **buzzers activos** generan sonido al recibir energía.
- Los **buzzers pasivos** requieren señales de frecuencia específicas para emitir tonos (usados con `tone()`).

### 🧪 Ejemplo: Reproducir una melodía

```cpp
void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  tone(8, 440); // Tono La4
  delay(500);
  noTone(8);
  delay(500);
}
```

---

## 3. Sonidos en Programación por Bloques

- En **MakeCode** o **Scratch**, podés usar bloques de sonido fácilmente.
- Ideal para usar con **micro:bit**, **Spike Prime**, o placas con parlantes integrados.

### 🧪 Ejemplo: micro:bit que suena al detectar movimiento

```text
cuando el acelerómetro detecta movimiento:
    reproducir sonido "giggle"
```

---

## 4. Proyectos Integrados

### 🔸 Proyecto 1: Alarma reactiva
- Sensor PIR + LED + buzzer.
- Se activa al detectar movimiento.

### 🔸 Proyecto 2: Piano digital
- Botones conectados a buzzer.
- Cada botón emite una nota.

### 🔸 Proyecto 3: Luces reactivas al sonido
- Sensor de sonido activa tiras LED o luces de colores.

---

## ✅ TAREA PRÁCTICA

1. Crear un sistema que use al menos **2 sensores** y produzca una **respuesta sonora o visual**.
2. Documentar:
   - Capturas del circuito en Tinkercad o Scratch/MakeCode.
   - Código en bloques o Arduino C.
   - Simulación o video en funcionamiento.
3. Reflexión final:
   - ¿Cómo se complementaron los sensores y salidas?
   - ¿Qué nuevas ideas se te ocurrieron para usar sonido o luces en tus proyectos?

---

## 📌 Conclusión

El uso conjunto de **sonido, sensores e interrupciones** amplía las posibilidades creativas y funcionales de los proyectos. Permite responder a estímulos del entorno en tiempo real, haciendo que los sistemas sean más dinámicos, atractivos y útiles en la enseñanza de electrónica y programación.
