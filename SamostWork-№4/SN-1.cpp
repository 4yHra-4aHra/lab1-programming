#include <iostream>
#include <random>

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dist(1, 100);

  int num = dist(gen);

  while (true) {
    int n;
    std::cout << "\nУгадай число: ";
    std::cin >> n;

    if (n == num) {
      std::cout << "Вы угадали!!!0_0";
      break;
    } else if (n > num) {
      std::cout << "Мое число меньше)))";
    } else {
      std::cout << "Мое число больше)))";
    }
  }

  return 0;
}
