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
