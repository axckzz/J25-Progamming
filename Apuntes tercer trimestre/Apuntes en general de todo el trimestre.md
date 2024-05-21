# Apuntes del Tercer Trimestre 📚

## Modificadores de Acceso 🔒

- **Private**: Solo esa clase puede acceder.
- **Public**: Todas las partes del código pueden acceder.
- **Default** y **Protected**: Otros modificadores de acceso, no se usan mucho.

## Instanciación de Objetos 🛠️

```java
Circle circle1 = new Circle();
```

- **Circle**: Tipo de objeto.
- **circle1**: Identificador del objeto (nombre).
- **new**: Palabra clave.
- **Circle**: Constructor (siempre el mismo nombre que el tipo).

## Métodos: Explícito vs Implícito 📜

- **Explícito**: Directamente.
- **Implícito**: Indirectamente.

### Pregunta para el Examen ✍️
- **Diferencia entre estático y dinámico**:
  - **Método estático**: Variable definida en la clase, no en las instancias, solo hay una y siempre está en memoria.
  - **Método dinámico**: Diferente para cada instancia.

## Plain Old Java Object (POJO) 📘

### Ejemplo de Código:

```java
Book libro2 = new Book("HP PF");
Book libro = new Book("Don Quixote", "Cervantes", 680, "89...");
```

### Contextos:

- **Library Context**
  ```java
  String title;
  String author;
  String ISBN;
  String genre;
  boolean lended;
  Lending[] lendingHistory;
  Library location;
  ```

- **Bookstore Context**
  ```java
  String title;
  String author;
  String ISBN;
  String genre;
  double price;
  boolean promotion;
  String section;
  ```

- **Minecraft Context**
  ```java
  Point position; // Point es una clase para almacenar una posición X, Y, Z, y la rotación.
  String title;
  String content;
  MinecraftUser author;
  int pages;
  ```

- **Car in GTA**
  ```java
  String plate;
  String model;
  Point place;
  int spawnRate;
  long value;
  int healthPoints;
  ```

### Otros Contextos:

- **Car Workshop**
  ```java
  String plate;
  Client owner;
  String problems;
  String brand;
  String model;
  String dateOfArrival;
  ```

## POO (Programación Orientada a Objetos) 🔄

### Lenguajes:

- **Java**
- **C++**
- **Encapsulación**
- **Javascript**
- **Python**
- **Processing**

## Tipos de Composición 🏗️

- **Dependencia (Dependency)**: Clase A usa B (`Math.random()`).
- **Agregación (Aggregation)**: Clase A tiene B.
- **Herencia (Inheritance)**: Clase A es B.

## Relaciones Numéricas 🔢

- **1**: uno.
- **0**: cero.
- **"*"**: muchos.

## Esquema de Von Neumann

