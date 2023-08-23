byte led = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int ldr_sensor_data = analogRead(A0);
  Serial.println(ldr_sensor_data);

  if(ldr_sensor_data == 0)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  delay(100);
}