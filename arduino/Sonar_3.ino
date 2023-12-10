void setup() {
Serial.begin(9600);

int depths[] = { 90, 85, 88, 83, 82, 91, 91, 100, 97 };
int speeds[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };


int increasedDepth = 0;
int decreasedDepth = 0;
int unchangedDepth = 0;

// Loop to analyze depth changes and calculate speeds
  for (int i = 1; i < 9; i++) {
    int depthChange = depths[i] - depths[i - 1];
  if (depthChange > 0) {
    increasedDepth++;
    speeds[i] = depthChange;  // Positive speed for depth increase
  } else if (depthChange < 0) {
    decreasedDepth++;
    speeds[i] = depthChange;  // Negative speed for depth decrease
  } else {
    unchangedDepth++;
    speeds[i] = 0;  // Speed is zero if depth remains unchanged
    }
  }

Serial.println("Depth increase:" + String(increasedDepth));
Serial.println("Depth drop:" + String(decreasedDepth));
Serial.println("Depth unchanged:" + String(unchangedDepth));


Serial.println("Speeds:");
for (int i = 0; i < 9; i++) {
  Serial.print(speeds[i]);
  Serial.print(" ");
  }
}

void loop() {
}