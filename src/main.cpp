#include <Arduino.h>
#include <MyLib.h>

#include "myinclude.h"

void setup() {
    Serial.begin(115200);
    int a = my_include_function();
    int b = my_lib_function();
    Serial.printf("a = %d\r\n", a);
    Serial.printf("b = %d\r\n", b);
}

void loop() {
    delay(10); // wokwi delay
}