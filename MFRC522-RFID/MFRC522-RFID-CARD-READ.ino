#include <MFRC522.h>
#include <SPI.h>
MFRC522 mfrc522(10, 9);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("Kartı yaklaştır.");
  Serial.println();
}

void loop() {
  if(!mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  if(!mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  Serial.print("UID Etiketi: ");
  String cardId = "";
  for(byte i=0; i<mfrc522.uid.size; i++)
  {
    cardId.concat(String(mfrc522.uid.uidByte[i],HEX));
  }
  cardId.toUpperCase();
  Serial.println(cardId);
}