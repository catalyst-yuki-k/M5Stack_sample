#include <M5Stack.h>

void setup() {
    M5.begin();

    M5.Speaker.begin();
    
    M5.Speaker.setVolume(1);
}

void loop() {
    M5.update();

    if(M5.BtnA.wasPressed()) {
        M5.Speaker.tone(261, 200);
    }

    if(M5.BtnB.wasPressed()) {
        M5.Speaker.tone(293, 200);
    }

    if(M5.BtnC.wasPressed()) {
        M5.Speaker.tone(329, 100);
    }
}