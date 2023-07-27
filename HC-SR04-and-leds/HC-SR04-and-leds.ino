int redLed=2, greenLed =3, yellowLed=4, blueLed=5, whiteLed=6;
int trigPin=9, echoPin=10;
long timeVal, lengthVal;

void setup() {
    pinMode(echoPin,INPUT);
    pinMode(trigPin,OUTPUT);
    pinMode(redLed,OUTPUT);
    pinMode(greenLed,OUTPUT);
    pinMode(yellowLed,OUTPUT);
    pinMode(blueLed,OUTPUT);
    pinMode(whiteLed,OUTPUT);

    Serial.begin(9600);
}
 
void loop() {
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin,LOW);
    timeVal = pulseIn(echoPin,HIGH);
    lengthVal = (timeVal/2)/29.154;

    Serial.print("Mesafe: ");
    Serial.print(lengthVal);
    Serial.println(" CM");

    if(lengthVal <= 50){
      digitalWrite(redLed,HIGH);
      digitalWrite(greenLed,LOW);
      digitalWrite(yellowLed,LOW);
      digitalWrite(blueLed,LOW);
      digitalWrite(whiteLed,LOW);
    }
    
    else if(lengthVal <= 100){
      digitalWrite(redLed,LOW);
      digitalWrite(greenLed,HIGH);
      digitalWrite(yellowLed,LOW);
      digitalWrite(blueLed,LOW);
      digitalWrite(whiteLed,LOW);
    }
    
    else if(lengthVal <= 150){
      digitalWrite(redLed,LOW);
      digitalWrite(greenLed,LOW);
      digitalWrite(yellowLed,HIGH);
      digitalWrite(blueLed,LOW);
      digitalWrite(whiteLed,LOW);
    }

    else if(lengthVal <= 200){
      digitalWrite(redLed,LOW);
      digitalWrite(greenLed,LOW);
      digitalWrite(yellowLed,LOW);
      digitalWrite(blueLed,HIGH);
      digitalWrite(whiteLed,LOW);
    }

    else if(lengthVal <= 250){
      digitalWrite(redLed,LOW);
      digitalWrite(greenLed,LOW);
      digitalWrite(yellowLed,LOW);
      digitalWrite(blueLed,LOW);
      digitalWrite(whiteLed,HIGH);
    }

    else{
      digitalWrite(redLed,LOW);
      digitalWrite(greenLed,LOW);
      digitalWrite(yellowLed,LOW);
      digitalWrite(blueLed,LOW);
      digitalWrite(whiteLed,LOW);
    }
    delay(250);
}