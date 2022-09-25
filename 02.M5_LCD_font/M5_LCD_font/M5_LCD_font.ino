#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(1);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(BLACK,WHITE);
    //文字の表示
    M5.Lcd.print("Hello ");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE,BLACK);
    //文字の表示(改行)
    M5.Lcd.println("World!");
}

void loop() {
}