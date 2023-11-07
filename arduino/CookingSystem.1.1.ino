//CookingSystem_1
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
 String Input = Serial.readString();
 if(Input != ""){
 Serial.println(Input);
 Input.trim();
 decide(Input);
 }
}

void decide (String Input){
Serial.println("we are deciding");
  if(Input == "cook"){
    cook();
  }
}
void cook(){
Serial.println("we are cooking Apple Pie");
}