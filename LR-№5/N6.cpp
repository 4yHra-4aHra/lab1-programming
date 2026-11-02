#include <iostream>

int main() {
  int num;
  std::cout << "Введите число: ";
  std::cin >> num;
  int dubl_num = num;

  int revers = 0;

  while (num > 0) {
    int dig = num % 10;
    revers = revers * 10 + dig;
    num /= 10;
  }

  if (revers == dubl_num) {
    std::cout << "Ваше число является палиндромом!";
  } else {
    std::cout << "Ваше число обыное(((";
  }
  return 0;
}