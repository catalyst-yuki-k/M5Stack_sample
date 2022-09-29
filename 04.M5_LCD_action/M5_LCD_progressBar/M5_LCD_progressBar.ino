#include <M5Stack.h>

//プログレスバーのパーセンテージの変数を定義
int i;

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(2);

    //プログレスバーのパーセンテージの変数を初期化
    i=0;
}

void loop() {
    if(i<100){
        //画面クリア(黒で塗りつぶす)
        M5.Lcd.clear(BLACK);
        //プログレスバーを表示する
        //(X座標、Y座標、幅、高さ、パーセンテージ)
        M5.Lcd.progressBar(10,110,300,20, i);
        //文字列の最初の文字の表示位置を指定
        M5.Lcd.setCursor(10, 140);
        //文字列を表示
        M5.Lcd.printf("Now loading... %3d%%", i);
        //プログレスバーのパーセンテージの変数をインクリメント
        i=i+1;
        //100ms待機
        delay(100);
    }else{
        //画面クリア(黒で塗りつぶす)
        M5.Lcd.clear(BLACK);
        //(X座標、Y座標、幅、高さ、パーセンテージ)
        M5.Lcd.progressBar(10,110,300,20, i);
        //文字列の最初の文字の表示位置を指定
        M5.Lcd.setCursor(10, 140);
        //文字列を表示
        M5.Lcd.printf("Complete!      %3d%%", i);
        //プログレスバーのパーセンテージの変数を初期化
        i=0;
        //3000ms待機
        delay(3000);
    }
}