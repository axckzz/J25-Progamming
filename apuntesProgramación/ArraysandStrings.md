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
