// Ввожу необходимые библиотеки
#include <iostream>
#include <stdexcept>
#include <vector>

// Функция для сортировки
auto sort_puz(std::vector<double> sp) {
  int size = std::size(sp);

  for (int i = 0; i < size; i++) {
    // Спец флаг, чтобы следить за тем, менялся ли список во время цикла
    bool flag = false;
    for (int ind = 0; ind < (size - 1 - i); ind++) {
      // Проверка, есть ли такие случаи, когда последующее число меньше
      // текущего
      if (sp[ind] > sp[ind + 1]) {
        // Присваиваю этой переменной значение текущего числа
        double dubl_num = sp[ind];
        sp[ind] = sp[ind + 1], sp[ind + 1] = dubl_num;
        // Флаг меняю
        flag = true;
      }
      // Если флаг не поменялся, значит список отсортирован
    }
    if (flag == false) {
      break;
    }
  }
  return sp;
}

int main() {
  // Создаю переменные
  std::vector<double> sp;
  int size;
  std::cout << "Сколько чисел в вашем массиве? ";
  std::cin >> size;
  int dubl_size = size;
  // Специально проверяю это условие, а вдруг пользователь нечаянно ввел букву
  if (size > 0) {
    while (size > 0) {
      double num;
      std::cout << "Ваше " << dubl_size - size + 1 << " число: ";
      std::cin >> num;
      // Добавляю число пользователя в список длиной, заданной пользователем
      sp.push_back(num);
      size--;
    }
    // Сортирую
    auto sort_sp = sort_puz(sp);

    for (double el : sort_sp) {
      std::cout << el << ' ';
    }
  } else {
    std::cout << "Извините, но что-то пошло не так(";
  }
  return 0;
}
