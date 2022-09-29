#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);
}

void loop() {
    //画面クリア(黒で塗りつぶす)
    M5.Lcd.clear(BLACK);

    //表示モード通常
    M5.Lcd.invertDisplay(true);

    //塗りつぶした四角形を表示
    M5.Lcd.fillRect(10, 10, 300, 220, WHITE);

    //1000ms待機
    delay(1000);

    //画面クリア(黒で塗りつぶす)
    M5.Lcd.clear(BLACK);

    //表示モード反転
    M5.Lcd.invertDisplay(false);

    //塗りつぶした四角形を表示
    M5.Lcd.fillRect(10, 10, 300, 220, WHITE);

    //1000ms待機
    delay(1000);
}