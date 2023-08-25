#include <Servo.h>

const byte buzzerPin = 4;
const byte trigPin = 6;
const byte echoPin = 7;
const byte ServoPin = 5;
long timeVal;
int distance;

Servo servo_motor_1;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  servo_motor_1.attach(ServoPin);
}

void loop() {
  for(int location=15; location<=165; location++)
  {
    servo_motor_1.write(location);
    delay(150);
    distance = distanceCalculate();
    dataView(location, distance);
    if(distance <= 25)
    {
      digitalWrite(buzzerPin, HIGH);
      delay(100);
      digitalWrite(buzzerPin, LOW);
      delay(100);
    }
  }

  for(int location=164; location>15; location--)
  {
    servo_motor_1.write(location);
    delay(150);
    distance = distanceCalculate();
    dataView(location, distance);
    if(distance <= 25)
    {
      digitalWrite(buzzerPin, HIGH);
      delay(100);
      digitalWrite(buzzerPin, LOW);
      delay(100);
    }
  }

}

int distanceCalculate(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  timeVal = pulseIn(echoPin, HIGH);
  distance = timeVal/2*0.034;
  return distance;
}

void dataView(int location, int distance){
  Serial.print("Konum (Derece): ");
  Serial.print(location);
  Serial.print("---");
  Serial.print("Mesafe: ");
  Serial.println(distance);
}
