# :rocket: **Explanations about my programs!**
**BlinkVariations Explanation:** This Arduino code initializes the onboard LED pin, turns the LED on for 2 seconds, turns it off for 1 second in the setup function,and then creates a continuous loop in the loop function, where the LED flashes for 0.5 seconds and turns off. turns off for 0.5 seconds.
```c++
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(13, 0);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}
```

---

**Special_Character_Of_Alvaro Explanation:** This Arduino code initializes the onboard LED pin, turns the LED on for 2 seconds, turns it off for 1 second in the setup function, and then creates a continuous loop in the loop function, where the LED flashes for 0.5 seconds and turns off. Turns off for 0.5 seconds.

- void setup() Function:

*Initializes serial communication with a baud rate of 9600, allowing communication between the Arduino and the connected computer through the serial monitor.*

- void loop() Function:

1. Contains the main code that runs repeatedly in a loop.
2. Prints a special message and ASCII art to the serial monitor.
3. The ASCII art represents a simple image.
4. Adds new lines for spacing.
5. Delays for 1500 milliseconds (1.5 seconds) before repeating the loop.

```c++
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("### This is my new Special Message! ###");
Serial.println(░░░░░░░░░░░▄▄);
Serial.println(░░░░░░░░░░█░░█);
Serial.println(░░░░░░░░░░█░░█);
Serial.println(░░░░░░░░░█░░░█);
Serial.println(░░░░░░░░█░░░░█);
Serial.println(██████▄▄█░░░░░██████▄);
Serial.println(▓▓▓▓▓█░░░░░░░░░░░░░░█);
Serial.println(▓▓▓▓▓█░░░░░░░░░░░░░░█);
Serial.println(▓▓▓▓▓█░░░░░░░░░░░░░░█);
Serial.println(▓▓▓▓▓█░░░░░░░░░░░░░░█);
Serial.println(▓▓▓▓▓█░░░░░░░░░░░░░░█);
Serial.println(▓▓▓▓▓█████░░░░░░░░░█);
Serial.println(█████▀░░░░▀▀██████▀);
Serial.println("\n\n\n\n\n\n\n\n\n\n");
delay(1500);
}
```
--- 
**MORSECODE Explanation:** The Morse code representation is done through the duration of LED on/off states, where dots are short pauses and dashes are longer pauses. The sequence loops continuously in the loop function, repeatedly spelling "ALVARO" in Morse code with appropriate pauses between letters.
```c++
int dotDuration  = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // A
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
  // L
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
  // V
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalwrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
  // A
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
  // R
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration);
  // O
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, HIGH);
delay(dotDuration*3);
digitalWrite(LED_BUILTIN, LOW);
delay(dotDuration*3);
  // space
}
```

---

**FunctionalProgramming1 Explanation:** This program uses the morseDot and morseDash functions to modularize the code and simplify the representation of dots and dashes. The sequence loops continuously in the loop function, repeatedly spelling "ALVARO" in Morse code with appropriate pauses between letters. 
```c++
int dotDuration = 250;
void setup() {pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  //morseA
    morseDot();
    morseDash();
    delay(2*dotDuration);
  //morseL
    morseDot();
    morseDash();
    morseDot();
    morseDot();
    delay(2*dotDuration);    
  //morseV
    morseDot();
    morseDot();
    morseDot();
    morseDash();
    delay(2*dotDuration);  
    //morseA
    morseDot();
    morseDash();
    delay(2*dotDuration);
  //morseR
    morseDot();
    morseDash();
    morseDot();
    delay(2*dotDuration);    
  //morseO
    morseDash();
    morseDash();
    morseDash();
    delay(6*dotDuration); 

 // put your main code here, to run repeatedly:

}

void morseDot() {
     digitalWrite(LED_BUILTIN,HIGH);
     delay(dotDuration);
     digitalWrite(LED_BUILTIN,LOW);
     delay(dotDuration);
}

void morseDash() {
     digitalWrite(LED_BUILTIN,HIGH);
     delay(dotDuration*3);
     digitalWrite(LED_BUILTIN,LOW);
     delay(dotDuration);
}
```
---

**FunctionalProgramming2 Explanation:** This program organizes the Morse code representation into separate functions for each letter, enhancing code readability and maintainability. The loop continuously spells "ALVARO" in Morse code using the built-in LED, with appropriate pauses between letters.
```c++
int dotDuration = 250;
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
morseA();
morseL();
morseV();
morseA();
morseR();
morseO();
delay(dotDuration*2);
}
void morseDot() {
     digitalWrite(LED_BUILTIN,HIGH);
     delay(dotDuration);
     digitalWrite(LED_BUILTIN,LOW);
     delay(dotDuration);
}

void morseDash() {
     digitalWrite(LED_BUILTIN,HIGH);
     delay(dotDuration*3);
     digitalWrite(LED_BUILTIN,LOW);
     delay(dotDuration);
}

void morseA() {
//morseA
    morseDot();
    morseDash();
    delay(2*dotDuration);
}
void morseL() {  
  //morseL
    morseDot();
    morseDash();
    morseDot();
    morseDot();
    delay(2*dotDuration);   
}     
void morseV() { 
  //morseV
    morseDot();
    morseDot();
    morseDot();
    morseDash();
    delay(2*dotDuration);
}   
void morseR() {
  //morseR
    morseDot();
    morseDash();
    morseDot();
    delay(2*dotDuration);
}        
void morseO() {
    morseDash();
    morseDash();
    morseDash();
    delay(6*dotDuration);
}    
```
---

