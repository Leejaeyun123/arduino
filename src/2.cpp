// 내장 LED를 1초 간격으로 깜빡이는 프로그램

/*#include <Arduino.h>

int ledPin = LED_BUILTIN; // LED_BUILTIN은 보드에 따라 내장 LED에 연결된 GPIO 핀 번호. WeMos D1 mini에서는 GPIO2 (D4), Arduino UNO에서는 13번. int ledPin = 13 or D4;로 입력 가능 

void setup()
{
    pinMode(ledPin, OUTPUT);    // 내장 LED 핀을 **출력 모드(OUTPUT)**로 설정
}

void loop()
{
    digitalWrite(ledPin, HIGH); // 핀에 전압을 출력하여 LED를 켬
    delay(1000);    // 1초(1000ms) 동안 대기
    digitalWrite(ledPin, LOW);  // 핀 전압을 0V로 설정 → LED 꺼짐
    delay(1000);
}*/



