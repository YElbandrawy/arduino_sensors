#define in 4
int r=0;
void setup() {
  pinMode(in,INPUT);
  Serial.begin(9600);

}

void loop() {
  r=digitalRead(4);
  Serial.println(r);
 

}
