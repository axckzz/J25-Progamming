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
