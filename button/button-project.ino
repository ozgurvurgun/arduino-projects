int button = 2;
int yellow_led = 4;
int green_led = 5;
int red_led = 6;
void setup()
{
  pinMode(button, INPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
}

void loop()
{
  if(digitalRead(button)){
    digitalWrite(yellow_led, HIGH);
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, HIGH);
  }
  else{
    digitalWrite(yellow_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led, LOW);
  }
  delay(1000);
}