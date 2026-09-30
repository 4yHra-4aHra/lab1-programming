#include <iomanip>
#include <iostream>

int main() {
  // Добавляем переменные
  int choice;
  double usd;
  double rub;
  double eur;

  // Выводим название программы и выбор между переводом из USD в RUB
  std::cout << "\nКонвертер валют: \n";
  std::cout << "1. Из USD в RUB \n";
  std::cout << "2. Из RUB в USD \n";
  std::cout << "3. Из EUR в RUB \n";
  std::cout << "4. Из RUB в EUR \n";

  std::cout << "Ваш выбор: ";
  std::cin >> choice;

  // Условия
  if (choice == 1) {
    std::cout << "Валюта в USD: ";
    std::cin >> usd;
    rub = usd * 84.41;
    std::cout << "RUB -> " << rub;
  }

  else if (choice == 3) {
    std::cout << "Валюта в EUR: ";
    std::cin >> eur;
    rub = eur * 96.25;
    std::cout << "RUB -> " << rub;
    rub;
  }

  else if (choice == 2) {
    std::cout << "Валюта в RUB: ";
    std::cin >> rub;
    usd = rub / 84.41;
    std::cout << "USD -> " << usd;
  }

  else if (choice == 4) {
    std::cout << "Валюта в RUB: ";
    std::cin >> rub;
    eur = rub / 96.25;
    std::cout << "EUR -> " << eur;
  }

  // Для особо одаренных, кто из 4 пунктов, выбирает 5 или больше))))))
  else {
    std::cout << "Are you seriosly???";
  }

  return 0;
}