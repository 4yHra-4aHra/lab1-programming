#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cout << "Введите предложение: ";
  std::getline(std::cin, str);

  std::cout << "Длина: " << str.length() << "\n";

  std::string upper = str;
  std::transform(upper.begin(), upper.end(), upper.begin(),
                 [](unsigned char c) { return std::toupper(c); });
  std::cout << "Верхний рег: " << upper << "\n";

  std::string lower = str;
  std::transform(lower.begin(), lower.end(), lower.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  std::cout << "Нижний рег: " << lower << "\n";

  std::cout << "Первый символ: " << str.front() << "\n";
  std::cout << "Последний символ: " << str.back() << "\n";

  int spaces = std::count(str.begin(), str.end(), ' ');
  std::cout << "Количество пробелов: " << spaces << "\n";

  return 0;
}