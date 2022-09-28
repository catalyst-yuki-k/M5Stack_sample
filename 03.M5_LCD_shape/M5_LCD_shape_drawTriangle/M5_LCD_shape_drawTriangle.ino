#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //指定した3点を結ぶ三角形を指定色で描画する
    //（１つ目の点のX座標、１つ目の点のY座標、２つ目の点のX座標、２つ目の点のY座標、３つ目の点のX座標、３つ目の点のY座標、線の色）
    M5.Lcd.drawTriangle(159, 10, 10, 229, 309, 229, GREEN);
}