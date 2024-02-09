# 🔄**Loops**
1. "A sequence of instructions that are continually repeated until a certain condition is reached"

2. These are necessary when writing code involving the same process many times.

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
