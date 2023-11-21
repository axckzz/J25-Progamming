void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; ++numeroProblema) {
      int lastDigit = numeroProblema % 10;
      if (lastDigit == 6 || lastDigit == 3) {
  resolverProblemaDibujo(numeroProblema);
 }
}
}
  void loop() {
  }

  void resolverProblemaDibujo(int n) { 
    Serial.print("Resolviendo problema = ");
    Serial.println(n);
  }