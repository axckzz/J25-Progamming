void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (ifIsOdd(numeroProblema) || ifIsMultipleOfSix(numeroProblema)) {
      resolverProblemaDibujo(numeroProblema);
    }
  }
}

void loop() {}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}
bool ifIsOdd(int num) {
  return num%2 !=0;
}
bool ifIsMultipleOfSix(int num) {
  return num%6==0;
}