#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  // Задаю переменным тип данных double
  double a, b;

  // Перед тем, как запрашивать переменные у пользователя, ввожу пустую строку
  // для удобства
  std::cout << "\n";
  std::cout << "Введите первое число: ";
  std::cin >> a;
  std::cout << "Введите второе число: ";
  std::cin >> b;

  // Базовые арифметические операции
  std::cout << "Сложение - " << a + b << "\n";
  std::cout << "Вычитание - " << a - b << "\n";
  std::cout << "Умножение - " << a * b << "\n";
  std::cout << "Деление - " << a / b << "\n";

  // Ввожу пустую строку чтобы разделить обычные преобразования чисел, от
  // необычных.
  std::cout << "\n";
  std::cout << "Деление нацело - " << static_cast<int>(a) / static_cast<int>(b)
            << "\n";
  std::cout << "Остаток - " << std::fmod(a, b) << "\n";
  std::cout << "Степень - " << std::pow(a, b) << "\n";
}
