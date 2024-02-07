# **💯 Documentación del Proyecto Final!**
## **📑 Descripción**
- Este proyecto consiste en un sistema interactivo controlado a través de comandos recibidos por el puerto serial. El código implementa diversas funcionalidades, como reproducir música, escribir en código morse y realizar una receta de tostadas con huevo y aguacate. El proyecto está estructurado en tres archivos de encabezado (*morse.h*, *song.h*, *recepee.h*) y un archivo principal (main.ino).

---

### **🎃 Archivo main.ino**!
---
**1️⃣Funciones Principales!**

1. **setup()**: Configura la comunicación serial a 9600 baudios.
2. **loop()**: Ejecuta continuamente la función readSerial().

**2️⃣Funciones Secundarias!**
1. readSerial()
-- **Descripción:** Lee la entrada del puerto serial, imprime el string y su longitud, y llama a la función decide() con el comando recibido.

- Parámetros: Ninguno.
- Retorno: Ninguno.
2. decide(String command)
-- **Descripción** Decide qué acción realizar según el comando recibido.

- command: Comando recibido por el puerto serial.
- Retorno: Ninguno.
3. outputMorse(String word)
-- **Descripción:** Convierte una palabra a código morse y la imprime en el puerto serial.

- word: Palabra a convertir a morse.
- Retorno: Ninguno.
4. cookToasts()
-- **Descripción:** Cocina tostadas con huevo y aguacate, imprime el proceso en el puerto serial y actualiza las cantidades de ingredientes.
- Parámetros: Ninguno.
- Retorno: Ninguno.
5. decide2(String input)
-- **Descripción:** Decide acciones adicionales según el comando recibido.
Parámetros:
- input: Comando adicional recibido por el puerto serial.
- Retorno: Ninguno.
6. playMusic()
-- **Descripción:** Reproduce una melodía predefinida utilizando un zumbador conectado al pin 11.
- Parámetros: Ninguno.
- Retorno: Ninguno.
---

### **​🌍​Variables Globales**
1. int eggs: Cantidad de huevos.
2. int toasts: Cantidad de tostadas.
3. bool oil: Indicador de disponibilidad de aceite.
4. double avocado: Cantidad de aguacate.
5. int onions: Cantidad de cebollas.
7. int tempo: Tempo de la melodía.
8. int buzzer: Pin del zumbador.
9. int melody[]: Arreglo que define la melodía a reproducir.
10. int notes: Número de notas en la melodía.
11. int wholenote: Duración de una nota completa.
12. int divider: Divisor para calcular la duración de cada nota.
13. int noteDuration: Duración de la nota actual.
14. bool stopTheMusic: Bandera para detener la reproducción de música.
---

### **🐒Archivo morse.h**
Este archivo contiene la declaración de la función outputMorse utilizada para convertir palabras a código morse.

### **🎼​Archivo song.h**
Este archivo incluye la definición de la melodía utilizada en la función playMusic.

### **🧾Archivo recepee.h**
Este archivo no se proporcionó, pero asumimos que contiene la declaración de funciones relacionadas con la receta de cocina.

---
## **​⁉️​Errores Frequentes!**

Uno de los grandes errores que tuve en este proyecto fue el de poner 4 setups y 4 loops al final lo acabe arreglando.

Tambien un error que solucione fue que puse cooking 1 cuando tenia que poner cooktoasts en el decide.


![Captura de pantalla 2024-02-07 233915](https://github.com/axckzz/J25-Progamming/assets/144990882/b7b77096-8248-4c40-a779-19d05123178a)

---
## ​​🏆​**Conclusión final!**
Me a parecido muy interesante el hecho de su capacidad para reproducir música, traducir palabras a código morse y ejecutar una receta de cocina. Y lo he disfrutado haciendolo que es lo importante.

![yXMxVz](https://github.com/axckzz/J25-Progamming/assets/144990882/4564183f-8e8e-429e-afde-f447066af9bd)


