# 🔄**Loops**
1. "A sequence of instructions that are continually repeated until a certain condition is reached"

2. These are necessary when writing code involving the same process many times.
---


**TYPES**
- While
- For

  ------------------------------

*WHILE:*

```C++
do while (fuel > 0){     
  accelerate();         
}
```

**⚠️This would be an infinite loop**

```C++
do while (true) {      
  accelerate();        
}
```


*FOR:*

```c++
for(int s = 0; s<15600; s++) 
  {motor.step(1);        
  motor2.step(-1);}
```

*MEANING OF THE CODE:*

  ```C++
For("definition of variable";"condition of iteration";"step every time code is executed")
{code to repeat}
```
---

# 🌀**Tone**
To produce an audible signal when the Arduino is linked to a speaker.

This is a utility function without any return value.

---

## **Usage:**
```c++
tone(pin, frequency)
```
```c++
tone(pin, frequency, duration)
```
---

**Pin**: The specific Arduino pin designated for tone generation.
Frequency: The pitch of the tone in hertz (Tones cannot be lower than 31Hz).
Duration: The length of the tone in milliseconds (not obligatory).

## **Key Note:**

- When aiming to play various pitches across multiple pins, it's essential to invoke 'noTone()' on one pin before triggering 'tone()' on the subsequent pin.
