#include <M5Stack.h>

void setup() {
    M5.begin();
    //QRコードを生成する
    //（QRコード化する文字列、X座標、Y座標、幅、QRコードバージョン）
    M5.Lcd.qrcode("https://github.com/catalyst-yuki-k",60,20,200,6);
}

void loop() {
    ;
}