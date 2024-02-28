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



# Programación Orientada a Objetos (OOP)​🥶​

## Clases y Objetos
- **Clase:** Plantilla que define la estructura y comportamiento.
- **Objeto:** Instancia de una clase con atributos y métodos.

  ![image](https://github.com/axckzz/J25-Progamming/assets/144990882/e854e0d4-d561-45e2-8d19-b015fe3aff6d)


## Herencia
- Subclase hereda propiedades y comportamientos de una superclase.
- Fomenta la reutilización de código y establece jerarquías.

  ![image](https://github.com/axckzz/J25-Progamming/assets/144990882/c1ae31b3-9e3f-44c0-afc7-1815d3718934)


## Abstracción
- Simplifica sistemas modelando propiedades y comportamientos esenciales.
- Enfoca en "qué" hace un objeto en lugar de "cómo".

  ![image](https://github.com/axckzz/J25-Progamming/assets/144990882/d26385b8-5845-4393-a632-4e6421592004)


## Asociación
- Representa relaciones entre clases (uno a uno, uno a muchos, muchos a muchos).

  ![image](https://github.com/axckzz/J25-Progamming/assets/144990882/83c02f6e-58d9-4fcc-8688-966e50752a85)


## Composición
- Una clase contiene un objeto de otra clase.
- Representa una relación de "tiene un".

  ![image](https://github.com/axckzz/J25-Progamming/assets/144990882/82e5e546-f017-4d2e-8e5e-af083601566c)


## Agregación
- Relación especial de asociación (todo-parte).


## Paso de Mensajes
- Objetos se comunican enviando mensajes.
- Un mensaje activa un método en el objeto receptor.

## Interfaces
- Define contrato con un conjunto de métodos.
- Permite herencia múltiple y reduce dependencias.

![image](https://github.com/axckzz/J25-Progamming/assets/144990882/202e7c60-e4d0-4853-b37f-210e515e086b)


# Problemas Comunes en OOP❓​

1. **Herencia Excesiva:** Jerarquías profundas.
2. **Acoplamiento Fuerte:** Dependencias intensas.
3. **Fragilidad:** Cambios rompen código.
4. **Rigidez:** Dificultad en cambios.
5. **Mal Uso de Herencia:** Sustituible por composición.
6. **Desacoplamiento Insuficiente:** Conexiones fuertes.
7. **Problemas de Identidad:** Confusión de igualdad.
8. **Dificultad en Reutilización:** Componentes no diseñados para reutilización.


![giphy](https://github.com/axckzz/J25-Progamming/assets/144990882/737e13ba-093a-49c4-9ed9-84b9f5f57f23)



