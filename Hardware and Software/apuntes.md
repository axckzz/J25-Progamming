# Apuntes de Desmontaje y Componentes del Ordenador 🖥️🔧

## Programación Inputs y Outputs

### Input (Entrada):
- Potenciómetro 🎛️
- Botón 🔘
- Teclado ⌨️
- Sensor:
  - Fotosensor 🌞
  - Sensor de temperatura 🌡️
  - Sensores químicos:
    - pH 🌡️
    - Partículas volátiles 🌬️
    - Humedad 💧
- Ratón 🖱️
- Cámara 📷
- Micrófono 🎤
- Receptor capacitador 📡
- Giroscopio 📦
- Radiofrecuencia 📡

### Output (Salida):
- Pantalla 📺
- Audio (altavoces) 🔊
- LEDs 💡
- Motores 🛠️
- Bombas 💦
- Ventilador 🌬️
- Vibración 📳

### Input y Output
### Comunicación
- Wifi (internet) 🌐
- Bluetooth 🔵
- Datos móviles (2G, 3G, 4G, 5G) 📱
- LAN (RJ45) 🌐
- Teléfono / Fibra óptica 📞🌐

## Documentación / Apuntes de Torre 🖥️📝

### Componentes:
- Una torre 🖥️
- Documentar el material 📄
- No tiene SSD (Disco duro donde se almacena la información guardada) ❌💾
- Placa base (Motherboard) 🧩
- CPU (está ubicado detrás del disipador) 💽
  - Disipador:
    - Ventilador 🌬️
    - Pieza metálica 🔩
    - Pasta térmica 💧
- Fuente de alimentación (Power supply) ⚡
- Poder:
  - Bobina 🔄
  - Diodo 🔌
  - Condensador 🛢️
  - Disipador 🌬️
  - Microcontrolador 💻
- Intel 🏢
- AMD Radeon 🖥️
  - Ryzen 🔥
- BIOS (Basic Input Output System) 🧠
  - No desmontar 🚫🔧
  - Tiene su pequeño disipador 🌬️
  - Interfaz 🌐
- Firmware 🔧
  - Software empotrado en un hardware con el propósito de manejar ese hardware concreto 🛠️

### Tipos de Memorias
- Primaria: directamente accesible por la CPU ⚙️
  - RAM: Random Access Memory 💾
  - ROM: Read Only Memory 📀
- Secundaria: no directamente accesible por la CPU ❌⚙️
  - HDD: Hard Disk Drive 💽
  - SSD: Solid State Drive 💾

### Distribución de Lista de Material
- Placa base 🧩
- Fuente de alimentación ⚡
- Memoria RAM 💾
- Conexiones de audio en una torre 🔊🖥️
- Hardware y conectores de un ordenador de torre 🖥️🔌

## Lista de Material y Explicación

### Placa Base 🧩
La placa base es uno de los componentes más importantes a la hora de montar un ordenador. A esta pieza se conecta la memoria RAM, la CPU, los discos duros y la fuente de alimentación, elementos esenciales para que un ordenador funcione a pleno rendimiento.

Una placa base es un circuito impreso al que se conectan el resto de los componentes de un ordenador para que estos funcionen de manera óptima. También se las conoce con el nombre de placas madre.

![download](https://hackmd.io/_uploads/Sknvju9XA.jpg)


### Partes de una Placa Base
- **Zócalo (Socket)**: Es donde se encastra la CPU correspondiente. Es muy importante que ambos compartan la nomenclatura y sean compatibles.
- **Chipset**: Conjunto de circuitos electrónicos que gestionan las transferencias de datos entre los distintos componentes del ordenador. Se divide en dos secciones: northbridge y southbridge.
- **Conectores de Alimentación**: Proporcionan energía eléctrica a los distintos componentes de la placa base atendiendo siempre a sus distintos voltajes.
- **Ranuras o Slots de Memoria RAM**: Donde se conectan las memorias de acceso aleatorio (RAM).
- **VRM**: Regula la velocidad de las ejecuciones en la CPU y el resto de periféricos.
- **Ranuras o Slots de Expansión**: Donde se pueden conectar tarjetas de expansión para aumentar el rendimiento del ordenador (e.g., PCI-Express 0 x16 para GPUs).
- **Conectores de Entrada y Salida**: Puertos USB, entradas VGA, DVI, HDMI, DisplayPort, conectores Serial ATA (SATA), M.2 para NVMe, y salidas de audio jack.
- **BIOS**: Programa de arranque que ajusta parámetros básicos del PC, actualmente llamado UEFI.
- **Tarjetas de Sonido y Red**: Procesan el sonido y la conexión a internet.


### Conectores SATA
Conectan los discos duros tanto mecánicos como sólidos (SDDs).

### Conectores M.2
Permiten enlazar únicamente unidades de almacenamiento sin sobrecargar los slots de expansión.

### CPU 💽
Una CPU o unidad central de procesamiento es un componente de hardware y la unidad computacional central de un servidor. Convierte datos en señales digitales y realiza operaciones matemáticas en ellos.

#### Microprocesadores
Combinan toda la CPU en un solo chip de CI, lo que hizo que las computadoras fueran más accesibles. Inicialmente, las CPU podían manejar de 16 a 32 bits de datos a la vez, y las CPU de 64 bits surgieron a principios de la década del 2000.

### Pasta Térmica en la CPU 💧
Crea una capa entre el procesador y el disipador de calor, mejorando la conductividad térmica y evitando el sobrecalentamiento del dispositivo.


![450_1000](https://hackmd.io/_uploads/Bkm25dcmC.jpg)




### Fuente de Alimentación ⚡
- **¿Qué es?**: Componente esencial que convierte la corriente de la red eléctrica en una forma de energía adecuada para los componentes de un dispositivo electrónico.
- **Partes que la Componen**: Bobina 🔄, diodo 🔌, condensador 🛢️, disipador 🌬️, microcontrolador 💻.


![fuente-de-poder](https://hackmd.io/_uploads/Hkcv5ucmR.png)




### Memoria RAM 💾
- **¿Qué es?**: Memoria principal de un dispositivo donde se almacenan temporalmente los datos de los programas en uso. Sus siglas significan Random Access Memory.
- **¿Para qué sirve?**: Permite ejecutar acciones rápidamente, almacenando las instrucciones de la CPU o los datos que las aplicaciones necesitan constantemente.

![download](https://hackmd.io/_uploads/Hk7R5O9XC.jpg)


#### Tipos de RAM
- **DRAM**: Necesita ser refrescada periódicamente.
- **SRAM**: No requiere actualizaciones periódicas, más rápida y costosa.
- **SDRAM**: Sincroniza sus operaciones con el reloj del sistema.
- **DDR SDRAM**: Transfiere datos dos veces por ciclo de reloj.
- **DDR2, DDR3, DDR4, DDR5 SDRAM**: Mejoras sucesivas en velocidad y eficiencia energética.

### Disco Duro 💽
El disco duro es donde se almacenan los datos de una computadora. Los SSDs han surgido como una alternativa más rápida y compacta.

![download](https://hackmd.io/_uploads/rJAJjuqmR.jpg)

