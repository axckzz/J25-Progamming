# :rocket: **Explanations about my programs!**
## **BlinkVariations Explanation:** This Arduino code initializes the onboard LED pin, turns the LED on for 2 seconds, turns it off for 1 second in the setup function,and then creates a continuous loop in the loop function, where the LED flashes for 0.5 seconds and turns off. turns off for 0.5 seconds.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/BlinkVariations.ino

---

## **Special_Character_Of_Alvaro Explanation:** 

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
## **MORSECODE Explanation:** The Morse code representation is done through the duration of LED on/off states, where dots are short pauses and dashes are longer pauses. The sequence loops continuously in the loop function, repeatedly spelling "ALVARO" in Morse code with appropriate pauses between letters.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CODIGOMORSE.ino

---

## **FunctionalProgramming1 Explanation:** This program uses the morseDot and morseDash functions to modularize the code and simplify the representation of dots and dashes. The sequence loops continuously in the loop function, repeatedly spelling "ALVARO" in Morse code with appropriate pauses between letters. 


https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming1.ino

---

## **FunctionalProgramming2 Explanation:** This program organizes the Morse code representation into separate functions for each letter, enhancing code readability and maintainability. The loop continuously spells "ALVARO" in Morse code using the built-in LED, with appropriate pauses between letters.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming2.ino

---

## **FunctionalProgramming3 Explanation:** This program enhances code reusability by introducing a function (morseBlink) to handle the blinking logic. Each letter function then calls this common function with the appropriate number of dots, creating a modular and organized Morse code representation.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming3.ino

---


## **FunctionalProgramming4 Explanation:** This Arduino program utilizes the Serial communication interface and the built-in LED to repeatedly print the message "I like Brasil" to the serial monitor every second.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming4.ino

___

## **FunctionalProgramming5 Explanation:** This Arduino program prints the Morse code representation of the sequence "ALVARO" to the serial monitor in a loop.Each letter is represented by a combination of dots and dashes, and the forward slash ("/") is used to separate letters.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/FunctionalProgramming5.ino

___

## **CookingSystem.1 Explanation:**  For this program to work as you want, you need to enter strings into the serial monitor, and one of the recognized commands is "cook." Other commands or actions can be added to the decide function based on your application's requirements.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.1/CookingSystem.1.ino

___

## **CookingSystem.2 Explanation:** This is a simplified simulation, and the conditions for making a Spanish Omelette might not be the same as with a real cooking scenario. The purpose of this program is to demonstrate basic control flow and variable manipulation based on user input.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.2/CookingSystem.2.ino

---

## **CookingSystem.3 Explanation:** This Arduino program simulates a cooking system for making an Apple Pie. It is divided into two parts, CookingSystem_1 and CookingSystem_2. Each system has its own set of ingredients and actions.

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.1.1.ino
https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem.2.1.ino

---

## **CookingSystem.4 Explanation:** 
```c++
//first of all these are the variable declarations for the ingredients of the tuna omelette. The data types have been adjusted to match the specific ingredients.
//the setup function is executed once at the beginning of the program. It is used to set up the environment, such as initializing serial communication and presenting initial messages to the user.
//here, the conditions have been modified to check whether the user wants to cook toasts, a tuna omelette, or view the inventory. Additionally, conditions have been added to buy or add ingredients to the inventory.
//then checks if there are enough ingredients to cook toasts. If so, it displays a cooking message and reduces the quantity of ingredients in the inventory. If there are not enough ingredients, it displays a message indicating which ingredients are missing.
//similar to cookToasts, then checks if there are enough ingredients to cook a tuna omelette and performs the corresponding actions.
//then shows the current quantity of each ingredient in the inventory.
//although not explicitly written in the provided code, the main loop runs indefinitely to handle user input and perform corresponding actions.
```

https://github.com/axckzz/J25-Progamming/blob/main/arduino/CookingSystem_4.ino
