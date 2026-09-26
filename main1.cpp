#include <iostream>
#include <string>
#include <typeinfo>

int main() {
  int integer;
  double decimal;
  std::string str;

  std::cout << "\n";
  std::cout << "Введите целое число: ";
  std::cin >> integer;

  std::cout << "Введите дробное число: ";
  std::cin >> decimal;

  std::cin.ignore();

  std::cout << "Введите любое слово: ";
  std::getline(std::cin, str);

  std::cout << "\n";
  std::cout << integer << " - " << typeid(integer).name() << "\n";
  std::cout << decimal << " - " << typeid(decimal).name() << "\n";
  std::cout << str << " - " << typeid(str).name() << "\n";

  return 0;
}