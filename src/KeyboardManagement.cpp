#include "KeyboardManagement.h"
#include <Arduino.h>
#include <BleKeyboard.h>

#define COLUMNS 14
#define ROWS 5
BleKeyboard bleKeyboard("Zro's Keyboard", "ZroIsHere", 100);

/*uint8_t keys[ROWS][COLUMNS] = {
  {KEY_ESC, KEY_NUM_1, KEY_NUM_2, KEY_NUM_3, KEY_NUM_4, KEY_NUM_5, KEY_NUM_6, KEY_NUM_7, KEY_NUM_8, KEY_NUM_9, KEY_NUM_0, "'", "¡", "DELETE", "macro1"},
  {KEY_TAB, "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "`", "+", "ç", "macro2"},
  {KEY_CAPS_LOCK, "a", "s", "d", "f", "g", "h", "j", "k", "l", "ñ", "´", "ENTER", "macro3"},
  {KEY_LEFT_SHIFT, "z", "x", "c", "v", "b", "n", "m", "<", ",", ".", KEY_RIGHT_SHIFT, KEY_UP_ARROW, "macro4"},
  {KEY_LEFT_CTRL, KEY_LEFT_GUI, KEY_LEFT_ALT, "SPACE", KEY_RIGHT_ALT, "-", KEY_RIGHT_CTRL, KEY_LEFT_ARROW, KEY_DOWN_ARROW, KEY_RIGHT_ARROW}
};*/

KeyboardManagement::KeyboardManagement(){

}

void KeyboardManagement::Setup() {
    bleKeyboard.begin();
    bleKeyboard.setDelay(3);
}

void KeyboardManagement::Loop() {
    if(!bleKeyboard.isConnected()) {
      #ifdef DEBUG
      Serial.println("Keyboard not connected to any device. Pair it");
      #endif
      //Led blink
      delay(3000);
      return;
    }
    /*
     * If ctrl/shift/alt...
     * bleKeyboard.press(KEY_LEFT_CTRL)
     * 
     * important than check is pressed all times and remove it with:
     * bleKeyboard.release(KEY_LEFT_CTRL) or bleKeyboard.releaseAll()
     * 
     * bleKeyboard.print("Hello world") print it instantly
     * 
     * bleKeyboard.write(KEY_RETURN) for single key press
     * 
     * bleKeyboard.setBatteryLevel(50)
    */
}