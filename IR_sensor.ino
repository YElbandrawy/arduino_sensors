//we will use an infrared sensor, if there's an object infront of it,it'll print"Obstacle detected!!!" on the serial monitor   

#define pin 2   // This is the input pin, you can change it whatever you want
int Signal = HIGH;   // HIGH means no obstacle


void setup()
{
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  
  Signal = digitalRead(pin);
  
  if (Signal == LOW)
  {
    Serial.println("Obstacle detected!!!");
    delay(10);
  }
  
  else
  {
    Serial.println("clear");
    delay(10);
  }
}
