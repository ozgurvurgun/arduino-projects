long randomValue;
void setup() {
  Serial.begin(9600);
  randomSeed(200);

  // randomSeed fonksiyonu ile oluşturulan değerlerin
  // dizilimini değiştirebiliriz
}

void loop() {
  randomValue = random(1,100);
  Serial.println(randomValue);
  delay(1000);
}
