#include <algorithm>
#include <iomanip>
#include <iostream>
#include <random>

int main() {
  int n;
  std::cout << "Количество чисел: ";
  std::cin >> n;

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 100);

  std::vector<int> N(n);
  for (int x : N) x = dist(gen);

  for (int x : N) std::cout << x << ' ';
  std::cout << "\n";

  int sum = std::accumulate(N.begin(), N.end(), 0);
  std::cout << "Сумма: " << sum << "\n";

  std::cout << std::fixed << std::setprecision(5);
  std::cout << "Среднее: " << static_cast<double>(sum) / n << "\n";
  std::cout << "Мин: " << *std::min_element(N.begin(), N.end()) << "\n";
  std::cout << "Макс: " << *std::max_element(N.begin(), N.end()) << "\n";

  std::sort(N.begin(), N.end());
  std::cout << "\n";
  for (int x : N) std::cout << x << ' ';
  std::cout << "\n";

  N.erase(std::unique(N.begin(), N.end()), N.end());
  for (int x : N) std::cout << x << ' ';

  return 0;
}