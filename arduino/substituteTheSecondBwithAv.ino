void setup() {
  Serial.begin(9600);

  
  String originalString = "webi wabo";
  Serial.print("Original String: ");
  Serial.println(originalString);

 // Substitute the second 'b' with a 'v'
  originalString = substituteBwithV(originalString);
  Serial.print("After substituting second 'b' with 'v': ");
  Serial.println(originalString);
}

void loop() {}

String substituteBwithV(String str) {
  int secondBIndex = str.indexOf('b', str.indexOf('b') + 1);
  
 
  if (secondBIndex != -1) {
    str[secondBIndex] = 'v';
  }
  return str;
}
