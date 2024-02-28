# Second Term Java🕸️​
## Important concepts and vocabulary that you have to know!👍🏻​
- **Class**: Define tipo de objetos.
- **Static**: Siempre esta en memoria.  
- **Public**: Todo el mundo puede acceder.
- **Block**: Un bloque es un grupo de declaraciones de programación encerradas por un par de llaves {}.
- **Case sensitivity**: La sensibilidad entre mayúsculas y minúsculas significa que el lenguaje de programación distingue entre letras mayúsculas y minúsculas, tratándolas como caracteres diferentes.
- **PC**: Personal computer. 
- **Interface**: Comunicarse.
- **GUI**: Graphic User Interface.
- **CLI**: Interfaz de la línea de comandos.
- **High-level and low level abstraction**: El nivel alto es un nivel de abstracción muy general y el nivel bajo es una abstracción muy específica.
- **Procedural programming**: Se centra en secuencias de instrucciones para la resolución de problemas, el uso de funciones y el flujo de control. El control de procesos se refiere a gestionar la ejecución de un programa y determinar el orden de ejecución de las instrucciones en función de condiciones y bucles.
- **Class**: Objeto en Java.
- **Refactorize**: Cambiar las variables de un código, para que sea más fácil de leer. 
- **OOP**: Object-oriented programming se trata de crear objetos que contengan tanto datos como métodos.
- **Object**: Un fragmento de código incluye un nombre, una serie de datos y una serie de métodos o funciones o pequeños programas que podemos llamar. 
- **Pointers and nulls**: Java trabaja con punteros. Esto significa que las variables no contienen “directamente” los datos que buscamos. Tienen la dirección (el puntero) de donde están los datos. Si no hay una dirección para ninguna parte de la memoria virtual, el valor es nulo.
- **Final**: Significa que este valor no se cambiará durante la ejecución.


  
![giphy](https://github.com/axckzz/J25-Progamming/assets/144990882/86b8b31e-a045-4bdb-9dc4-24a6a75cf7cd)



### Java Programs Template💡​
```java
  public class YourClassName {
    public static void main(String[] args) {
        // Your program logic goes here

        // Example: Printing a message
        System.out.println("Hello, World!");
    }
}
```

### Output of System.out.println() and System.out.print()​👀​
```java
public class OutputExample {
    public static void main(String[] args) {
        // Using println for new line after each statement
        System.out.println("Hello, World!");
        System.out.println("This is an example of using System.out.println()");
        System.out.println(); // Print an empty line

        // Using print to keep the cursor on the same line
        System.out.print("Hello, ");
        System.out.print("world!");
        System.out.println(); // Print an empty line

        // Combining strings in a single println
        System.out.println("Java Programming " + "is fun!");
    }
}
```
![giphy](https://github.com/axckzz/J25-Progamming/assets/144990882/0305672f-aaf2-4a4f-aafc-3a6af428633e)


# Programación Orientada a Objetos (OOP)

## Clases y Objetos
- **Clase:** Plantilla que define la estructura y comportamiento.
- **Objeto:** Instancia de una clase con atributos y métodos.

## Encapsulación
- Agrupa datos y métodos en una unidad (clase).
- Oculta detalles internos, revelando solo funcionalidades necesarias.

## Herencia
- Subclase hereda propiedades y comportamientos de una superclase.
- Fomenta la reutilización de código y establece jerarquías.

## Polimorfismo
- Objetos de diferentes clases se tratan como objetos de una clase base.
- Incluye sobrecarga y sobreescritura de métodos.

## Abstracción
- Simplifica sistemas modelando propiedades y comportamientos esenciales.
- Enfoca en "qué" hace un objeto en lugar de "cómo".

## Asociación
- Representa relaciones entre clases (uno a uno, uno a muchos, muchos a muchos).

## Composición
- Una clase contiene un objeto de otra clase.
- Representa una relación de "tiene un".

## Agregación
- Relación especial de asociación (todo-parte).

## Paso de Mensajes
- Objetos se comunican enviando mensajes.
- Un mensaje activa un método en el objeto receptor.

## Interfaces
- Define contrato con un conjunto de métodos.
- Permite herencia múltiple y reduce dependencias.

