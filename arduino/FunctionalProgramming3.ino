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

    