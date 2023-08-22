int sensor_pin = 2;
int blue_led = 3;
int yellow_led = 4;
int red_led = 5;

void setup() {
  pinMode(sensor_pin, INPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  Serial.begin(9600);
  
}
 
void loop() {
  int sensorData = digitalRead(sensor_pin);
  if(sensorData == LOW)
  {
    Serial.println("Alkış algılandı");
    digitalWrite(blue_led, HIGH);
    digitalWrite(yellow_led, HIGH);
    digitalWrite(red_led, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(blue_led, LOW);
    digitalWrite(yellow_led, LOW);
    digitalWrite(red_led, LOW);
  }
}