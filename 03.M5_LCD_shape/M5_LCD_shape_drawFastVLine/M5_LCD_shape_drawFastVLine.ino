#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //指定した座標から下に向かって指定した長さの直線を引く
    //（始点のX座標、始点のY座標、線の長さ、線の色）
    M5.Lcd.drawFastVLine(159, 10, 220, GREEN);
}