#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(4);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(BLUE);

    M5.Lcd.printf("Hello world!");
}

void loop() {
}