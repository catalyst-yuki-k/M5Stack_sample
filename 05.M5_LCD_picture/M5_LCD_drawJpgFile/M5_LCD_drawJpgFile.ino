#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //SDカード内のビットマップ画像(BMP)を表示する
    //（デバイス、ファイルパス、X座標、Y座標、最大幅、最大高さ、X軸オフセット値、Y軸オフセット値、スケール）
    M5.Lcd.drawJpgFile(SD, "/img.jpg", 60, 20, 0, 0, 0, 0, JPEG_DIV_NONE);
}