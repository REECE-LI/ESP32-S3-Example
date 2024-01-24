#include <Arduino.h>
#include "can_esp.h"
#include "shellfunc.h"

void setup() {
// write your initialization code here
    Serial.begin(115200);
    shell.attach(Serial);
    shellInit();
}

void loop() {
// write your code here
//    Serial.println("Hello World!");
    shell.executeIfInput();
    delay(10);
}