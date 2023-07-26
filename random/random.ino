long randomValue;
void setup() {
  Serial.begin(9600);
}

void loop() {
  randomValue = random();
  Serial.println(randomValue);
  delay(1000);
  
  // !! random fonksiyonu ile oluşturulan değerler her zaman
  // !! aynı dizilimde olur. 

  //min max value 
  //random(minVal,maxVal);
  
  //max value
  //random(maxValue);
  
  //random fonksiyonuna parametre verilmez ise +
  //atanan değişken sınırlarında değer üretir.
}
