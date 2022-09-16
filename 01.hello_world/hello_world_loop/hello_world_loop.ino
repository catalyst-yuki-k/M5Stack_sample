#include <M5Stack.h>

void setup() {
    M5.begin();
}

void loop() {
    M5.Lcd.printf("Hello world!");
}