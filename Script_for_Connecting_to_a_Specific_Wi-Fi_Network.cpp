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

  // Ввод команд для подключения к Wi-Fi
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

  // Подключение к Wi-Fi
  Keyboard.print("netsh wlan connect name=YourWiFiSSID");
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
