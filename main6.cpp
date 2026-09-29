#include <iostream>

int main() {
  std::cout << "Конвентер температур: \n";
  std::cout << "1. из °C в °F\n";
  std::cout << "2. из °F в °C\n";

  int choice;
  std::cout << "Ваш выбор: ";
  std::cin >> choice;

  if (choice == 1) {
    double fahr, cels;
    std::cout << "Введите температуру в °C: ";
    std::cin >> cels;

    fahr = cels * 9.0 / 5.0 + 32;
    std::cout << fahr;
  }

  if (choice == 2) {
    double fahr, cels;
    std::cout << "Введите температуру в °F: ";
    std::cin >> fahr;

    cels = (fahr - 32) * 5.0 / 9.0;
    std::cout << cels;
  }
}