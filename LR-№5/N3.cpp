#include <iostream>

int main() {
  int N;
  std::cout << "Введите количество чисел Фибоначчи: ";
  std::cin >> N;

  long long a = 0;
  long long b = 1;
  for (int i = 0; N > i; ++i) {
    std::cout << a << ' ';
    long long temp = a + b;
    a = b;
    b = temp;
  }
  return 0;
}
