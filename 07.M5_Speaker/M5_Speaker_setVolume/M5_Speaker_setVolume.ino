#include <M5Stack.h>

int volume;

void setup() {
    M5.begin();

    M5.Speaker.begin();

    volume = 5;
    
    M5.Speaker.setVolume(volume);
}

void loop() {
    M5.update();
    if(M5.BtnA.wasPressed()) {
        volume--;
        M5.Speaker.setVolume(volume);
        M5.Speaker.tone(261, 200);
    }

    if(M5.BtnB.wasPressed()) {
        volume = 5;
        M5.Speaker.setVolume(volume);
        M5.Speaker.tone(261, 200);
    }

    if(M5.BtnC.wasPressed()) {
        volume++;
        M5.Speaker.setVolume(volume);
        M5.Speaker.tone(261, 200);
    }
}