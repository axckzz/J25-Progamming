//CookingSystem_2
int butter = 4;
int apple = 5;
double nut = 0.25;
int bordeDeLaTarta = 0;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
String input = Serial.readString();
if (input != "") {
Serial.println("You have input: " + input);
input.trim();
decide(input);
 }
}

void cook() {
Serial.println("We are cooking");
if (butter >= 2 &&
apple == 6 &&
 nut>= 0.25 && bordeDeLaTarta ) {
Serial.println("you have a Apple Pie");
butter = butter - 2;
apple--;
nut = nut - 0.25;
bordeDeLaTarta--;
}
}

void decide(String input) {
if (input == "cook") {
cook();
}

if(input=="apple"){
  apple++;}

if(input=="nut"){
  nut++;}

if(input=="butter"){
  butter++;}

if(input=="bordeDeLaTarta"){
  bordeDeLaTarta++;}}


