
#define led 3 

 
void setup() {
  pinMode(led,OUTPUT);   // put your setup code here, to run once:
}

void loop() {
  digitalWrite(led,HIGH);
  delay(3000);
  digitalWrite(led,LOW);
  delay(3000);



}
