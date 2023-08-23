const int red = 3;
const int pir_sensor = 2;
const int buzzer = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(pir_sensor, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if(digitalRead(pir_sensor) == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(red, HIGH);
  }
  else
  {  
    digitalWrite(buzzer, LOW);
    digitalWrite(red, LOW);
  }
}