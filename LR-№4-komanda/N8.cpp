#include <iostream>
#include <string>

int main() {
  int n;

  std::cout << "Введите номер месяца: ";
  std::cin >> n;

  std::string a = std::to_string(n % 12);
  if (a == "0" or a == "1" or a == "2") {
    std::cout << "Сезон - зима";
  } else if (a == "3" or a == "4" or a == "5") {
    std::cout << "Сезон - весна";
  } else if (a == "6" or a == "7" or a == "8") {
    std::cout << "Сезон - лето";
  } else if (a == "9" or a == "10" or a == "11") {
    std::cout << "Сезон - осень";
  } else {
    std::cout << "Ошибка - это не номер месяца";
  }

  return 0;
}
