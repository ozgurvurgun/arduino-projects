const int solDugme=2, sagDugme=3, sariLed=4, maviLed=5, motorKontrolPin=6;
int ayar = 0;
void setup() {
  pinMode(solDugme, INPUT);
  pinMode(sagDugme, INPUT);
  pinMode(sariLed, OUTPUT);
  pinMode(maviLed, OUTPUT);
  pinMode(motorKontrolPin, OUTPUT);
}

void loop() {
  ayar = map(analogRead(A0),0,1023,0,255);
  if(digitalRead(solDugme) == false && digitalRead(sagDugme) == false)
  {
    analogWrite(motorKontrolPin, ayar);
    digitalWrite(sariLed, LOW);
    digitalWrite(maviLed, LOW);
    analogWrite(maviLed, ayar);
  }
  else
  {
    while(digitalRead(solDugme) == true && digitalRead(sagDugme) == false)
    {
      analogWrite(motorKontrolPin, 128);
      digitalWrite(sariLed, HIGH);
      digitalWrite(maviLed, LOW);
    }

    while(digitalRead(solDugme) == false && digitalRead(sagDugme) == true)
    {
      analogWrite(motorKontrolPin, 255);
      digitalWrite(sariLed, LOW);
      digitalWrite(maviLed, HIGH);
    }
  }
}