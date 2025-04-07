# 🧪 Práctico 1 - Parpadeo de un LED en Tinkercad

## 🎯 Objetivo

Aprender a utilizar bloques de programación en Tinkercad para controlar un LED conectado a la placa Arduino UNO. Explorar diferentes frecuencias de parpadeo y sincronización con más de un LED. Introducir opcionalmente el código en lenguaje C.

---

## 📝 Consignas (Programación en Bloques - Tinkercad)

1. **Encender y apagar un LED** conectado al pin 13 utilizando bloques en Tinkercad.
2. Modificar el tiempo de encendido y apagado del LED para que:
   - Parpadee cada **1 segundo**.
   - Parpadee cada **300 milisegundos**.
   - Parpadee con una secuencia: **encendido por 200 ms y apagado por 1000 ms**.
3. Conectar un **segundo LED** al pin 12 y hacer que parpadeen de **forma alternada**.
4. Agregar bloques de comentarios explicando qué hace cada parte del programa.
5. Subir capturas de pantalla del circuito y del código en bloques.

### RESOLUCIÓN

1. 
![parpadeo_led](/img/parapdeo.png)

---

## 🔄 Opcional: Versión en Código (Lenguaje C)

> Solo si el/la docente o el/la estudiante desea profundizar en el código tradicional de Arduino.

### 🧪 Parpadeo clásico de 1 segundo

```c
void setup() {
  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
