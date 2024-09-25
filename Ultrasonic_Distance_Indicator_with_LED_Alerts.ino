const int trigPin = 4;
const int echoPin = 5;
long duration;
int distance;
int led1=8;
int led2=7;
int led3=10;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
Serial.begin(9600);
}


void loop() 
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration * 0.034 / 2;

if(distance<=10 && distance>1)
digitalWrite(led1,HIGH);
else
digitalWrite(led1,LOW);
if(distance<=20 && distance>10)
digitalWrite(led2,HIGH);
else
digitalWrite(led2,LOW);
if(distance>=30 && distance<50)
digitalWrite(led3,HIGH);
else
digitalWrite(led3,LOW);
Serial.print("Distance: ");
Serial.println(distance);
} 
