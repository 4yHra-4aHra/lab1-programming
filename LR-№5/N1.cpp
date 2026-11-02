#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  std::cout << std::setw(8) << 'x';
  std::cout << std::setw(10) << "sin(x)" << "\n";
  std::cout << std::string(20, '-') << "\n";

  std::cout << std::fixed << std::setprecision(4);

  for (int i = 0; i <= 10; ++i) {
    double x = i * M_PI / 10;
    double sin = std::sin(x);

    std::cout << std::setw(8) << x << std::setw(10) << sin << "\n";
  }

  return 0;
}