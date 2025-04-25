# 🎚️ Unidad 5 - Manejo de Señales Analógicas (con Bloques)

## 🎯 Objetivo

- Comprender cómo los microcontroladores pueden leer y generar señales analógicas.
- Aplicar estos conceptos utilizando programación por bloques en Tinkercad.

---

## 1. Introducción a las Señales Analógicas

### 🔸 ¿Qué es una señal analógica?

Una **señal analógica** es una señal continua que puede tener **infinitos valores posibles** dentro de un rango. A diferencia de una señal digital (que es encendido o apagado), la analógica **varía gradualmente**.

📊 *Ejemplo: El voltaje que entrega un potenciómetro varía de 0V a 5V según su posición.*

---

### 🔸 Diferencias entre señales digitales y analógicas

| Característica       | Señal Digital         | Señal Analógica                           |
|----------------------|-----------------------|-------------------------------------------|
| Valores posibles     | 0 o 1 (LOW o HIGH)    | Cualquier valor entre 0 y 1023 (en Arduino) |
| Ejemplo              | Encender/apagar LED   | Controlar el brillo de un LED con potenciómetro |

---

### 🔸 Muestreo y resolución

- **Muestreo**: frecuencia con la que se toma el valor de la señal analógica.
- **Resolución**: cuántos valores distintos puede representar el ADC. En Arduino, es de **10 bits** (0 a 1023).

---

## 2. Lectura de Señales Analógicas - El ADC

### 🔹 ¿Qué es un ADC?

El **ADC (Conversor Analógico-Digital)** convierte señales analógicas (voltajes) en valores numéricos que el microcontrolador puede interpretar.

📌 En Tinkercad, el pin **A0** se usa para leer el valor de un **potenciómetro**.

---

### 🧪 Ejemplo práctico (bloques)

[LINK DE TINKERCAD](https://www.tinkercad.com/things/idxjZ504puV/editel?returnTo=%2Fdashboard%2Fcollections%2F9Th4JMdooGd%2Fcircuits&sharecode=jSWWQ-m40zdSDF2N_PhVNF5bIrrPxwRh-Xqwgo4gNVM)

```text
por siempre:
    establecer variable "valor" a leer valor analógico del pin A0
    escribir en el monitor serie "Valor leído: "
    escribir en el monitor serie variable "valor"
    esperar 500 milisegundos
```

---

## 3. Generación de Señales Analógicas - PWM

### 🔹 ¿Qué es PWM?

**PWM (Modulación por Ancho de Pulso)** simula una señal analógica usando una señal digital encendida/apagada rápidamente.

🕹️ *Ejemplo*: variar el **brillo de un LED** según el valor leído de un potenciómetro.

---

### 🧪 Ejemplo práctico (bloques)

[LINK TINKERCAD](https://www.tinkercad.com/things/eouU8vep38B/editel?sharecode=ZqScrUCsDd1g0v7epqKwdn6sq6JW857nXXmFYy8qLe0)

```text
por siempre:
    establecer variable "valor" a leer valor analógico del pin A0
    escribir valor analógico en pin 9 con variable "valor"
```

---

## 4. Señales Analógicas en Programación por Bloques

- **Lectura**: `leer valor analógico del pin A0`
- **Escritura**: `escribir valor analógico en pin X`

🎮 También se pueden controlar **servomotores**, donde el ángulo depende del valor leído.

---

### 🧪 Ejemplo extra: Servomotor controlado por potenciómetro

```text
por siempre:
    establecer variable "valor" a leer valor analógico del pin A0
    establecer ángulo del servo conectado al pin 10 a variable "valor"
```

---

## ✅ TAREA PRÁCTICA

1. Crear un circuito con:
   - 1 potenciómetro conectado a **A0**
   - 1 LED en **pin 9** (PWM)
2. Usar bloques para controlar el brillo según el potenciómetro.
3. Reemplazar el LED por un **servomotor** y variar su ángulo.
4. Subir capturas del circuito, bloques y simulación.
5. Escribir una **reflexión**: ¿qué diferencias hay entre control digital (encender/apagar) y analógico (variación gradual)?

---

## 📌 Conclusión

El manejo de señales analógicas permite **interpretar y responder al mundo real** con mayor precisión. El uso de potenciómetros, sensores y actuadores como LEDs o servos lo hace ideal para proyectos educativos e interactivos.
