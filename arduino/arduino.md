# :rocket: **Explanations about my programs!**
## **BlinkVariations Explanation:** 
This Arduino code initializes the onboard LED pin, turns the LED on for 2 seconds, turns it off for 1 second in the setup function,and then creates a continuous loop in the loop function, where the LED flashes for 0.5 seconds and turns off. turns off for 0.5 seconds.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/BlinkVariations.ino

---

## **BlinkVariation2 Explanation:** 
The same as in variation 1, but there's more blinks and they blink much faster.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/BlinkVariations2.ino

---


## **Special_Character_Of_Alvaro Explanation:** 

**Problem:** In this program i had a problem the first time, the problem was that i dind't put quotation marks on the Serial.println. I'm going to show you the problem.❌

**Solution:** the solution is to put the quotation marks in the Serial.println.✅

![Error](https://github.com/axckzz/J25-Progamming/assets/144990882/ac4ec7ff-1f56-41f4-b08e-bd99a86acd32)


- void setup() Function:

*Initializes serial communication with a baud rate of 9600, allowing communication between the Arduino and the connected computer through the serial monitor.*

- void loop() Function:

1. Contains the main code that runs repeatedly in a loop.
2. Prints a special message and ASCII art to the serial monitor.
3. The ASCII art represents a simple image.
4. Adds new lines for spacing.
5. Delays for 1500 milliseconds (1.5 seconds) before repeating the loop.


https://github.com/axckzz/J25-Progamming/blob/main/arduino/Special_Character_Of_Alvaro.ino

--- 
## **MORSECODE Explanation:** 
The Morse code representation is done through the duration of LED on/off states, where dots are short pauses and dashes are longer pauses. The sequence loops continuously in the loop function, repeatedly spelling "ALVARO" in Morse code with appropriate pauses between letters.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CODIGOMORSE.ino

---

## **FunctionalProgramming1 Explanation:** 
This program uses the morseDot and morseDash functions to modularize the code and simplify the representation of dots and dashes. The sequence loops continuously in the loop function, repeatedly spelling "ALVARO" in Morse code with appropriate pauses between letters. 


https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming1.ino

---

## **FunctionalProgramming2 Explanation:** 
This program organizes the Morse code representation into separate functions for each letter, enhancing code readability and maintainability. The loop continuously spells "ALVARO" in Morse code using the built-in LED, with appropriate pauses between letters.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming2.ino

---

## **FunctionalProgramming3 Explanation:** 
This program enhances code reusability by introducing a function (morseBlink) to handle the blinking logic. Each letter function then calls this common function with the appropriate number of dots, creating a modular and organized Morse code representation.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming3.ino

---


## **FunctionalProgramming4 Explanation:** 
This Arduino program utilizes the Serial communication interface and the built-in LED to repeatedly print the message "I like Brasil" to the serial monitor every second.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming4.ino

___

## **FunctionalProgramming5 Explanation:** 
This Arduino program prints the Morse code representation of the sequence "ALVARO" to the serial monitor in a loop.Each letter is represented by a combination of dots and dashes, and the forward slash ("/") is used to separate letters.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming5.ino

___

## **CookingSystem.1 Explanation:**  
For this program to work as you want, you need to enter strings into the serial monitor, and one of the recognized commands is "cook." Other commands or actions can be added to the decide function based on your application's requirements.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.1/CookingSystem.1.ino

___

## **CookingSystem.2 Explanation:** 
This is a simplified simulation, and the conditions for making a Spanish Omelette might not be the same as with a real cooking scenario. The purpose of this program is to demonstrate basic control flow and variable manipulation based on user input.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.2/CookingSystem.2.ino

---

## **CookingSystem.3 Explanation:** 
This Arduino program simulates a cooking system for making an Apple Pie. It is divided into two parts, CookingSystem_1 and CookingSystem_2. Each system has its own set of ingredients and actions.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.1.1.ino
https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.2.1.ino

---

## **CookingSystem.4 Explanation:** 

//first of all these are the variable declarations for the ingredients of the tuna omelette. The data types have been adjusted to match the specific ingredients.
//the setup function is executed once at the beginning of the program. It is used to set up the environment, such as initializing serial communication and presenting initial messages to the user.
//here, the conditions have been modified to check whether the user wants to cook toasts, a tuna omelette, or view the inventory. Additionally, conditions have been added to buy or add ingredients to the inventory.
//then checks if there are enough ingredients to cook toasts. If so, it displays a cooking message and reduces the quantity of ingredients in the inventory. If there are not enough ingredients, it displays a message indicating which ingredients are missing.
//similar to cookToasts, then checks if there are enough ingredients to cook a tuna omelette and performs the corresponding actions.
//then shows the current quantity of each ingredient in the inventory.
//although not explicitly written in the provided code, the main loop runs indefinitely to handle user input and perform corresponding actions.


https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem_4.ino

## **Problem Solver 1 Explanation:**

This Arduino code initializes a variable to track problem numbers and establishes serial communication.
Then starts a loop that calls the resolverProblemaDibujo function repeatedly to solve drawing problems numbered 1 through 30.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Problem_Solver_1.ino

---

## **Problem Solver 2 Explanation:**

The resolverProblemaDibujo function is called for each iteration of the for loop that this code uses to loop from 1 to 30 after setting up serial communication.

In this program we use "for" instead of "while".

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Problem_Solve_2.ino

---

## **Problem Solver Variation 1 Explanation:**

This code first establishes serial communication and solves drawing problems for numbers 1 through 30 using two for loops in the setup function. Next, solve them in the opposite order, which is 30 to 1. The loop is empty.

## **Problem Solver Variation 2 Explanation:**

To skip the number 17 we use an 'if' function. To put a condition.

## **Problem Solver Variation 3 Explanation:**

This code first establishes serial communication, then uses the setup function's for loops to solve drawing problems for numbers 1 through 30, omitting 17 and 23.

## **Problem Solver Variation 4 Explanation:**

This code first establishes serial communication, and then it solves drawing problems for odd numbers that are multiples of three from 1 to 30 using loops in the setup function.

---


## **Problem Solver 3 Explication:**

The program uses a for loop to iterate from 1 to 100 ```(for (int numeroProblema = 1; numeroProblema <= 100; ++numeroProblema)).```
Inside the loop, it checks if the current number numeroProblema is a multiple of 7 ```(if (numeroProblema % 7 == 0)).```
If the condition is true, it prints the solution for the current problem.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Problem_Solve_3.ino

---

## **Problem Solver 4 Explication:**

Similar to the first program, it uses a for loop to iterate from 1 to 100.
It calculates the last digit of the current number numeroProblema using numeroProblema % 10.
If the last digit is 6 or 3, it prints the solution for the current problem.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Problem_Solve_4.ino

---

## **Problem Solver 5 Explication:**

It uses a for loop to iterate from 1 to 100.
Checks each digit of each number.
And prints the numbers that contain the digit 3.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Problem_Solver_5.ino

---
## **Problem Solver 6 Explication:**

It uses a for loop to iterate from 1 to 100.
The condition num % 2 != 0 || num % 6 == 0 is used to check if the number is either odd (num % 2 != 0) or a multiple of 6 (num % 6 == 0).
If the condition is true, the number is printed.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Problem_Solver_6_Odd_Or_MultipleOfSix.ino

---

## **Problem Solver 7 Explication:**

It uses a for loop to iterate from 1 to 100.
The digitSum function takes an integer as an argument and returns the sum of its digits. It uses a while loop to extract each digit and add it to the sum.
For each number, it calculates the sum of its digits using the digitSum function. 
If the sum is either 10 or 5, the number is printed.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Problem_Solver_7_Sum_5Or10.ino

---

## **SwapTheFirst2Letters Explication:**

The serial communication is initialized and the original string is defined in the setup function.
If the string has at least two characters, the swapFirstTwoLetters function will swap the first two letters.
The function takes the original string as input and prints the result.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/SwapTheFirst2Letters.ino

---

## **SwapTheAAnTheI Explication:**

The swapAandI function goes through every character in the string, exchanging 'a' with 'i'. The outcome is then displayed after the action is completed.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/SwapTheAAnTheI.ino

---

## **SubstituteTheSecondBwithaV Explication:**

The substituteBwithV function locates the position of the second 'b' in the string and replaces it with 'v'. The final outcome is then displayed.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/substituteTheSecondBwithAv.ino

---

## **Sonar 1 Explication:**

In the Sonar_1 the number of times the depth has grown is found in this code.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Sonar_1.ino

---
## **Sonar 2 Explication:**

With this code, we generate an output that indicates the number of times the depth has increased, dropped, and stayed constant.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Sonar_2.ino

---

## **Sonar 3 Explication:**

With this code, we generate an output that says us the number of times the depth has increased, dropped, and stayed constant. Additionally, it informs us of the vertical speed variations the submarine experiences.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Sonar_3.ino

---

## **Sonar 4 Explication:**

With this code, we generate an output that says us the number of times the depth has increased, dropped, and stayed constant. It also reveals the vertical speed variations the submarine experiences. As well as the fastest and slowest possible speeds of the submarine.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/Sonar_4.ino
---
