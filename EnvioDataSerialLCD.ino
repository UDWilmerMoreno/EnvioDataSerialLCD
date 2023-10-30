#include <LiquidCrystal.h>

LiquidCrystal lcd(50, 48, 46, 44, 42, 40);	// pines RS, E, D4, D5, D6, D7 de modulo 1602A

void setup() {
  lcd.begin(16, 2);			// inicializa a display de 16 columnas y 2 lineas
  Serial.begin(115200);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Se envia: ");
  lcd.setCursor(0, 1);
  Serial.print("a\n");
  lcd.print("a");
  delay(3000);
  lcd.setCursor(0, 1);
  Serial.print("b\n");
  lcd.print("b");
  delay(3000);
}