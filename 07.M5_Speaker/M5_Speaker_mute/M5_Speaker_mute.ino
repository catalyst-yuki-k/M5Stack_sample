#include <M5Stack.h>

void setup() {
    M5.begin();

    M5.Speaker.begin();

    M5.Speaker.setVolume(1);

    M5.Speaker.beep();
    delay(1000);
    M5.Speaker.mute();
}

void loop(){
}