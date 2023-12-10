void setup() {
Serial.begin(9600);
int depths[] = { 90, 85, 88, 83, 82, 91, 91, 100, 97 };
int increasedDepth = 0;
int decreasedDepth = 0;
int unchangedDepth = 0;

for (int i = 1; i < 9; i++) {
  if (depths[i] > depths[i - 1]) {
    increasedDepth++;
  } else if (depths[i] < depths[i - 1]) {
    decreasedDepth++;
  } else {
    unchangedDepth++;
  }
}

Serial.println("Depth increase:" + String(increasedDepth));
Serial.println("Depth drop:" + String(decreasedDepth));
Serial.println("Depth unchanged:" + String(unchangedDepth));
}

void loop() {

}