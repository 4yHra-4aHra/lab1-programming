#include "iostream"

auto factorial(int n) -> int {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  auto number{5};

  auto resf = factorial(number);

  std::cout << "\n" << std::endl;
  std::cout << "Число:" << number << std::endl;
  std::cout << "Факториал: " << resf << std::endl;

  return 0;
}
