#include <iostream>
#include <vector>

int binar_sick(std::vector<int> sp, int num) {
  int L = 0;
  int R = sp.size() - 1;
  while (L <= R) {
    int mid = (L + R) / 2;
    if (sp[mid] == num) {
      return mid;
    } else if (sp[mid] < num) {
      L = mid + 1;
    } else {
      R = mid - 1;
    }
  }
  return -1;
}

int main() {
  std::vector a = {1, 3, 4, 564, 74, 34, 40, 5, 7, 3, 61};
  for (int el : a) {
    std::cout << el << ' ';
  }

  int num;
  std::cout << "\nУ какого числа вы желаете знать индекс: ";
  std::cin >> num;

  int res = binar_sick(a, num);

  if (res == -1) {
    std::cout << "Мы не нашли ваше число(";
  } else {
    std::cout << res;
  }
  return 0;
}