**FunctionalProgramming3 Explanation:** This program enhances code reusability by introducing a function (morseBlink) to handle the blinking logic. Each letter function then calls this common function with the appropriate number of dots, creating a modular and organized Morse code representation.
```c++
int dotDuration = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
morseA();
morseL();
morseV();
morseA();
morseR();
morseO();
delay(dotDuration*2);
}

void morseBlink(int numberOfDots) {
     digitalWrite(LED_BUILTIN,HIGH);
     delay(dotDuration*numberOfDots);
     digitalWrite(LED_BUILTIN,LOW);
     delay(dotDuration);
}

void morseA(){
     morseBlink(1);
     morseBlink(3);
     delay(2*dotDuration);
}

void morseL(){
     morseBlink(1);
     morseBlink(3);
     morseBlink(1);
     morseBlink(1);
     delay(2*dotDuration);
}

void morseV(){
     morseBlink(1);
     morseBlink(1);
     morseBlink(1);
     morseBlink(3);
     delay(2*dotDuration);
}

void morseA(){
     morseBlink(1);
     morseBlink(3);
     delay(2*dotDuration);
}

void morseR(){
     morseBlink(1);
     morseBlink(3);
     morseBlink(1);
     delay(2*dotDuration);
}

void morseO(){
     morseBlink(3);
     morseBlink(3);
     morseBlink(3);
     delay(6*dotDuration);
}
```
---


**FunctionalProgramming4 Explanation:** This Arduino program utilizes the Serial communication interface and the built-in LED to repeatedly print the message "I like Brasil" to the serial monitor every second.
```c++
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("I like Brasil");
delay(1000);
}
```
___

**FunctionalProgramming5 Explanation:** This Arduino program prints the Morse code representation of the sequence "ALVARO" to the serial monitor in a loop.Each letter is represented by a combination of dots and dashes, and the forward slash ("/") is used to separate letters.
```c++
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
morseA();
morseL();
morseV();
morseA();
morseR();
morseO();
Serial.println();
delay(1000);
}

void morseDot() {
Serial.print(".");
}

void morseDash() {
Serial.print("-");
}

void morseA() {
//morseA
    morseDot();
    morseDash();
    Serial.print("/");
}
void morseL() {  
  //morseL
    morseDot();
    morseDash();
    morseDot();
    morseDot();
    Serial.print("/");  
}     
void morseV() { 
  //morseV
    morseDot();
    morseDot();
    morseDot();
    morseDash();
    Serial.print("/");
}   
void morseR() {
  //morseR
    morseDot();
    morseDash();
    morseDot();
   Serial.print("/");
}        
void morseO() {
    morseDash();
    morseDash();
    morseDash();
    Serial.print("/");
}  
```
___

**CookingSystem.1 Explanation:**  For this program to work as you want, you need to enter strings into the serial monitor, and one of the recognized commands is "cook." Other commands or actions can be added to the decide function based on your application's requirements.
```c++
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
 String Input = Serial.readString();
 if(Input != ""){
 Serial.println(Input);
 Input.trim();
 decide(Input);
 }
}

void decide (String Input){
Serial.println("we are deciding");
  if(Input == "cook"){
    cook();
  }
}
void cook(){
Serial.println("we are cooking");
}
```
___

**CookingSystem.2 Explanation:** This is a simplified simulation, and the conditions for making a Spanish Omelette might not be the same as with a real cooking scenario. The purpose of this program is to demonstrate basic control flow and variable manipulation based on user input.
```c++
int eggs = 4;
int potato = 0;
bool oil = true;
double onion = 1;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
String input = Serial.readString();
if (input != "") {
Serial.println("You have input: " + input);
input.trim();
decide(input);
 }
}

void cook() {
Serial.println("We are cooking");
if (eggs >= 2 &&
potato == 1 &&
onion >= 0.25 && oil ) {
Serial.println("you have a Spanish Omelette");
eggs = eggs - 2;
potato--;
onion = onion - 0.25;
}
}

void decide(String input) {
if (input == "cook") {
cook();
}
if(input=="potato"){potato++;}}
```
---

**CookingSystem.3 Explanation:** This Arduino program simulates a cooking system for making an Apple Pie. It is divided into two parts, CookingSystem_1 and CookingSystem_2. Each system has its own set of ingredients and actions.
```c++
//CookingSystem_1
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
 String Input = Serial.readString();
 if(Input != ""){
 Serial.println(Input);
 Input.trim();
 decide(Input);
 }
}

void decide (String Input){
Serial.println("we are deciding");
  if(Input == "cook"){
    cook();
  }
}
void cook(){
Serial.println("we are cooking Apple Pie");
}
```
```c++
//CookingSystem_2
int butter = 4;
int apple = 5;
double nut = 0.25;
int bordeDeLaTarta = 0;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
String input = Serial.readString();
if (input != "") {
Serial.println("You have input: " + input);
input.trim();
decide(input);
 }
}

void cook() {
Serial.println("We are cooking");
if (butter >= 2 &&
apple == 6 &&
 nut>= 0.25 && bordeDeLaTarta ) {
Serial.println("you have a Apple Pie");
butter = butter - 2;
apple--;
nut = nut - 0.25;
bordeDeLaTarta--;
}
}

void decide(String input) {
if (input == "cook") {
cook();
}

if(input=="apple"){
  apple++;}

if(input=="nut"){
  nut++;}

if(input=="butter"){
  butter++;}

if(input=="bordeDeLaTarta"){
  bordeDeLaTarta++;}}
```
---

**CookingSystem.4 Explanation:** Add more than 1 recipee. Add inventory system.
```c++
else if(input=="show"){
Serial.println("These are our ingredients");
Serial.print(apple);
Serial.println("apples");
Serial.print(nut);
Serial.println("nuts");
Serial.print(butter);
Serial.println("butters");
if(bordeDeLaTarta){Serial.println("We have bordeDeLaTarta");}
else{Serial.println("We don't have bordeDeLaTarta");}
}
