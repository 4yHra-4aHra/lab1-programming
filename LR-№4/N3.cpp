#include <iostream>

int main() {
  // Создаю переменную и запрашиваю значение
  int age;
  std::cout << "Ваш возраст: ";
  std::cin >> age;

  std::cout << "\n";

  // Вывожу результат(Если < 0, вывожу непонимание, а в остальных случаях вывожу
  // то, кем является пользователь)
  if (age < 0) {
    std::cout << "Аче всмысле???";
  } else if (age < 13) {
    std::cout << "Вы ребенок";
  } else if (age < 18) {
    std::cout << "Вы подросток";
  } else if (age < 65) {
    std::cout << "Вы взрослый";
  } else {
    std::cout << "Вы старый";
  }

  return 0;
}
