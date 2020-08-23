#define relay 3
void setup() {
  pinMode(relay,OUTPUT);  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(relay,HIGH);
  delay(1000);
  digitalWrite(relay,LOW);
  delay(1000);

}
