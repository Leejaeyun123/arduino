// // I2C 주소값 코드

// #include <Wire.h>
// #include <Arduino.h>

// void setup() {
//   Wire.begin();
//   Serial.begin(115200);
//   Serial.println("I2C 스캔 시작");

//   for (byte address = 1; address < 127; address++) {
//     Wire.beginTransmission(address);
//     if (Wire.endTransmission() == 0) {
//       Serial.print("I2C 장치 발견: 0x");
//       Serial.println(address, HEX);
//     }
//   }

//   Serial.println("I2C 스캔 완료");
// }

// void loop() {}

// // 보드 IP 주소

// #include <Arduino.h>
// #include <ESP8266WiFi.h>

// const char* ssid = "YourSSID";
// const char* password = "YourPassword";

// void setup() {
//   Serial.begin(115200);
//   WiFi.begin(ssid, password);

//   // WiFi 연결 대기
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }

//   // 연결 완료 후 IP 출력
//   Serial.println("\nWiFi 연결 완료!");
//   Serial.print("ESP IP 주소: ");
//   Serial.println(WiFi.localIP());
// }

// void loop() {
//   // 아무 작업 없음
// }


