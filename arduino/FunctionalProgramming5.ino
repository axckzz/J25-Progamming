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