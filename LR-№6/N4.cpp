#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <tuple>
#include <vector>

int main() {
  std::vector<std::tuple<std::string, int, double>> stud = {{"Иван", 25, 4.5},
                                                            {"Мария", 22, 4.8},
                                                            {"Пётр", 30, 4.2},
                                                            {"Анна", 20, 4.9}};

  auto oldest = *std::max_element(stud.begin(), stud.end(),
                                  [](const auto& a, const auto& b) {
                                    return std::get<1>(a) < std::get<1>(b);
                                  });

  std::cout << "Самый старший: " << std::get<0>(oldest) << ", "
            << std::get<1>(oldest) << " лет\n";
  auto best = *std::max_element(stud.begin(), stud.end(),
                                [](const auto& a, const auto& b) {
                                  return std::get<2>(a) < std::get<2>(b);
                                });
  std::cout << "Лучший студент: " << std::get<0>(best) << ", балл "
            << std::get<2>(best) << "\n";

  // Средний возраст
  int totalAge = std::accumulate(
      stud.begin(), stud.end(), 0,
      [](int sum, const auto& s) { return sum + std::get<1>(s); });
  std::cout << std::fixed << std::setprecision(1);
  std::cout << "Средний возраст: "
            << static_cast<double>(totalAge) / stud.size() << "\n";

  // Сортировка по баллу
  std::sort(stud.begin(), stud.end(), [](const auto& a, const auto& b) {
    return std::get<2>(a) > std::get<2>(b);
  });

  std::cout << "\nПо баллу:\n";
  for (const auto& [name, age, gpa] : stud) {
    std::cout << name << ": " << gpa << "\n";
  }

  return 0;
}
