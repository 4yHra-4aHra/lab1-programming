#include <iostream>

int main() {
  double X, Y;

  std::cout << "X -> ";
  std::cin >> X;

  std::cout << "Y -> ";
  std::cin >> Y;

  if (X == 0) {
    if (Y == 0) {
      std::cout << "Это центр координатной плоскости";
    } else {
      std::cout << "Ваша точка находится на оси Оу";
    }
  } else if (Y == 0) {
    std::cout << "Ваша точка находится на оси Оx";
  } else {
    if (X > 0) {
      if (Y > 0) {
        std::cout << "Ваша точка в I четверти";
      } else {
        std::cout << "Ваша точка в IV четверти";
      }
    } else {
      if (Y > 0) {
        std::cout << "Ваша точка в II четверти";
      } else {
        std::cout << "Ваша точка в III четверти";
      }
    }
  }

  return 0;
}
