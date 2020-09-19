#include <Arduino.h>
//シリアル通信
void setup() {
  Serial.begin(115000);
}

void loop() {
  //PIEN
  Serial.println("ぴえん");
}