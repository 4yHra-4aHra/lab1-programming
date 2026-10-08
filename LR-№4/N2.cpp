#include <iostream>

int main() {
  // Ввожу переменные и запрашиваю числа
  double a, b, c;

  std::cout << "1 число: ";
  std::cin >> a;

  std::cout << "2 число: ";
  std::cin >> b;

  std::cout << "3 число: ";
  std::cin >> c;

  // Вывожу "Максимум" перед тем как выводить максимальное число, чтобы не
  // писать это слово несколько раз
  std::cout << "\nМаксимум -> ";

  if (a > b) {
    if (a > c) {
      std::cout << a;
    } else {
      std::cout << c;
    }
  } else {
    if (b > c) {
      std::cout << b;
    } else {
      std::cout << c;
    }
  }

  return 0;
}
