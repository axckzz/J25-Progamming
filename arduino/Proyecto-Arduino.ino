#include "morse.h"
#include "song.h"
#include "recepee.h"

 
void setup() {
 
Serial.begin(9600);
}
 
void loop() {
  readSerial();
}
 
 
void readSerial() {
 // Serial.println("Miau");
  if (Serial.available()>0){
  String word = Serial.readString();
  word.trim();
  Serial.println(word);
  Serial.println("Longitud del string: ");
  Serial.println(word.length());
  decide(word);
  }
}
 



void decide(String command) {
  //Serial.println("Decidiendo qué decir...");
  if (command.equals("play")) {
    playMusic();
    return;
  }
  if (command.equals("stop")) {
    stopTheMusic = true;
  }
  if (command.startsWith("morse")) {
    outputMorse(command.substring(6));
  }
  if (command.equals("cooking")) {
    cookToasts();
  }
}




