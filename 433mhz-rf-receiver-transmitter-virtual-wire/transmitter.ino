#include <VirtualWire.h>
char *message;
int buttonPin = 3;
int buttonStatus;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

  vw_set_ptt_inverted(true);
  vw_set_tx_pin(2);
  vw_setup(4000);
}

void loop(){
  buttonStatus = digitalRead(buttonPin);
  if(buttonStatus == HIGH)
  {
    message = "1";
  }
  else
  {
    message = "0";
  }
  Serial.println(message);
  vw_send((uint8_t *)message,strlen(message));
  vw_wait_tx();
  delay(100);
}