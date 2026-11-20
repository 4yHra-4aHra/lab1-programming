#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  // Запрос количества элементов списка
  int n;
  std::cout << "Введите число элементов: ";
  std::cin >> n;

  // Проверка на ввод числа
  if (!std::cin) {
    std::cout << "Это не число" << "\n";
    return 0;
  }

  // Создание пустого списка
  std::vector<int> m;

  // Заполнение списка
  for (int i = 0; i < n; ++i) {
    std::cout << "Элемент " << i + 1 << "\n";
    int a;
    std::cout << "Введите элемент: ";
    std::cin >> a;

    // Проверка на ввод числа
    if (!std::cin) {
      std::cout << "Это не число" << "\n";
      return 0;
    }
    m.push_back(a);
  }

  // Копирование списка и его сортировка
  std::vector<int> b = m;
  std::sort(begin(b), end(b));

  // Проверка является ли от сортированным
  if (b == m) {
    std::cout << "Список отсортирован" << "\n";
    return 0;
  } else {
    std::cout << "Список не сортирован" << "\n";
    return 0;
  }
}
