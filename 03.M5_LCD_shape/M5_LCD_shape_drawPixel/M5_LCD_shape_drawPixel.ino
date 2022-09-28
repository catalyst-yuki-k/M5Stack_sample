#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //X座標、Y座標、色(省略可能)
    //X座標は左右方向で左端が0、右端が319
    //Y座標は上下方向で上端が0、下端が239
    M5.Lcd.drawPixel(0, 0, RED);
    //色を省略した場合は白
    M5.Lcd.drawPixel(0, 239,YELLOW);
    M5.Lcd.drawPixel(319, 0, GREEN);
    //RGB指定も可能
    M5.Lcd.drawPixel(319, 239, 0x001F);
}