![download](https://hackmd.io/_uploads/r1KuGY9mC.png)

## Tipos de Computadoras 💻

- Portátil.
- Torre.
- Móvil.
- Smartwatch.
- Calculadora.
- Consolas.
- Tele.
- Aire acondicionado.
- Electrodomésticos.
- Router.

## Recursos de un Ordenador 🖥️

- **Capacidad de Procesado**
  - **CPU** (Central Processing Unit)
  - **GPU** (Graphic Processing Unit)
- **Memoria**: Primaria y secundaria.
- **Ancho de Banda**: Velocidad de comunicación.

## Representación Binaria 🧮

### Conversión a Binario

1. **137 / 2 = 68** (sobra 1)
2. **68 / 2 = 34** (sobra 0)
3. **34 / 2 = 17** (sobra 0)
4. **17 / 2 = 8** (sobra 1)
5. **8 / 2 = 4** (sobra 0)
6. **4 / 2 = 2** (sobra 0)
7. **2 / 2 = 1** (sobra 0)
8. **1 / 2 = 0** (sobra 1)

**Resultado**: 10001001

### Bits y Bytes

- **1 bit**: Núcleo de información con dos posibles valores.
- **8 bits**: 1 byte (B).
- **1 Kbyte (KB)**: 1024 bytes (2^10).
- **1 Mbyte (MB)**: 1024 KB.
- **1 GByte (GB)**: 1024 MB.
- **1 TByte (TB)**: 1024 GB.

### Ejercicios de Conversión

- **2 3 8** -> Binario.
- **1 1 1 1** -> Binario.
- **1 9 8** -> Binario.
- **7 1 1** -> Binario.

### Ejemplo

- **1101 0110**:
  - Octal: 326.
  - Decimal: 214.
  - Hexadecimal: D6.

### Ventajas del Sistema Binario ⚙️

- Fácil hacer circuitos electrónicos binarios.
- Operaciones aritméticas son largas pero sencillas.
- Números en binario son largos y dificultan su uso por humanos.

### Bases de Numeración

- **Decimal (Base 10)**: Ej. 1000.
- **Binario (Base 2)**: Ej. 1000.
- **Octal (Base 8)**: Ej. 12.
- **Hexadecimal (Base 16)**: Ej. A.

## Tabla de Hexadecimal, Decimal, Binario y Octal

![Captura de pantalla 2024-05-21 222703](https://hackmd.io/_uploads/HJXnmF9mR.png)

## Data Types

### Defining Data Types

- The Arduino environment is really just C++ with library support and built-in assumptions about the target environment to simplify the coding process. C++ defines a number of different data types; here we'll talk only about those used in Arduino with an emphasis on traps awaiting the unwary Arduino programmer.

- Below is a list of the data types commonly seen in Arduino, with the memory size of each in parentheses after the type name. Note: signed variables allow both positive and negative numbers, while unsigned variables allow only positive values.



* boolean (8 bit) - simple logical true/false
* byte (8 bit) - unsigned number from 0-255
* char (8 bit) - signed number from -128 to 127. The compiler will attempt to interpret this data type as a character in some circumstances, which may yield unexpected results
* unsigned char (8 bit) - same as 'byte'; if this is what you're after, you should use 'byte' instead, for reasons of clarity
* word (16 bit) - unsigned number from 0-65535
* unsigned int (16 bit)- the same as 'word'. Use 'word' instead for clarity and brevity
* int (16 bit) - signed number from -32768 to 32767. This is most commonly what you see used for general purpose variables in Arduino example code provided with the IDE
* unsigned long (32 bit) - unsigned number from 0-4,294,967,295. The most common usage of this is to store the result of the millis() function, which returns the number of milliseconds the current code has been running
* long (32 bit) - signed number from -2,147,483,648 to 2,147,483,647
* float (32 bit) - signed number from -3.4028235E38 to 3.4028235E38. Floating point on the Arduino is not native; the compiler has to jump through hoops to make it work. If you can avoid it, you should. We'll touch on this later.

(https://learn.sparkfun.com/tutorials/data-types-in-arduino/defining-data-types)

### Representación de Números Grandes

- Con bits para representar los primeros dígitos y el exponente.

### Caracteres

- **ASCII**: Tabla de los años 70.
- **Unicode**: Más extendido hoy en día.

### Strings

- Arrays de caracteres.

## Redes y Arquitecturas 🌐

### Cliente-Servidor

- **Cliente**: Realiza peticiones.
- **Servidor**: Responde.

### P2P (Peer-to-Peer)

- Conexiones entre iguales, como BitTorrent.
- Sistema de compartir datos: cliente y servidor a la vez.

### Correo Electrónico 📧

- Clientes: Outlook, Mail, Gmail.
- Servidores de correo.

## Protocolo y Navegadores 🌐

- **Protocolo**: Reglas y convenciones en la comunicación (HTTP/HTTPS).
- **Navegadores**: Chrome, Firefox, Safari, Edge, Opera.

### Un Enlace vs. URL

- **Enlace**: Lo que haces clic.
- **URL**: Dirección del recurso (`https://www.youtube.com/watch?v=Oz3aHzm`).

### Traducir Dominios con IPs

- **DNS**: Domain Name Server.

### Internet y WWW

- **Internet**: Red física de ordenadores conectados.
- **WWW**: Recursos almacenados en internet.

### Hardware de Redes

- **Access Point**: Solo Wi-Fi.
- **Switch**: Conectar por cable diferentes ordenadores.

## Desarrollo Web 🌐

### HTML

- Lenguaje de marcado.
  ```html
  <!DOCTYPE HTML>
  <html>
    <head>
      <title>Mi Pagina</title>
    </head>
    <body>
      Mi primera pagina
    </body>
  </html>
  ```

- **Etiquetas HTML**:
  - `<br>`: Salto de línea.
  - `<b>`: Negrita.
  - `<i>`: Cursiva.
  - `<img src>`: Imagen.
  - `<p>`: Párrafo.
  - `<u>`: Subrayado.
  - `<div>`: División de contenido.

## Resultado de mi pagina web!

![Captura de pantalla 2024-05-21 223258](https://hackmd.io/_uploads/Bk0zBFqXC.png)


### CSS

- Cascade Style Sheet: Estilos y formato.

### JavaScript

- Lenguaje de programación.
- Bajamente tipado.

## Arquitectura de Redes 🌐

### Modelo Cliente-Servidor

- Cliente hace peticiones, servidor responde.
- No solo aplicable a internet.

![Ejemplo-diagrama-red-con-Access-Point-Hogar](https://hackmd.io/_uploads/rJR3BY57R.png)


### Modelo P2P

- Descentralizado.
- Ejemplo: BitTorrent.

## Recursos en Informática 💻

- **Procesado**.
- **Memoria**.
- **Ancho de Banda**.

### Peticiones y Respuestas

- **Protocolo**: HTTP/HTTPS.
- **Certificador SSL**: Seguridad en la comunicación.

## Navegadores

- **Chromium**:
  - Chrome.
  - Edge.
  - Opera.
  - Electron (WhatsApp, Discord, Telegram).
- **Firefox y Safari**: No dependen de Chromium.

## Modelos de Empresa 🚀

- **Startup**: Empresas innovadoras (Uber, Airbnb, Google).
- **Puntocom**: Yahoo, eBay, PayPal.

## Desarrollo Web 💻

- **Front End**: Lo que ve el usuario.
- **Back End**: Lo que no ve el usuario.
* **Full Stack**: Desarrollo completo (Front + Back).


**CGI**->Common Gateway Interface

![CGI-1](https://hackmd.io/_uploads/BkafLF5QA.png)

(https://www.educba.com/what-is-common-gateway-interface/)

## Bases de Datos y QA 🗃️

- **DBA (Database Administrator)**: Administrador de bases de datos.
- **QA (Quality Assurance)**: Aseguramiento de calidad, revisa el software.


---

