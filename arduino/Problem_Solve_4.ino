void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; ++numeroProblema) {
  if (numeroProblema % 10 == 3 || numeroProblema % 10 == 6) {
  resolverProblemaDibujo(numeroProblema);
  }
 }
}
  void loop() {
  }

  void resolverProblemaDibujo(int numeroProblema) { 
  Serial.print("Resolviendo problema");
  Serial.println(numeroProblema);
  }
