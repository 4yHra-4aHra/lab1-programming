#include <iostream>
#include <vector>

int main() {
  int str;
  int stol;
  std::cout << "Введите количество строк: ";
  std::cin >> str;
  std::cout << "Введите количество столбцов: ";
  std::cin >> stol;

  std::vector<std::vector<int>> matrix;
  for (int i = 0; i < str; ++i) {
    std::vector<int> m;
    for (int j = 0; j < stol; ++j) {
      int x;
      std::cout << "Ваше " << j + 1 << " число в " << i + 1 << " строке: ";
      std::cin >> x;
      m.push_back(x);
    }
    matrix.push_back(m);
  }

  std::cout << "\nОбычная матрица: \n";
  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix[i].size(); ++j) {
      std::cout << matrix[i][j] << ' ';
    }
    std::cout << "\n";
  }

  std::vector<std::vector<int>> res(stol, std::vector<int>(str));

  for (int i = 0; i < str; ++i) {
    for (int j = 0; j < stol; ++j) {
      res[j][i] = matrix[i][j];
    }
  }

  std::cout << "\nТранспонированная матрица: \n";
  for (int i = 0; i < res.size(); ++i) {
    for (int j = 0; j < res[i].size(); ++j) {
      std::cout << res[i][j] << ' ';
    }
    std::cout << "\n";
  }

  return 0;
}
