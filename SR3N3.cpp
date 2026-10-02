#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string str;
  int Kol_bu = 0, Kol_cc = 0, Kol_pr = 0, Kol_zp = 0;

  std::cout << "Введите строку: ";
  std::getline(std::cin, str);

  Kol_pr = std::count(str.begin(), str.end(), ' ');

  for (char i : str) {
    if (std::isalpha(i)) {
      Kol_bu += 1;
    } else if (std::isdigit(i)) {
      Kol_cc += 1;
    } else {
      Kol_zp += 1;
    }
  }

  Kol_zp -= Kol_pr;

  std::cout << "Буквы: " << Kol_bu;
  std::cout << "\nЦифры: " << Kol_cc;
  std::cout << "\nПробелы: " << Kol_pr;
  std::cout << "\nЗнаки препинания: " << Kol_zp;

  return 0;
}
