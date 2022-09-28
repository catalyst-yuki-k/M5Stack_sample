#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //指定した座標から指定幅と指定高さの四角形を指定色で描画する
    //（X座標、Y座標、幅、高さ、線の色）
    M5.Lcd.drawRect(10, 10, 300, 220, GREEN);
}