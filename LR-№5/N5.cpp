#include <iostream>

int main() {
  int num;
  std::cout << "Ввевдите число: ";
  std::cin >> num;

  int size = 0;
  int sum = 0;
  int pr = 1;
  int revers = 0;

  while (num > 0) {
    int dig = num % 10;
    size += 1;
    sum += dig;
    pr *= dig;
    revers = revers * 10 + dig;
    num /= 10;
  }

  std::cout << "Количество цифр: " << size << "\n";
  std::cout << "Сумма цифр: " << sum << "\n";
  std::cout << "Произведение цифр: " << pr << "\n";
  std::cout << "Перевернутое число: " << revers << "\n";

  return 0;
}
