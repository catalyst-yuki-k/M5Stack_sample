#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(1);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x0000,0xFFFF);
    M5.Lcd.println("BLACK");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x000F,0xFFFF);
    M5.Lcd.println("NAVY");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x03E0,0xFFFF);
    M5.Lcd.println("DARKGREEN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x7800,0xFFFF);
    M5.Lcd.println("MAROON");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x780F,0xFFFF);
    M5.Lcd.println("PURPLE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x7BE0,0xFFFF);
    M5.Lcd.println("OLIVE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xC618,0xFFFF);
    M5.Lcd.println("LIGHTGREY");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x7BEF,0xFFFF);
    M5.Lcd.println("DARKGREY");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x001F,0xFFFF);
    M5.Lcd.println("BLUE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xB7E0,0xFFFF);
    M5.Lcd.println("GREENYELLOW");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x07E0,0xFFFF);
    M5.Lcd.println("GREEN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xFFE0,0xFFFF);
    M5.Lcd.println("YELLOW");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xFDA0,0xFFFF);
    M5.Lcd.println("ORANGE");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xFC9F,0xFFFF);
    M5.Lcd.println("PINK");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x07FF,0xFFFF);
    M5.Lcd.println("CYAN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0x03EF,0xFFFF);
    M5.Lcd.println("DARKCYAN");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xF800,0xFFFF);
    M5.Lcd.println("RED");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xF81F,0xFFFF);
    M5.Lcd.println("MAGENTA");

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(0xFFFF,0x0000);
    M5.Lcd.println("WHITE");
}

void loop() {
}