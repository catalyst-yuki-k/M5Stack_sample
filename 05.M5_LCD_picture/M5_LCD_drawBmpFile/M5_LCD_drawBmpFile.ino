#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    //SDカード内のビットマップ画像(BMP)を表示する
    //（デバイス、画像ファイル名、X座標、Y座標）
    M5.Lcd.drawBmpFile(SD, "/img.bmp",60, 20);
}