#include "DigiKeyboardDe.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboardDe.delay(2000);
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print("https://youtu.be/dQw4w9WgXcQ?t=43s");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print("http://fakeupdate.net/win10ue");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(750);
  DigiKeyboardDe.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
