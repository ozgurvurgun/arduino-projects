long analogValue;

void setup() {
    Serial.begin(9600);
}

void loop() {
    //analog pinler boş iken bu pinler üzerinden karmaşık
    //random değerler üretebiliriz. 
    // bu yötem ile 0-1023 arası değerler üretilir
    analogValue = analogRead(A0);
    Serial.println(analogValue);
    delay(1000);
}