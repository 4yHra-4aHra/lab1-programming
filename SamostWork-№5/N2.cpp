#include <cmath>
#include <iomanip>
#include <iostream>

double epsil(double eps) {
  double e = 1.0;
  int n = 1;
  double term = 1.0;

  while (term >= eps) {
    term /= n;
    e += term;
    n++;
  }

  return e;
}

int main() {
  double eps = std::pow(10.0, -14);
  std::cout << "\nКакую точность после запятой вы желаете?\n";
  int toch;
  std::cout << "Максимум - 16 знаков после запятой!!! ";
  std::cin >> toch;

  if (toch <= 16) {
    double ep = epsil(eps);
    std::cout << std::setprecision(toch + 1) << "Число е с точностью до "
              << toch << ": " << ep;
  } else {
    std::cout << "К сожалению мы не можем вычислить вам число е с точностью "
                 "больше 16 знаков после запятой(((";
  }

  return 0;
}
// 2.7182818284590452353602874713526624977572