#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

int main() {
  std::vector<int> sp(30);

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 100);

  for (int& x : sp) x = dist(gen);

  std::sort(sp.begin(), sp.end());
  for (int x : sp) std::cout << x << ' ';
  std::vector<int> res;

  int dlina = sp.size();
  for (int i = 0; i < (dlina - 1); ++i) {
    if (sp[i] == sp[i + 1]) {
      res.push_back(sp[i]);
    }
  }

  for (int el : res) {
    std::erase(sp, el);
    sp.push_back(el);
  }
  std::sort(sp.begin(), sp.end());

  std::cout << "\n";
  for (int x : sp) std::cout << x << ' ';
  std::cout << "\n";
  for (int x : res) std::cout << x << ' ';

  return 0;
}
