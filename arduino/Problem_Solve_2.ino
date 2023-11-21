void setup() {
Serial.begin(9600);
for (int numeroProblema = 1; numeroProblema<=30; numeroProblema ++){
resolverProblemaDibujo(numeroProblema);
}
}

void loop() {}
  // put your main code here, to run repeatedly:


void resolverProblemaDibujo (int n) {
  delay(50);
  Serial.print("Resolviendo problema");
  Serial.println(n);
}
