#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(1);
    M5.Lcd.println("Hello!");

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(2);
    M5.Lcd.println("Hello!");

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(3);
    M5.Lcd.println("Hello!");

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(4);
    M5.Lcd.println("Hello!");

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(5);
    M5.Lcd.println("Hello!");

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(6);
    M5.Lcd.println("Hello!");

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(7);
    M5.Lcd.println("Hello!");
}

void loop() {
}