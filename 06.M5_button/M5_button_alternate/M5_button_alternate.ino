#include <M5Stack.h>

//ボタン用のブール値
bool button_a_bool;
bool button_b_bool;
bool button_c_bool;

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

    //ボタン用のブール値の初期化
    button_a_bool = 0;
    button_b_bool = 0;
    button_c_bool = 0;
}

void loop() {
    //画面クリア(黒で塗りつぶす)
    M5.Lcd.clear(BLACK);

    //Aボタンが押されたら選択アイテムを変更
    if(button_a_bool == 0){//ボタンAがOFF表示
        //BoolがONの場合は枠をOFF表示に切り替える
        M5.Lcd.setCursor(0, 0);
        M5.Lcd.println("button A is OFF");
        //Boolを切り替える
        if(M5.BtnA.wasPressed()){
            button_a_bool = 1;
        }
    }else{//ボタンAがON表示
        //BoolがOFFの場合は枠をON表示に切り替える
        M5.Lcd.setCursor(0, 0);
        M5.Lcd.println("button A is ON");
        //Boolを切り替える
        if(M5.BtnA.wasPressed()){
            button_a_bool = 0;
        }
    }

    //Bボタンが押されたら選択アイテムを変更
    if(button_b_bool == 0){//ボタンBがOFF表示
        //BoolがONの場合は枠をOFF表示に切り替える
        M5.Lcd.setCursor(0, 20);
        M5.Lcd.println("button B is OFF");
        //Boolを切り替える
        if(M5.BtnB.wasPressed()){
            button_b_bool = 1;
        }
    }else{//ボタンBがON表示
        //BoolがOFFの場合は枠をON表示に切り替える
        M5.Lcd.setCursor(0, 20);
        M5.Lcd.println("button B is ON");
        //Boolを切り替える
        if(M5.BtnB.wasPressed()){
            button_b_bool = 0;
        }
    }

    //Cボタンが押されたら選択アイテムを変更
    if(button_c_bool == 0){//ボタンCがOFF表示
        //BoolがONの場合は枠をOFF表示に切り替える
        M5.Lcd.setCursor(0, 40);
        M5.Lcd.println("button C is OFF");
        //Boolを切り替える
        if(M5.BtnC.wasPressed()){
            button_c_bool = 1;
        }
    }else{//ボタンCがON表示
        //BoolがOFFの場合は枠をON表示に切り替える
        M5.Lcd.setCursor(0, 40);
        M5.Lcd.println("button C is ON");
        //Boolを切り替える
        if(M5.BtnC.wasPressed()){
            button_c_bool = 0;
        }
    }

    //更新(ボタンを使う際は必要)
    M5.update();  
}