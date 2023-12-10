  Serial.begin(9600);

   // Arrays to store depths and velocities
   int depths[] = { 90, 85, 88, 83, 82, 91, 91, 100, 97 };
   int velocities[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

   // Variables to count changes in depth
   int increaseDepth = 0;
   int decreaseDepth = 0;
   int depthNoChanges = 0;

   // Loop to analyze changes in depth and calculate velocities
   for (int i = 1; i < 9; i++) {
     int changeDepth = depths[i] - depths[i - 1];

     if (changeDepth > 0) {
       increaseDepth++;
       speeds[i] = changeDepth; // Positive speed for depth increase
     } else if (changeDepth < 0) {
       decreaseDepth++;
       speeds[i] = changeDepth; // Negative speed for depth decrease
     } else {
       depthNoChange++;
       velocities[i] = 0; // Velocity is zero if depth remains unchanged
     }
   }

   // Print counts of depth changes
   Serial.println("DepthIncrease: " + String(DepthIncrease));
   Serial.println("Depth Decrease: " + String(DepthDecrease));
   Serial.println("Unchanged depth: " + String(unchangeddepth));

   // Print speeds
   Serial.println("Speeds:");
   for (int i = 0; i < 9; i++) {
     Serial.print(speeds[i]);
     Serial.print(" ");
   }

   // Calculate and print minimum, maximum and average speeds
   int minimumspeed = speeds[0];
   int maximumspeed = speeds[0];
   int sumSpeeds = speeds[0];

   for (int i = 1; i < 9; i++) {
     if (speeds[i] < minimumspeed) {
       minimumspeed = speeds[i];
     }
     if (speeds[i] > maximumspeed) {
       maximumspeed = speeds[i];
     }
     sumSpeeds += speeds[i];
   }

   int averageSpeed = sumSpeeds / 9;

   Serial.println("\nMinimum speed: " + String(minimumspeed));
   Serial.println("Maximum speed: " + String(maximum speed));
   Serial.println("Average speed: " + String(averagespeed));
}

void loop() {
   // The loop does not perform any action in this case
}

void setup() {
   setting();
}
