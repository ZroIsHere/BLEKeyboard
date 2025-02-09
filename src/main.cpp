#include <Arduino.h>
#include "KeyboardManagement.h"

#define DEBUG

KeyboardManagement keyboardManagement;

void setup() {
  #ifdef DEBUG
  Serial.begin(115200);
  Serial.println("Starting keyboard");
  #endif
  
  keyboardManagement.Setup();
}

void loop() {
  keyboardManagement.Loop();
  delay(1);
}