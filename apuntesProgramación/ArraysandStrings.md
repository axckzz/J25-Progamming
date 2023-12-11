# :rocket: **Example of how to do Problem_Solver_Sum10or5!** 
```c++
Bool digitsSum10Or5(int n) {
Int tens = (n/10)%10;
Int units = n%10;
Int hundreds = (n/100)%10;
return(tens+units+hundreds==5) || (tens+units+hunderds==10); 
````
---

# 🔤 **Arrays**
- Variables that store several values in an specific order. ℹ️

F A T E

- String is an array of characters

## **Arrays with int!** 
```c++
Int[] grades={ 5, 7, 9, 7, 6, 8}
Int sum= 0
sum = sum + grades[0];
sum = sum + grades[1];
sum = sum + grades[2];
sum 
sum = sum + grades[5];

int mediaDeLasNotas = sum/6;


Int[] grades={ 5, 7, 9, 7, 6, 8}
Int sum= 0;
for( int n=0, n<6, n++){
sum = sum + grades[n];
}

int mediaDeLasNotas = sum/6;


Int[] grades={ 5, 7, 9, 7, 6, 8}
//calculate max
Int max = grades[0];
If(grades[1]>max) {
max = grades[1]; }
If(grades[2]>max) {
max = grades[2]; }


Int[] grades={ 5, 7, 9, 7, 6, 8}
//calculate max
int max = grades[0]
for( int i = 1, i<6, i++){
if( grades[i] > max){
max = grades[i];
}
} 


//El mínimo
int[] grades = {5, 7, 9, 7, 6, 8};
// Calcular el mínimo
int min = grades[0];
if (grades[1] < min) {
    min = grades[1];
}
if (grades[2] < min) {
    min = grades[2];
}
```

- The index of the last element of an array is the number of elements minos one.
 ---
## :speech_balloon: Interesting things about a array!
Arrays &rarr; colecciones estáticas &rarr; no cambian de tamaño.
Su acceso es rápido.
Su tamaño de memoria es relativamente reducido.

- Índice (index)
- Valor (value)


Un elemento de un array siempre tendrá un índice entre 0 y n-1 siendo n la longitud del array y un valor

---
**Arrays**

```c++
void setup () {
Serial.Begin(9600);
String “Coches” = [“Coches”];
Serial.println(word);//writes the Word
Serial.println(“Coches” [0]);//wtites the first letter
```
```c++
String juanita = coches[1];
Serial.println(n(juanita);
coches[1]= coches[0];
coches[0]= juanita;
Serial.println(coches);
```
### **Funcion that change the first two letters of order!**
```c++
String functionX (String w) {
String t= w[1];
w[1] = w[0];
w[0] = t;
return w;
//Es una función que devuelve el mismo string que le mandas cambiando las dos primeras letras de orden.
```
---

## 🔝 **Important information about this theme!**
- Two things of functions
- The can return values
- And/or they 
- Can output values (or print)
- **Return** -> *con return*
- **Output** -> *Serial.println(____);*
- **Void** -> *si no devuelve (return)*
- **String** -> *Si devuelve algo*

```c++
Void SFL (String i) {
String t = i [1];
I[1] = i[0];
Serial.println(i);
}
```
---
# :rocket: **C++ String Functions!** 

# **String Length: std::string::length**
- The string length function calculates the length (number of characters) of a string.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str = "Hello, World!";
  int length = str.size();  // Returns the length of the string, which is 13
  std::cout << "The length of the string is: " << length << std::endl;
  return 0;
}
```

**Output:**

```csharp
The length of the string is: 13
```
# **String Copy: std::strcpy**
- The string copy function copies a string from a source location to a destination location.

```cpp
#include <iostream>
#include <cstring>

int main() {
  char source[] = "Hello, World!"; // Source string
  char destination[20]; // Destination character array
  std::strcpy(destination, source); // Copy the source string to the destination
  std::cout << "Source string: " << source << std::endl;
  std::cout << "Copied string: " << destination << std::endl;
  return 0;
}
```
**Output**

```c
Source string: Hello, World!
Copied string: Hello, World!
```
# **String Comparison: std::string::compare**

- The string comparison function compares two strings lexicographically and returns an integer representing the result.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str1 = "apple";
  std::string str2 = "banana";
  int result = str1.compare(str2);
  if (result == 0) {
    std::cout << "The strings are equal." << std::endl;
  } else if (result < 0) {
    std::cout << "The string str1 is less than str2." << std::endl;
  } else {
    std::cout << "The string str1 is greater than str2." << std::endl;
  }
  return 0;
}
```

**Output:**

```csharp
The string str1 is less than str2.
```
# **String Conversion to Integer: std::stoi**
- This function converts a string to an integer.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str = "123";
  int num = std::stoi(str);
  std::cout << num << std::endl;
  return 0;
}
```
**Output:**

```
123
```

# **String Conversion to Double: std::stod**

- This function converts a string to a double.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str = "3.14";
  double num = std::stod(str);
  std::cout << num << std::endl;
  return 0;
}
```
**Output:**

```
3.14
```

# **Numeric to String Conversion: std::to_string**
- This function converts a number to a string.

```cpp
#include <iostream>
#include <string>

int main() {
  int num = 42;
  std::string str = std::to_string(num);
  std::cout << str << std::endl;
  return 0;
}
```

**Output:**

```
42
```
# **String Concatenation: std::string::operator+**
- This function concatenates two strings.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str1 = "Hello";
  std::string str2 = " World!";
  std::string result = str1 + str2;
  std::cout << result << std::endl;
  return 0;
}
````

**Output:**

```
Hello World!
```

# **String Substring: std::string::substr**
- The string substring function extracts a substring from a string, starting at a specified position and with a specified length.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str = "Hello, World!";
  std::string substr = str.substr(7, 5);  // Extracts "World" from the original string
  std::cout << "The substring is: " << substr << std::endl;
  return 0;
}
```
**Output:**

```csharp
The substring is: World
````
# **String Padding: std::setw**
- The string padding function pads a string with a specified character or space to a certain width.

```cpp
#include <iostream>
#include <iomanip>
#include <string>

int main() {
  std::string str = "Hello";
  std::cout << std::setw(10) << std::setfill(' ') << str << std::endl;
  return 0;
}
```
**Output:**
```markdown
    Hello
```
# **String Replacement**
- This function replaces a portion of a string with another string.

```cpp
#include <iostream>
#include <string>

int main() {
  std::string str = "Hello, World!";
  str.replace(7, 5, "Universe");  // Replaces the substring "World" with "Universe"
  std::cout << str << std::endl;
  return 0;
}
```
**Output:**

```
Hello, Universe!
```

### Bibliography
https://blog.hubspot.com/website/c-string-functions
