// Ввожу библиотеки
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
// Ввожу функцию для нахождения делителей числа
int spd(int n) {
  // Переменная списка делителей
  std::vector<int> s;
  // Корень числа и его целая часть
  double koren = std::sqrt(n);
  int cel_ch = static_cast<int>(koren);
  for (int d = 1; d <= cel_ch; ++d) {
    if (n % d == 0) {
      s.push_back(d);
      if ((n / d) != n) {
        s.push_back(n / d);
      }
    }
  }  // Нахожу сумму делителей
  int sud;
  for (int el : s) {
    sud += el;
  }
  return sud;
}

int main() {
  // Запрашиваю число
  std::string N;
  std::cout << "Введите число на проверку совершенства (Если вы введете после "
               "числа буквы - ничего страшного): ";
  std::cin >> N;

  // Проверяю находятся ли буквы в начале того, что ввел пользователь
  try {
    int dubl_N = std::stoi(N);

    if ((dubl_N > 0) and (dubl_N != 1)) {
      int res = spd(dubl_N);
      if (res == dubl_N) {
        std::cout << "Ваше число -> совершенно!!!";
      } else {
        std::cout << "Ваще число -> Не совершенно(((";
      }
    } else {
      if (dubl_N == 1) {
        std::cout << "Число '1' не является совершенным!";
      } else if (dubl_N == 0) {
        std::cout << "Ошибка! Вы ввели '0'";
      } else if (dubl_N < 0) {
        std::cout << "Отрицательное число точно не совершенно!";
      }
    }
  } catch (const std::invalid_argument& e) {
    std::cout << "Вы ввели не число!";
  }

  return 0;
}