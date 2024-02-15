# :rocket: **Java edition!**
## Ejercicios de Java :+1: 

1. **Area de un triangulo.**
```java
public class Main {

   public static void main(String[] args) {
   double base, altura, area;
  

      base = 3.2;
      altura = 5.2;
      area = base * altura / 2;
     
      
      
      System.out.print("The area is ");  
      System.out.println(area);          

}
}
```
2. **Divisibles de 7**
```java
public class Main {  
   public static void main(String[] args) {
      final int LOWERBOUND = 7;      // Store the lowerbound
      final int UPPERBOUND = 1000;   // Store the upperbound
      int sum = 0;   // Declare an int variable "sum" to accumulate the numbers
                     // Set the initial sum to 0
      // Use a while-loop to repeatedly sum from the lowerbound to the upperbound
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         sum = sum + number;  // Accumulate number into sum
         number = number + 7;            // increment number
      }
      
      System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
```
3. Exercices for homework
```java
// serial.print oneliner
  System.out.print("The sum, difference, product, quotient and remainder of "+ number1 + "and" + number2 + "are" + sum + "," + difference +
  "," + product + "," + quotient + ", and" + remainder); 
```
```java
// sum of two numbers
      public class Main {  
   public static void main(String[] args) {
      double number1 = 99;
      double number2 = 4;
      double sum = 0;
      sum = (number1*31)+(number2*17);
      System.out.println(sum);
   }
}
```
```java
// same but adding another number that is 77
      public class Main {  
   public static void main(String[] args) {
      double number1 = 99;
      double number2 = 4;
      int number3 = 77;
      double sum = 0;
      sum = (number1*31)+(number2*17)+number3;
      System.out.println(sum);
   }
}
```

