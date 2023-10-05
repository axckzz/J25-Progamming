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
