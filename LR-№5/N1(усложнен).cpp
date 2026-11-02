// Ввожу необходимые библиотеки
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  // Создаю "верхушку" таблицы, чтобы каждый столбец был разделен линиями
  std::cout << std::setw(8) << 'x';
  std::cout << std::setw(3) << '|';
  std::cout << std::setw(8) << "sin(x)";
  std::cout << std::setw(3) << '|';
  std::cout << std::setw(8) << "cos(x)";
  std::cout << std::setw(3) << '|';
  std::cout << std::setw(8) << "tan(x)" << "\n";
  std::cout << std::string(10, '-') << std::string(1, '|')
            << std::string(10, '-') << std::string(1, '|')
            << std::string(10, '-') << std::string(1, '|')
            << std::string(10, '-') << "\n";

  // Делаю ограничение в 4 символа после запятой для чисел с плавающей точкой
  std::cout << std::fixed << std::setprecision(4);

  // Создаю цикл до 20 значений, чтобы был полный тригонометрический круг)))
  for (int i = 0; i <= 20; ++i) {
    // Создаю переменную PI
    double x = i * M_PI / 10;
    // Вычисляю синус и косинус
    double sin = std::sin(x);
    double cos = std::cos(x);

    // Ввожу символы '-' и '|' для обозначения табличных значений: Pi/2; Pi;
    // 3Pi/2; 2Pi
    if (i != 0 and i % 5 == 0) {
      std::cout << std::string(10, '-') << std::string(1, '|')
                << std::string(10, '-') << std::string(1, '|')
                << std::string(10, '-') << std::string(1, '|')
                << std::string(10, '-') << "\n";
    }
    // Проверяю, равен ли косинус нулю (Для того, чтобы обозначить, что значение
    // тангенса не существует)
    if ((i - 5) % 10 == 0) {
      std::cout << std::setw(8) << x << std::setw(3) << '|' << std::setw(8)
                << sin << std::setw(3) << '|' << std::setw(8) << cos
                << std::setw(3) << '|' << std::setw(8) << "\n";
    } else {
      double tn = std::tan(x);
      std::cout << std::setw(8) << x << std::setw(3) << '|' << std::setw(8)
                << sin << std::setw(3) << '|' << std::setw(8) << cos
                << std::setw(3) << '|' << std::setw(8) << tn << "\n";
    }
    // Ввожу символы '-' и '|' для того же самого
    if (i != 0 and i % 5 == 0) {
      std::cout << std::string(10, '-') << std::string(1, '|')
                << std::string(10, '-') << std::string(1, '|')
                << std::string(10, '-') << std::string(1, '|')
                << std::string(10, '-') << "\n";
    }
  }
  return 0;
}
