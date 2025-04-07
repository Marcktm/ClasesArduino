
# Unidad 2 - Programación en C vs Programación en Bloques

##  Objetivo

Comprender las diferencias y similitudes entre la programación en lenguaje C y la programación por bloques. Aplicar ambos enfoques para resolver un mismo problema básico: encender y apagar un LED.

---

##  Contenidos

### 🔹 Introducción al Lenguaje C en Arduino

El lenguaje C/C++ es utilizado en el entorno Arduino para programar microcontroladores de forma textual. Permite un control más detallado del hardware, aunque requiere aprender su sintaxis.

```c
void setup() {
  pinMode(13, OUTPUT); // Configura el pin como salida
}

void loop() {
  digitalWrite(13, HIGH); // Enciende el LED
  delay(1000);            // Espera 1 segundo
  digitalWrite(13, LOW);  // Apaga el LED
  delay(1000);            // Espera 1 segundo
}
```

---

### 🔹 Sintaxis básica del lenguaje C

- **Variables**: declaración y uso de datos (`int`, `float`, `bool`, etc.)
- **Estructuras de control**: `if`, `else`, `for`, `while`
- **Funciones**: bloques de código reutilizables (`setup()`, `loop()`, funciones propias)

---

### 🔹 Introducción a Tinkercad y MakeCode

- **Tinkercad Circuits**: simulador web de circuitos, ideal para Arduino. Permite usar bloques de programación tipo Scratch y también ver el código C generado.
- **MakeCode**: entorno online de Microsoft para programar micro:bit con bloques o JavaScript.

---

### 🔹 Explicación de los bloques principales

| Tipo de bloque       | Descripción                                    |
|----------------------|------------------------------------------------|
| **Control**          | "por siempre", "esperar", "si... entonces..."  |
| **Entrada/Salida**   | Encender o apagar un pin, leer sensor          |
| **Bucles**           | Repetir acciones una cantidad de veces         |
| **Condicionales**    | Evaluar condiciones para tomar decisiones      |

---

## ⚖️ Comparación: C vs Bloques

| Característica               | Programación en C                        | Programación en Bloques           |
|-----------------------------|------------------------------------------|-----------------------------------|
| ✅ Precisión y control       | Alto                                     | Medio                             |
| 🧠 Curva de aprendizaje      | Más compleja                             | Muy accesible                     |
| 👁️ Visualización del flujo  | No visual                                | Visual, intuitiva                 |
| 🧩 Modularidad               | Alta (funciones, librerías)              | Media (depende del entorno)       |
| 🔧 Depuración (debugging)   | Requiere analizar código                 | Más simple en simulador visual    |
| 💡 Ideal para               | Proyectos técnicos o avanzados           | Educación inicial, lógica básica  |

---

## 🔁 Ejercicio práctico

[LINK RESUELTO](https://www.tinkercad.com/things/a5b6ZmKXfj2/editel?returnTo=%2Fdashboard%2Fcollections%2F9Th4JMdooGd%2Fcircuits&sharecode=Ewffj7LZRPKxSyDBEm4lr_XWyI8OPd_GRZdSOkQaC4Y)

> Simular el funcionamiento de un semáforo con 3 LED's con ambas metodologías.

### ✅ Con bloques (Tinkercad)

![Bloques Tinkercad](/img/bloquesSemaforo.png)

```
al iniciar:
  configurar pin 2,3 y 4 como salida

por siempre:
  establecer pin 4 en ALTO
  establecer pin 2 en BAJO
  esperar 5 segundos
  establecer pin 3 en ALTO
  establecer pin 4 en BAJO
  esperar 1 segundo
  establecer pin 2 en ALTO
  establecer pin 3 en BAJO
  esperar 3 segundos
```

### ✅ En C (Arduino IDE) - Recordar que  lo genera TINKERCAD

```c
// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
}
```

## Circuito ARMADO

![Circuito semaforo](/img/semaforo.png)

---

# ✅ TAREA PRÁCTICA

1. Crear un programa en **bloques** (Tinkercad) para controlar un **motor de corriente continua (DC)** conectado al pin digital 9.
2. Hacer que el motor:
   - Gire durante **5 segundos**.
   - Se detenga durante **2 segundos**.
   - Repita el ciclo de forma indefinida.
3. Asegurarse de incluir un **transistor NPN (ej: 2N2222)** para controlar el motor desde Arduino.
4. Usar una **resistencia de 220 ohms** entre el pin digital 9 y la base del transistor.
5. Agregar un **diodo en paralelo con el motor** (ej: 1N4007) para proteger el circuito de corriente inversa.
6. Fuente recomendada para el motor: **3V a 6V** (usar fuente externa si el motor requiere más corriente que la que entrega el pin de Arduino).
7. Documentar con **capturas de pantalla del circuito**, **bloques utilizados** y la **simulación en funcionamiento**.
8. Agregar una breve **reflexión final**: ¿Cómo interactúan Arduino, el transistor y el motor? ¿Qué cuidados eléctricos tuviste en cuenta?
---

## ✍️ Resolución y reflexión

**Escribí tu reflexión acá:**

> ¿Qué aprendiste con este ejercicio del semáforo?  
> ¿Cuál te resultó más intuitivo: bloques o C?  
> ¿Qué ventajas encontraste en cada uno?

---
