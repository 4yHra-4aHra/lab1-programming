#include <iostream>

int main() {
  // Создаю переменную и запрашиваю значение
  int year;
  std::cout << "Год: ";
  std::cin >> year;

  // Проверяю високосный ли год или нет
  if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)) {
    std::cout << "Ваш год -> високосный";
  } else {
    std::cout << "Ваш год -> не високосный";
  }

  return 0;
}
