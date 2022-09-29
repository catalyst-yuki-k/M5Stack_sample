#include <M5Stack.h>

void setup() {
    M5.begin();

    //バックライトの明るさを0～255で指定
    M5.Lcd.setBrightness(255);

    //文字色を設定（文字背景色は透明）
    M5.Lcd.setTextColor(WHITE);

    //文字の大きさを1～7で指定
    M5.Lcd.setTextSize(1);
}

void loop() {
    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(0);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 0");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, PURPLE);

    delay(1000);

    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(1);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 1");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, NAVY);

    delay(1000);

    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(2);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 2");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, BLUE);

    delay(1000);

    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(3);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 3");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, GREEN);

    delay(1000);

    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(4);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 4");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, YELLOW);

    delay(1000);

    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(5);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 5");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, ORANGE);

    delay(1000);

    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(6);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 6");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, RED);

    delay(1000);

    M5.Lcd.clear(BLACK);

    M5.Lcd.setRotation(7);
    M5.Lcd.setCursor(10, 60);
    M5.Lcd.print("rotation mode is 7");
    M5.Lcd.fillTriangle(10, 10, 10, 50, 50, 50, WHITE);

    delay(1000);
}