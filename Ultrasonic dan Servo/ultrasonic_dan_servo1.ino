#include <Servo.h>

const int echoPin = 3;
const int trigPin = 4;

const int servoPin = 2;

Servo servo ;
int servoPos =0;

long timer; 
int jarak ;


void setup()
{
  pinMode(echoPin, INPUT);
  pinMode(trigPin, INPUT);
  
  servo.attach(servoPin);
  
}


void loop()
{
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
  
  timer = pulseIn(echoPin, HIGH);  
  jarak = timer/57;
  delay(1000);
  if (jarak <70);
     servo.write(90);
     delay(3000);
     servo.write(0);
     delay(1000);
}