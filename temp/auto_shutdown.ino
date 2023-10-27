#include <M5Unified.h>

void setup() {
  M5.begin();
  M5.Lcd.fillScreen(RED);
  delay(1000);
}
void loop() {
  M5.Power.powerOff();
}