#include <iostream>

int main() {
  int N;
  std::cout << "Сколько чисел желаете? ";
  std::cin >> N;

  int sum = 0;
  long long fac = 1;
  long long skv = 0;

  for (int i = 1; N >= i; ++i) {
    sum += i;
    fac *= i;
    skv += (i * i);
  }

  std::cout << "Сумма: " << sum << "\n";
  std::cout << "Факториал: " << fac << "\n";
  std::cout << "Сумма квадратов: " << skv << "\n";

  return 0;
}
