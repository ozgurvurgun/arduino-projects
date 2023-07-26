int R=9;
int G=10;
int B=11;
 
void setup() {
    pinMode(R,OUTPUT);
    pinMode(G,OUTPUT);
    pinMode(B,OUTPUT);
}
 
void loop() {
    //anot devrede yanmasını istediğin pine 0 pwm sinyali gönderirsin
    //katot devrede yanmasını istediğin pine 0-255 arası pwm sinyali gönderirsin
    //burada analog çıkış alıyoruz. Arduino da pwm çıkışlarını kullanmalısın.
    analogWrite(R,255);
    analogWrite(G,0);
    analogWrite(B,255);
    delay(500);

    //200.162.200  --> "lila" rgb kodu
}