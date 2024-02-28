# 📕Second Term Java📕
## 🥸☝Vocabulary and important concepts🥸☝
- **Class**: Define tipo de objetos
- **Static**: Siempre esta en memoria  
- **Public**: Es quien puede acceder (public es todo el mundo), private(solo un numero determinado o alguien en espefico puede acceder) 
- **Block**: A block is a group of programming statements enclosed by a pair of braces {}.
- **Case sensitivity**: Case sensitivity means that the programming language distinguishes between uppercase and lowercase letters, treating them as different characters.
- **PC**: Personal computer 
- **Interface**: Comunicarse (as a verb)
- **GUI**: Graphic user interface
- **CLI**: Interfaz de la línea de comandos
- **High-level and low level abstraction**: High level is a very general level of abstraction and low level is a very specific abstraction.
- **Procedural programming**: La programación procedural se centra en la secuencia de instrucciones para resolver problemas, utilizando funciones y control de flujo. El control de flujo se refiere a la gestión de la ejecución de un programa, determinando el orden en que se ejecutan las instrucciones basadas en condiciones y bucles.
- **Class**: Object in java
- **Refactorize**: Cambiar las variables de un código, para que sea más fácil de leer. 
- **OOP**: Object-oriented programming is about creating objects that contain both data and methods.
- **Object**: Un trozo de código que incluye un nombre, una serie de datos y una serie de métodos o funciones o subprogramas a los que podemos llamar. Es una mini librería. 
- **Pointers and nulls**: Java works with pointers. This means that the variables don’t hold “directly” the data that we are looking for. They have the address (the pointer) of where the data is. If there is no address to any part of the virtual memory the value is null. 
- **Public**: Defines that we can access this variable outside of the class and the package. 
- **Final**: means that this value shall not be changed during execution. 


  
![LolFunnyGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/3772ce33-0ce3-48bc-a158-3bec616e08e1)


## Java Program Template
```java
  public class Classname {   // Choose a meaningful Classname. Save as "Classname.java"
   public static void main(String[] args) {  // Entry point of the program
      // Your programming statements here!!!
   }
}
```

## Output via System.out.println() and System.out.print()
```java
public class PrintTest {   // Save as "PrintTest.java"
   public static void main(String[] args) {
      System.out.println("Hello world!");       // Advance the cursor to the beginning of next line after printing
      System.out.println("Hello world again!"); // Advance the cursor to the beginning of next line after printing
      System.out.println();                     // Print an empty line
      System.out.print("Hello world!");         // Cursor stayed after the printed string
      System.out.print("Hello world again!");   // Cursor stayed after the printed string
      System.out.println();                     // Print an empty line
      System.out.print("Hello,");
      System.out.print(" ");                    // Print a space
      System.out.println("world!");
      System.out.println("Hello, world!");
   }
}
```
![ThisLessonIsForYouJamesGIF](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/dba77db1-a32b-44bf-9037-52aad672e6a9)

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
