 // whith this code You can measure the distance between the ultrasonic sensor and the object then show it on the serial monitor
     


#define trig 11      //connect the triger to pin (11)in arduino
#define echo 12      //connect the echo to pin (12)in arduino
int distance=0,t=0;
void setup() 
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() 
{
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  distance=t/57;       //Distance = (Speed of Sound * Time/2) = t/(1/((350*0.0001)/2))
  Serial.println(distance);  
  delay(50);
    }
  
