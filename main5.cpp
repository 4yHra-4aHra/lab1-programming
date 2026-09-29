#include <iomanip>
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main() {
  double kol_ch;
  double ch;
  std::vector<int> sp_ch;
  double sum = 0;

  std::cout << "\nСколько чисел вы хотите написать? \n";
  std::cin >> kol_ch;
  std::cout << "Принял!\n";

  for (int i = 0; kol_ch > 0; i++) {
    std::cout << "Введите " << i + 1 << " число: ";
    std::cin >> ch;
    sp_ch.push_back(ch);
    kol_ch = kol_ch - 1;
  }

  for (double num : sp_ch) {
    sum += num;
  }

  double sr_arif = static_cast<double>(sum) / sp_ch.size();
  auto mi = std::min_element(sp_ch.begin(), sp_ch.end());
  auto ma = std::max_element(sp_ch.begin(), sp_ch.end());

  std::cout << "\n";
  std::cout << "Среднее арифметическое: " << sr_arif;
  std::cout << "\nМинимальное: " << *mi;
  std::cout << "\nМаксимальное: " << *ma;

  return 0;
}
