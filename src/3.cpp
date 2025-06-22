#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // 보통 D4에 연결된 내장 LED
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // LED ON
  Serial.println(HIGH);
  delay(1000); // 1초 대기
  digitalWrite(LED_BUILTIN, LOW);  // LED OFF
  Serial.println(LOW);
  delay(1000); // 1초 대기
}