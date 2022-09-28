#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //指定した座標に文字を表示する
    //X座標、Y座標、文字コード、描画色、背景色、文字サイズ
    //X座標は左右方向で左端が0、右端が319
    //Y座標は上下方向で上端が0、下端が239
    M5.Lcd.drawChar(0,0,'A',RED,WHITE,3);
}