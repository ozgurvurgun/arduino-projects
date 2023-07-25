void setup() {
  Serial.begin(9600);
  Serial.println("setup scope , hello\n\n");
}

void loop() {
  Serial.println("loop scope, hello");
  delay(1000);
}