#include <LiquidCrystal.h>
/*
 * LCD GND-VSS  -> Toprak Hattı
 * LCD VCC-VDD  -> 5 Volt
 * LCD V0       -> Ayarli Direnc Cikisi (Kontrast Ayari)
 * LCD RS       -> 12. Pin (Register Secimi Komut:0 Data:5V)
 * LCD R/W      -> Toprak Hatti (Oku:1 - Yaz:0 Sinyali)
 * LCD E        -> 11. Pin (E: Enabled)
 
 * LCD D4 -> Arduino'nun 5. Pini 
 * LCD D5 -> Arduino'nun 4. Pini
 * LCD D6 -> Arduino'nun 3. Pini
 * LCD D7 -> Arduino'nun 2. Pini
 
 * LCD LED - A  -> 5 Volt (220 Ohm Direnç)  (A: Anot)  
 * LCD LED - K  -> Toprak Hatti             (K: Katot)
*/

/* LCD ekranin baglandigi arduino pinleri */
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  /* LCD ekranin sutun ve satir sayisinin tanimlanmasi */
  lcd.begin(16, 2);
  /* Ekrana veri yazilmasi */
  lcd.print("Hello World");
}
 
void loop() {
  /* imlec konumu: 1. satir 0. sutun */
  lcd.setCursor(0, 1);
  /* arduino calisma suresini saniye cinsinden LCD'ye yazma */
  lcd.print(millis());
  delay(10);
}