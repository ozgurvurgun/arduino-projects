long randomValue;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  randomValue = random(1,100);
  Serial.println(randomValue);
  delay(1000);
}
