// Ввожу необходимые библитеки
#include <algorithm>
#include <iostream>
#include <random>
#include <stdexcept>
#include <string>
#include <vector>

// Функция для проверки того, чтобы у числа не повторялись цифры
bool dif_dig(std::string n) {
  // Сортирует число, чтобы повторяющиеся цифры стояли рядом
  std::sort(n.begin(), n.end());

  // Если не будет повторяющихся цифр, то adjacent_find(n.begin(), n.end())
  // Выдаст n.end() и я как раз проверяю, равно ли оно этому, если да то в
  // return выводиться true, а иначе false
  return std::adjacent_find(n.begin(), n.end()) == n.end();
}

// Функция для подсчета коров и быков
auto Bull_or_cow(int nm, int pr) {
  // Процесс создания вектор-массива для использования индекса в цикле
  std::string n_m1 = std::to_string(nm);
  std::string p_r2 = std::to_string(pr);
  int bll = 0;
  int cw = 0;
  std::vector<char> nm1 = std::vector<char>(n_m1.begin(), n_m1.end());
  std::vector<char> pr2 = std::vector<char>(p_r2.begin(), p_r2.end());

  for (int i = 0; i < nm1.size(); i++) {
    for (int u = 0; u < pr2.size(); u++) {
      if (nm1[i] == pr2[u]) {
        if (i == u) {
          bll += 1;
        } else {
          cw += 1;
        }
      }
    }
  }

  // Создаю вектор массива результата функции
  std::vector<int> sp = {bll, cw};
  return sp;
}

int main() {
  // Для того, чтобы каждый раз переменная принимала рандомные значения
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dist(1000, 9999);

  // Создаю переменные до цикла с постусловием
  bool a = false;
  std::string num = " ";

  // Цикл с ПОСТУСЛОВИЕМ для того, чтобы цифры в числе не повторялись
  do {
    int nm = dist(gen);
    num = std::to_string(nm);
    a = dif_dig(num);
  } while (!a);

  // Переменная количества попыток
  int attemps = 0;

  // Начало. While (true) для того, чтобы прога не заканчивалась, пока
  // пользователь не угадает число
  while (true) {
    std::cout << "\n";

    std::string n;
    std::cout << "Угадайте 4-зачное число: ";
    std::cin >> n;

    bool b = dif_dig(n);

    // try/catch для того, чтобы прога не ломалась при введении букв
    try {
      int numk = std::stoi(num);
      attemps += 1;
      int nump = std::stoi(n);

      // Если пользователь ввел правильное число, прога сразу выдаст, что он
      // угадал, и закончит работу
      if (nump == numk) {
        std::cout << "Вы угадали!!!" << "\n";
        std::cout << "Количество ваших попыток: " << attemps;
        break;
      }
      // Проверка условий, чтобы прога не считала то, что не надо
      else if (1000 <= nump < 10000) {
        if (b) {
          std::vector res = Bull_or_cow(nump, numk);
          int bull = res[0];
          int cow = res[1];
          std::cout << "Вы не угадали!!!" << "\n";
          std::cout << "Быков: " << bull << "; Коров: " << cow;
        } else {
          std::cout << "Вы ввели число с повторяющимися цифрами!!!";
        }
      } else {
        std::cout << "Ваше число не 4-значное!!!";
      }
    }

    catch (const std::invalid_argument& e) {
      std::cout << "Вы ввели не число!";
    }
  }
  return 0;
}