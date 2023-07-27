int trigPin=9;
int echoPin=10;
long timeVal;
long lengthVal;

void setup() {
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
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

    Serial.print("Sinyal: ");
    Serial.print(timeVal);
    Serial.println(" hareket etti.");

    Serial.print("Mesafe: ");
    Serial.print(lengthVal);
    Serial.println(" CM");

    delay(1000);
}