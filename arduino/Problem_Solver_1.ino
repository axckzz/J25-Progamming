void setup(){
Serial.begin(9600);
int numeroProblema = 1;
while(numeroProblema <= 30){
resolverProblemaDibujo(numeroProblema);
numeroProblema ++;
}
}


void loop() {}
  // put your main code here, to run repeatedly:


void resolverProblemaDibujo (int n) {
  delay(50);
  Serial.print("Resolviendo problema");
  Serial.println(n);
}

