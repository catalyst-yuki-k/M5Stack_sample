#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(1);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(BLACK,WHITE);
    M5.Lcd.println("BLACK");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(NAVY,WHITE);
    M5.Lcd.println("NAVY");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(DARKGREEN,WHITE);
    M5.Lcd.println("DARKGREEN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(MAROON,WHITE);
    M5.Lcd.println("MAROON");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(PURPLE,WHITE);
    M5.Lcd.println("PURPLE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(OLIVE,WHITE);
    M5.Lcd.println("OLIVE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(LIGHTGREY,WHITE);
    M5.Lcd.println("LIGHTGREY");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(DARKGREY,WHITE);
    M5.Lcd.println("DARKGREY");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(BLUE,WHITE);
    M5.Lcd.println("BLUE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(GREENYELLOW,WHITE);
    M5.Lcd.println("GREENYELLOW");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(GREEN,WHITE);
    M5.Lcd.println("GREEN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(YELLOW,WHITE);
    M5.Lcd.println("YELLOW");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(ORANGE,WHITE);
    M5.Lcd.println("ORANGE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(PINK,WHITE);
    M5.Lcd.println("PINK");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(CYAN,WHITE);
    M5.Lcd.println("CYAN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(DARKCYAN,WHITE);
    M5.Lcd.println("DARKCYAN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(RED,WHITE);
    M5.Lcd.println("RED");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(MAGENTA,WHITE);
    M5.Lcd.println("MAGENTA");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE,BLACK);
    M5.Lcd.println("WHITE");
}

void loop() {
}