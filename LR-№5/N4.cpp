#include <cmath>
#include <iostream>
#include <vector>

// Создаю функцию, которая проверяет, простое ли число или нет
auto prime(int n) {
  for (int d = 2; d <= std::sqrt(n); ++d) {
    if (n % d == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  // Создаю переменные
  int num;
  std::cout << "Введите число: ";
  std::cin >> num;
  std::vector<int> pdel;

  // Нахожу простые делители числа
  for (int d = 2; d <= std::sqrt(num); ++d) {
    if (num % d == 0) {
      if (prime(d)) {
        pdel.push_back(d);
      }
      if (prime(num / d)) {
        pdel.push_back(num / d);
      }
    }
  }
  std::vector<int> res;

  // Раскладываю число на простые множители
  for (int d : pdel) {
    while (num % d == 0) {
      res.push_back(d);
      num /= d;
    }
  }

  // Вывожу результат
  if (res.size() > 0) {
    for (int x : res) {
      std::cout << x << ' ';
    }
  } else {
    std::cout << "У вашего числа нет простых делителей!";
  }
  return 0;
}
