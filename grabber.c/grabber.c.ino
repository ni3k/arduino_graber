#include <Keyboard.h> 
/*
* Thankyou For Using Me. 
* Follow my Developer @root_haxor 
*/

void copy()
{
 
}

void setup() {
  Keyboard.begin();
delay(3000);
    
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
delay(500);
Keyboard.release(KEY_LEFT_GUI);
Keyboard.release('r');
delay(1000);
Keyboard.print("cmd");
Keyboard.write('\n');
delay(300);
Keyboard.print("E:\\autocopy.bat");
delay(700);
Keyboard.write('\n');
Keyboard.end();
}
void loop(){}
