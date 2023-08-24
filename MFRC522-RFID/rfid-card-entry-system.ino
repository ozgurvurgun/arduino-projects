#include <MFRC522.h>
#include <SPI.h>
MFRC522 mfrc522(10, 9);

void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("Kartı yaklaştır.");
  Serial.println();
 
}

void loop() {
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
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

  if(cardId == "cardNo" || cardId == "cardNo2")
  {
     authorizedAccess();
  }
  else
  {
    unauthorizedAccess();
  }
}

void authorizedAccess(){
  Serial.println();
  Serial.println("Mesaj: Yetkili Erişim.");
  digitalWrite(6, HIGH);
  for(byte i=0; i<3; i++)
  {
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
    delay(200);
  }
}

void unauthorizedAccess(){
  Serial.println();
  Serial.println("Mesaj: Yetkisiz Erişim !");
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   delay(1000);
}