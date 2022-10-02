#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(2);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE,BLACK);
}

void loop() {
    //Aボタンが押されたら画面にメッセージを表示
    if(M5.BtnA.wasPressed()){
        M5.Lcd.setCursor(0, 0);
        M5.Lcd.println("button A is pressed");
    }

    //Bボタンが押されたら画面にメッセージを表示
    if(M5.BtnB.wasPressed()){
        M5.Lcd.setCursor(0, 0);
        M5.Lcd.println("button B is pressed");
    }

    //Cボタンが押されたら画面にメッセージを表示
    if(M5.BtnC.wasPressed()){
        M5.Lcd.setCursor(0, 0);
        M5.Lcd.println("button C is pressed");
    }

    //更新(ボタンを使う際は必要)
    M5.update();  
}