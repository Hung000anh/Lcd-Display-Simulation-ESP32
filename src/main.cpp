#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x27  // Địa chỉ I2C mặc định của LCD

LiquidCrystal_I2C lcd(I2C_ADDR, 16, 2);  // Khai báo LCD1602 (16 cột, 2 dòng)

void setup() {
  Wire.begin(22, 21);  // Cấu hình SDA = D22, SCL = D21 cho ESP32
  lcd.init();       // Khởi tạo LCD
  lcd.backlight();  // Bật đèn nền LCD
  Serial.begin(115200);
  lcd.setCursor(0, 0);  // Đặt con trỏ tại cột 0, dòng 0
  lcd.print("Hi, My name is Anh!");

  lcd.setCursor(0, 1);  // Đặt con trỏ tại cột 0, dòng 1
  lcd.print("Hello world!");
}

void loop() {
  // Không cần thực hiện gì trong loop
}
