// Ввожу библиотеку cmath для корня из дискриминанта
#include <cmath>
#include <iostream>

int main() {
  // Создаю переменные и запрашиваю для них значения
  double a, b, c;

  std::cout << "к. а: ";
  std::cin >> a;

  std::cout << "к. b: ";
  std::cin >> b;

  std::cout << "к. с: ";
  std::cin >> c;

  // Если к. a < 0, то уравнение точно не квадратное!
  if (a == 0) {
    std::cout << "Это не квадратное уравнение!!!";
  }

  // Высчитываю дискриминант и нахожу корни для уравнения, Если они есть
  else {
    double D = b * b - 4 * a * c;

    if (D > 0) {
      double x1 = ((-1) * b + std::sqrt(D)) / (2 * a);
      double x2 = ((-1) * b - std::sqrt(D)) / (2 * a);

      std::cout << "Корни уравнения: " << x1 << ", " << x2;

    } else if (D == 0) {
      double x1 = ((-1) * b + std::sqrt(D)) / (2 * a);

      std::cout << "Корень уравнения: " << x1;

    } else {
      std::cout << "Корней нет!";
    }
  }

  return 0;
}
