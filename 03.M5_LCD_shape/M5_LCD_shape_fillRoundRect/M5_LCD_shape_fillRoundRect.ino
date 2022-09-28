#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //指定した座標から指定幅と指定高さの角丸の四角形を指定色で描画する
    //（X座標、Y座標、幅、高さ、角丸の半径、線の色）
    M5.Lcd.fillRoundRect(10, 10, 300, 220, 10, GREEN);
}