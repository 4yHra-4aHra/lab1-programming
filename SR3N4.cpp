// Ввожу необходимые библиотеки
#include <iostream>
#include <string>

int main() {
  // Ввожу переменные
  int year, month, day;
  int y_bd, m_bd, d_bd;

  // Запращиваю необходимые данные
  std::cout << "\nВведите текущий год: ";
  std::cin >> year;

  std::cout << "Введите текущий месяц: ";
  std::cin >> month;

  std::cout << "Введите текущий день: ";
  std::cin >> day;

  std::cout << "\nВаш год рождения: ";
  std::cin >> y_bd;

  std::cout << "Ваш месяц рождения: ";
  std::cin >> m_bd;

  std::cout << "Ваш день рождения(только день): ";
  std::cin >> d_bd;

  // Высчитываю и проверяю условия
  int kol_let = year - y_bd;

  if (month - m_bd == 0) {
    if (day - d_bd < 0) {
      kol_let -= 1;
    }
  }

  if (month - m_bd < 0) {
    kol_let -= 1;
  }

  // Вывожу результат
  std::cout << "\nВам -> " << kol_let << " лет";

  return 0;
}