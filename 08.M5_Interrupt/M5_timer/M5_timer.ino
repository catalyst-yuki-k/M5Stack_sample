#include<M5Stack.h>

hw_timer_t * timer = NULL;
volatile uint32_t counter = 0;
volatile uint32_t current_time = 0;

void onTimer(){
    counter++;
    current_time = millis();

    //画面クリア(黒で塗りつぶす)
    M5.Lcd.clear(BLACK);
    //文字列の位置を定義
    M5.Lcd.setCursor(0, 0);
    //文字列を表示
    M5.Lcd.printf("Time:%u, %u ms\n", counter, current_time);
}

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(2);

    // タイマ作成
    timer = timerBegin(0, 80, true);

    //タイマ割り込みサービス・ルーチン onTimer を登録
    timerAttachInterrupt(timer, &onTimer, true);

    //割り込みタイミング(ms)の設定
    timerAlarmWrite(timer, 100000, true);

    //タイマ有効化
    timerAlarmEnable(timer);
}

void loop() {
}