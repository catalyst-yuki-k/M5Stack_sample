#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //指定した座標から指定幅と指定高さの楕円を指定色で描画する
    //（X座標、Y座標、横軸半径、縦軸半径、線の色）
    M5.Lcd.drawEllipse(159, 119, 150, 110, GREEN);
}