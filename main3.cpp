#include <iomanip>
#include <iostream>

int main() {
  int time;

  std::cout << "\n";
  std::cout << "Введите время в секундах: ";
  std::cin >> time;

  int h = time / 3600;
  int m = (time % 3600) / 60;
  int s = time % 60;

  std::cout << std::setfill('0') << std::setw(2) << h << ":" << std::setw(2)
            << m << ":" << std::setw(2) << s;

  return 0;
}