# Tareas de deberes del (While)!
```java
public class Main {  // Save as "RunningNumberSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 9;      // Store the lowerbound
      final int UPPERBOUND = 899;   // Store the upperbound
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

1. Modify the above program (called RunningNumberSum1) to sum all the numbers from 9 to 899. (Ans: 404514)

```java
public class Main {  // Save as "RunningNumberSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 9;      // Store the lowerbound, el numero mas bajo por el que empieza
      final int UPPERBOUND = 899;   // Store the upperbound, hasta el numelo que llega
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
``The sum from 9 to 899 is 404514``

2. Modify the above program (called RunningNumberOddSum) to sum all the odd numbers between 1 to 1000. (Hint: Change the post-processing statement to "number = number + 2". Ans: 250000)

```java
public class Main {
  public static void main(String[] args) {
     final int LOWERBOUND = 1;      
     final int UPPERBOUND = 1000;  
     int sum = 0;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;  
        number = number + 2;            
     }
 
     System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
  }
}

```
``The sum from 1 to 1000 is 250000``

3. Modify the above program (called RunningNumberMod7Sum) to sum all the numbers between 1 to 1000 that are divisible by 7. (Hint: Modify the initialization statement to begin from 7 and post-processing statement to increment by 7. Ans: 71071)

```java
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 7;    
     final int UPPERBOUND = 1000;  
     int sum = 0;  
                   
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;
        number = number + 7;          
     }
 
     System.out.println("The sum of all the numbers divisible by 7 from 1 to 1000 is: " + sum);
  }
}
```
``The sum of all the numbers divisible by 7 from 1 to 1000 is: 71071``

6. Modify the above program (called RunningNumberSquareSum) to find the sum of the square of all the numbers from 1 to 100, i.e. 1*1 + 2*2 + 3*3 +... (Hint: Modify the sum = sum + number statement. Ans: 338350)

```java
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 100;  
     int sumOfSquares = 0;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
        sumOfSquares = sumOfSquares + (number * number);
        number = number + 1;  
     }
     
 
     System.out.println("The sum of the squares of all the numbers from 1 to 100 is: " + sumOfSquares);
  }
}
```
``The sum of the squares of all the numbers from 1 to 100 is: 338350``


8. Modify the above program (called RunningNumberProduct) to compute the product of all the numbers from 1 to 10(Hint: Use a variable called product instead of sum and initialize product to 1. Modify the sum = sum + number statement to do multiplication on variable product. Ans: 3628800)
   
```java
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 10;  
 
     int product = 1;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
       
        product = product * number;
        number = number + 1;  
     }
     
   
     System.out.println("The product of all the numbers from 1 to 10 is: " + product);
  }
}
```
## **Part 12!**
```java
/*
 * Sum the odd numbers and the even numbers from a lowerbound to an upperbound
 */
public class OddEvenSum {  // Save as "OddEvenSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sumOdd  = 0;    // For accumulating odd numbers, init to 0
      int sumEven = 0;    // For accumulating even numbers, init to 0
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         if (number % 2 == 0) {  // Even
            sumEven += number;   // Same as sumEven = sumEven + number
         } else {                // Odd
            sumOdd += number;    // Same as sumOdd = sumOdd + number
         }
         ++number;  // Next number
      } 
      // Print the result
      System.out.println("The sum of odd numbers from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sumOdd);
      System.out.println("The sum of even numbers from " + LOWERBOUND + " to " + UPPERBOUND + "  is " + sumEven);
      System.out.println("The difference between the two sums is " + (sumOdd - sumEven));
   }
}
```
1. Write a program called ThreeFiveSevenSum to sum all the running integers from 1 and 1000, that are divisible by 3, 5 or 7, but NOT by 15, 21, 35 or 105.

```java
public class Main {
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sumIntegers  = 0;    // For accumulating sum of numbers, init to 0

      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
         if (number % 3 == 0 || number % 5 == 0 || number % 7 == 0) {  
         if (number % 15 != 0 && number % 21 != 0 && number % 35 != 0 && number % 105 != 0){
         sumIntegers += number;       
        }
          
         }
          
          else {               
         }
          
         ++number;  // Next number
      } 
      // Print the result
      System.out.println("The sum of the integers numbers from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sumIntegers);
   }
}
```
2. Write a program called PrintLeapYears to print all the leap years between AD999 and AD2010. Also print the total number of leap years. (Hints: use a int variable called count, which is initialized to zero. Increment the count whenever a leap year is found.)

```java
public class Main {
  public static void main(String[] args) {
     final int limiteInferior = 999;
      final int limiteSuperior = 2010;
      int counter  = 0;    
 
      int number = limiteInferior;
      while (number <= limiteSuperior) {
    
    if ( number % 4 == 0) 
         {
           counter++; 
      System.out.println(number + "AD");
         }
        number++;  // Next number
      } 
      // Print the result
      System.out.println("Total number of leap years " + counter);
 
   }
  
}
```
---


## **Conceptos de clase hoy**!

¿Qué es la abstracción? La cuestión es que el código es más fácil de escribir y comprender.

- Un ejemplo sencillo. Hay dos lápices diferentes (uno azul, otro rojo, de diferentes colores), pero siguen siendo lápices, y eso es importante.



Hay dos niveles principales de codificación en los programas:

1. Alta Definición: Este tipo está estrechamente relacionado con el lenguaje humano. Oculte detalles técnicos para que la interfaz sea más fácil de entender y usar. Algunos ejemplos de codificación de alto nivel son:

Lenguajes de programación de alto nivel como Python, Java o JavaScript: estos lenguajes facilitan la construcción e interpretación de código.

La interfaz gráfica también tiene funciones avanzadas para conectar aplicaciones. Por ejemplo, botones y listas desplegables.

2. Versión intermedia: En este nivel interactuamos con muchas otras cosas alrededor del dispositivo y el sistema operativo. Algunos ejemplos de eliminación intermedia son:

Lenguaje ensamblador. Es un pequeño lenguaje de programación que describe directamente las instrucciones del procesador y la memoria de la computadora. Aunque el lenguaje de alto nivel es difícil de entender y utilizar, funciona bien con los dispositivos.

- API del sistema operativo. Se trata de interfaces de programación de aplicaciones (API) proporcionadas por el sistema operativo que permiten a los programadores interactuar directamente con el hardware y los componentes del sistema. Esto incluye funciones como gestión de archivos, asignación de memoria y comunicación de claves. También existe el carácter del símbolo del sistema (cmd) en Windows.



La programación orientada a objetos es un método de interpretación que organiza el código del programa en torno a datos u objetos en lugar de funciones y lógica. Un objeto se puede definir como un dato con propiedades y comportamientos específicos. Lo último que hacemos es tener muchos archivos diferentes para esta pequeña cosa.

"La programación temática se centra en lo que el diseñador quiere controlar, en lugar de lo que necesita ser manipulado." Este enfoque de programación es adecuado para computadoras modificadas grandes y complejas.

Este enfoque de programación también es ideal para el desarrollo colaborativo, donde los proyectos se dividen en grupos, porque cada grupo o individuo puede organizar e interactuar con sus archivos de forma independiente.

¿Qué es una interfaz, incluidas GUI y CLI?

La interfaz es donde el usuario interactúa con la computadora.

Hay dos tipos principales:

- GUI (interfaz gráfica) utiliza elementos visuales como ventanas, iconos, botones, menús y otros elementos de visualización para permitir la interacción y programación del usuario. La GUI es fácil de usar y proporciona una interacción simple y directa mediante operaciones de hacer clic, arrastrar y soltar. Por ejemplo, estas son las características que ves en tu computadora (interfaz de Windows, programas y botones...)

- La CLI (Command Line Interface) es una característica invisible que sólo ellos conocen. Y cómo usarlo. La principal ventaja es que si sabes usarlo correctamente, puedes hacer más cosas correctamente que con una GUI. El hablante se comunica en un tono autoritario. Un ejemplo obvio en Windows es el símbolo del sistema (que se abre si escribe "cmd" en el menú de Windows.
