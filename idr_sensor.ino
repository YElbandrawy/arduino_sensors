//IDR sensor is used to measure the light intensity
//The higher the light intensity, the less the sensor will read
//maximum analogread at arduino uno is 1023 and it's Represent 5V 

#define an A0  //it's our input pin
int value=0;   

void setup() {
  Serial.begin(9600);
}

void loop() {
  value=analogRead(an);
  Serial.println(value);
  delay(100);
}
