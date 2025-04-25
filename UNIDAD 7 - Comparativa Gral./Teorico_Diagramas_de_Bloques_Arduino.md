# 📘 Teórico - Diagramas de Bloques en Programación con Arduino

## ¿Qué es un Diagrama de Bloques?

Un **diagrama de bloques** es una representación **gráfica y lógica** del funcionamiento de un sistema. Se usa para **visualizar el flujo de ejecución**, los componentes y las decisiones que toma el programa.

### 🔍 ¿Para qué sirve?

- Facilita la **comprensión** del algoritmo antes de programar.
- Ayuda a **planificar** cómo funcionará un proyecto.
- Permite **detectar errores lógicos** antes de escribir código.
- Es ideal para **enseñanza**, especialmente cuando se empieza con Arduino o electrónica educativa.

---

## 💡 ¿Cómo se representa un diagrama de bloques?

- **Bloque de Inicio**: marca el comienzo del programa.
- **Bloques de acción**: representan instrucciones como "encender un LED".
- **Bloques de decisión**: usan condiciones como "si el botón está presionado".
- **Bloques de fin**: opcional, para representar la finalización del programa.

---

## 📌 Ejemplo 1: Encender un LED con un botón (diagrama lógico)

```plaintext
   [INICIO]
       ↓
 ¿Botón presionado?
     /   \
   Sí     No
   ↓       ↓
 Encender  Apagar
   LED      LED
     ↓       ↓
    [FIN]   [FIN]
```

---

## 🔧 Código en Arduino C (correspondiente)

```cpp
int ledPin = 13;
int botonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(botonPin, INPUT);
}

void loop() {
  if (digitalRead(botonPin) == HIGH) {
    digitalWrite(ledPin, HIGH); // Enciende
  } else {
    digitalWrite(ledPin, LOW);  // Apaga
  }
}
```

---

## 🔲 Ejemplo en Programación por Bloques (Tinkercad)

```text
por siempre:
    si (leer pin digital 2 == ALTO)
        establecer pin digital 13 en ALTO
    sino
        establecer pin digital 13 en BAJO
```

---

## 📌 Ejemplo 2: Semáforo con LED (sin botón)

```plaintext
   [INICIO]
       ↓
  Encender LED verde
       ↓
   Esperar 5 segundos
       ↓
  Encender LED amarillo
       ↓
   Esperar 2 segundos
       ↓
  Encender LED rojo
       ↓
   Esperar 5 segundos
       ↓
    Repetir (loop)
```

---

## 🔧 Código en Arduino C

```cpp
void setup() {
  pinMode(2, OUTPUT); // LED verde
  pinMode(3, OUTPUT); // LED amarillo
  pinMode(4, OUTPUT); // LED rojo
}

void loop() {
  digitalWrite(2, HIGH);
  delay(5000);
  digitalWrite(2, LOW);

  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(4, LOW);
}
```

---

## ✅ Conclusión

Los **diagramas de bloques** permiten organizar ideas antes de programar. Son especialmente útiles en entornos educativos como Arduino, donde la lógica y el diseño deben ser claros y simples para evitar errores y aprender a estructurar programas correctamente.
