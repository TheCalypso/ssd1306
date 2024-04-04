#include "mbed.h"
#include "ssd1306.h"

SSD1306 lcd (D4, D5);
//AnalogIn knob (A0);

int main(){
    lcd.speed(SSD1306::Medium);
    lcd.init();
    lcd.cls();
    lcd.locate(3,1);
    lcd.printf("Hello World!");
    lcd.line(6,22,114,22,SSD1306::Normal);
    lcd.line(114, 22, 114, 33, SSD1306::Normal);
    lcd.line(114, 33, 6, 33, SSD1306::Normal);
    lcd.line(6, 33, 6, 22, SSD1306::Normal);
    //lcd.fill(0,0);
    lcd.redraw();
    while (1) {
        //unsigned char level = 255 * knob.read();
        lcd.set_contrast(128);
        thread_sleep_for(20);
    }
}