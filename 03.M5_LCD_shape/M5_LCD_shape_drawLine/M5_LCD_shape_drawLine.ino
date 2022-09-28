#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //指定した座標から指定した座標に向かって直線を引く
    //（始点のX座標、始点のY座標、終点のX座標、終点のY座標、線の色）
    M5.Lcd.drawLine(10, 10, 309, 229, GREEN);
}