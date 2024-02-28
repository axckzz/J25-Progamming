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

## Output of System.out.println() and System.out.print()​👀​
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


## Variable declaration
- Int: Numbers without decimals
- Double: Numbers with decimals
- String: Words or characters
  
```java
int sum;              // Declare a variable named "sum" of the type "int" for storing an integer.
                      // Terminate the statement with a semi-colon.
double average;       // Declare a variable named "average" of the type "double" for storing a real number.
int number1, number2; // Declare 2 "int" variables named "number1" and "number2", separated by a comma.
int height = 20;      // Declare an "int" variable, and assign an initial value.
String msg = "Hello"; // Declare a "String" variable, and assign an initial value.
```
![IDoDeclareMichaelScottGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/9542ad77-edfa-42e7-863b-df651e0f8af5)

## Basic Arithmetic Operations
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/5bcc08c7-c1b4-4116-9a6a-611a52730264)
## Comparison Operators
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/73a12f54-d7a8-47a1-b90a-fc955dfa77cc)
## Combining Simple Conditions
![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/1dd8fb3d-2bb8-4705-94db-7a7ce88039b7)

## The Loop Stirckes Back
Suppose that you want to add all the integers from 1 to 1000. You could use a so-called loop in your program to perform a repetitive task, that is what the computer is good at.
  
```java
public class RunningNumberSum {  // Save as "RunningNumberSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 1;      // Store the lowerbound
      final int UPPERBOUND = 1000;   // Store the upperbound
      int sum = 0;   // Declare an int variable "sum" to accumulate the numbers
                     // Set the initial sum to 0
      // Use a while-loop to repeatedly sum from the lowerbound to the upperbound
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         sum = sum + number;  // Accumulate number into sum
         ++number;            // increment number
      }
      // Print the result
      System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
```

![OurGreatestEnemyComesBack](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/c7494db0-384b-4648-94c2-832e00c3845b)

### How it works?
final int LOWERBOUND = 1;


final int UPPERBOUND = 1000;


Declare two int constants to hold the upperbound and lowerbound, respectively.

int sum = 0;


Declares an int variable to hold the sum. This variable will be used to accumulate over the steps in the repetitive loop, and thus initialized to 0.
```java
int number = LOWERBOUND;
while (number <= UPPERBOUND) {
   sum = sum + number;
   ++number;
}
```
![Construct_WhileLoop](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/4cce2b48-fda2-4659-9e90-ba401adbdc33)
## OOP
### What is OOP?
**Object orientated programming**: An object is a compound of functions/subprograms/methods and data/variables that can be contained. Object-oriented programming is about creating objects that contain both data and methods. 
### Basic Terminology
![Captura de pantalla 2024-02-19 094519](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/a6d6abb0-ba9d-49c9-9c5a-af5285e0cc93)
### Example
![Captura de pantalla 2024-02-19 090951](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/6205a55d-5231-4558-b557-273bda4e798c)


The class student can have different instances, but what are instances? Instances are for example in the case of the class "student", a particular student (ex: Quim, Albert, Julia,...). Each of this instances have different atributtes.


**Variables** are the characteristics of the object, and **methods** are the things that the object can do. 


### Problems with OOP
**Dependencies**, when an object calls another object, it depends on which one it is called. This can bring problems if you want to do things simultaniously or other things.


![ishowspeed-ishowspeed-ballon-d'or](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/d026031e-369c-4cae-b59b-6f80b2543b55)

## More Help?
- [W3Schools](https://www.w3schools.com/java/default.asp)
- [Introduction](https://www3.ntu.edu.sg/home/ehchua/programming/java/J1a_Introduction.html)
- [OOP Basics](https://www3.ntu.edu.sg/home/ehchua/programming/java/J3a_OOPBasics.html)


![FernandoAlonsoF1GIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/4f11d731-d97e-4d7a-b7e8-d57533edd35a)
