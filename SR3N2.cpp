// Вводим необходимые библиотеки
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <regex>
#include <string>

// Создаем алфавит Системы счисления по основанию 62
std::string alf =
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

// Создаем функцию, которая переводит любое положительное число из десятичной СС
// в другую(от 2 до 62)
auto add(std::string n, int ss, int kc) -> std::string {
  // Меняем "," на "." и считаем количество точек
  n = std::regex_replace(n, std::regex(","), ".");
  int count = std::count(n.begin(), n.end(), '.');

  int cel_ch = std::stoi(n);

  // Создаем строку, в которую будем записывать результат перевода
  std::string s = "";

  // С помощью цикла while перевожу целую часть числа из одной СС в другую
  while (cel_ch > 0) {
    // Нахожу остаток деления числа на основание СС, нахожу чему будет равен
    // этот остаток в алфавите и добавляю в начало строки
    int i = cel_ch % ss;
    char elem = alf.at(i);
    s.insert(0, 1, elem);
    cel_ch /= ss;
  }

  // Перевожу дробную часть числа в нужную СС
  if (count == 1) {
    double num_dr = std::stod(n);
    double intPart;
    double drobPart = modf(num_dr, &intPart);

    s += '.';

    int k = 0;
    while ((drobPart != 0) and (k < kc)) {
      double Drob = drobPart * ss;
      double i2;
      drobPart = modf(Drob, &i2);

      k += 1;
      char elem2 = alf.at(i2);
      s.push_back(elem2);
    }
  }
  return s;
}

int main() {
  // Создаю переменные
  std::string num;
  int s_s, k_c;

  // Запрашиваю необходимые данные
  std::cout << "\nВведите положительное число в десятичной СС: ";
  std::cin >> num;

  std::cout << "Введите основание СС, в которую вы хотите перевести число(Макс "
               "-> 62): ";
  std::cin >> s_s;

  std::cout << "Сколько цифр после запятой вам необходимо? ";
  std::cin >> k_c;

  // Высчитываю результат и вывожу его на экран
  auto result = add(num, s_s, k_c);
  std::cout << result << "\n";

  return 0;
}