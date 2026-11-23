#include <windows.h>

#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

enum class Goal { WeightLoss, MuscleGain, Fit };
enum class Level { Beginner, Intermediate, Pro };
enum class Place { Home, Gym };

struct ExerciseTemplate {
  std::string type;
  std::string name;
  int sets;
  std::string reps;
  std::string notes;
};

struct PlanTemplate {
  Goal goal;
  Level level;
  Place place;
  std::vector<ExerciseTemplate> exercises;
};

std::string trim(const std::string& s) {
  size_t begin = s.find_first_not_of(" \t\r\n");
  if (begin == std::string::npos) return "";
  size_t end = s.find_last_not_of(" \t\r\n");
  return s.substr(begin, end - begin + 1);
}

std::vector<std::string> split(const std::string& s, char delim) {
  std::vector<std::string> result;
  std::string item;
  std::istringstream ss(s);
  while (std::getline(ss, item, delim)) {
    result.push_back(item);
  }
  if (!s.empty() && s.back() == delim) {
    result.push_back("");
  }
  return result;
}

Goal parseGoal(const std::string& s) {
  if (s == "weight_loss") return Goal::WeightLoss;
  if (s == "muscle_gain") return Goal::MuscleGain;
  if (s == "fit") return Goal::Fit;
  throw std::runtime_error("Неизвестная цель: " + s);
}

Level parseLevel(const std::string& s) {
  if (s == "beginner") return Level::Beginner;
  if (s == "intermediate") return Level::Intermediate;
  if (s == "pro") return Level::Pro;
  throw std::runtime_error("Неизвестный уровень: " + s);
}

Place parsePlace(const std::string& s) {
  if (s == "home") return Place::Home;
  if (s == "gym") return Place::Gym;
  throw std::runtime_error("Неизвестное место: " + s);
}

std::vector<PlanTemplate> loadPlans(const std::string& filename) {
  std::ifstream in(filename);
  if (!in) {
    throw std::runtime_error("Не удалось открыть файл " + filename);
  }

  std::vector<PlanTemplate> plans;
  std::string line;
  bool firstLine = true;

  while (std::getline(in, line)) {
    if (line.empty()) continue;
    if (firstLine && line.rfind("goal;", 0) == 0) {
      firstLine = false;
      continue;  // пропускаем заголовок
    }
    firstLine = false;

    auto parts = split(line, ';');
    if (parts.size() < 8) {
      throw std::runtime_error("Некорректная строка в plans.csv: " + line);
    }

    Goal goal = parseGoal(trim(parts[0]));
    Level level = parseLevel(trim(parts[1]));
    Place place = parsePlace(trim(parts[2]));

    ExerciseTemplate ex;
    ex.type = trim(parts[3]);
    ex.name = trim(parts[4]);
    ex.sets = std::stoi(trim(parts[5]));
    ex.reps = trim(parts[6]);
    ex.notes = trim(parts[7]);

    auto it =
        std::find_if(plans.begin(), plans.end(), [&](const PlanTemplate& p) {
          return p.goal == goal && p.level == level && p.place == place;
        });

    if (it == plans.end()) {
      plans.push_back(PlanTemplate{goal, level, place, {ex}});
    } else {
      it->exercises.push_back(ex);
    }
  }

  return plans;
}

const PlanTemplate* findPlan(const std::vector<PlanTemplate>& plans, Goal goal,
                             Level level, Place place) {
  for (const auto& p : plans) {
    if (p.goal == goal && p.level == level && p.place == place) {
      return &p;
    }
  }
  return nullptr;
}

void printPlan(const PlanTemplate& plan) {
  std::cout << "\nВаш примерный план тренировок:\n";
  std::cout << "----------------------------------------\n";

  for (size_t i = 0; i < plan.exercises.size(); ++i) {
    const auto& ex = plan.exercises[i];
    std::cout << i + 1 << ". " << ex.type << " | " << ex.name << " | "
              << ex.sets << " x " << ex.reps;

    if (!ex.notes.empty()) {
      std::cout << " | " << ex.notes;
    }
    std::cout << "\n";
  }

  std::cout << "----------------------------------------\n";
}

Goal goalFromChoice(int c) {
  switch (c) {
    case 1:
      return Goal::WeightLoss;
    case 2:
      return Goal::MuscleGain;
    case 3:
      return Goal::Fit;
    default:
      throw std::runtime_error("Неверный выбор цели");
  }
}

Level levelFromChoice(int c) {
  switch (c) {
    case 1:
      return Level::Beginner;
    case 2:
      return Level::Intermediate;
    case 3:
      return Level::Pro;
    default:
      throw std::runtime_error("Неверный выбор уровня");
  }
}

Place placeFromChoice(int c) {
  switch (c) {
    case 1:
      return Place::Home;
    case 2:
      return Place::Gym;
    default:
      throw std::runtime_error("Неверный выбор места");
  }
}

int main() {
  SetConsoleOutputCP(CP_UTF8);

  try {
    auto plans = loadPlans("plans.csv");

    std::cout << "Создание примерного плана тренировок\n";

    int m = 0, g = 0, l = 0, p = 0;
    bool is_valid = false;

    while (!is_valid) {
      try {
        std::cout << "Ваш пол: 1 - мужской, 2 - женский:\n";
        std::cin >> m;

        std::cout
            << "Цель: 1 - снижение веса, 2 - набор массы, 3 - быть в форме:\n";
        std::cin >> g;

        if (m == 1) {
          std::cout
              << "Уровень (Количество классических отжиманий):\n1. 0 < 10 "
                 "(Новичок), 2. 9 < 20 (Продвинутый), 3. >= 20 (Профи)\n";
          std::cin >> l;
        } else if (m == 2) {
          std::cout << "Уровень (Количество классических отжиманий):\n1. 0 < 5 "
                       "(Новичок), 2. 4 < 15 (Продвинутый), 3. >= 15 (Профи)\n";
          std::cin >> l;
        } else {
          throw std::runtime_error("Неверный выбор пола!");
        }

        std::cout << "Место:\n1 - дом, 2 - зал:\n";
        std::cin >> p;

        Goal goal = goalFromChoice(g);
        Level level = levelFromChoice(l);
        Place place = placeFromChoice(p);

        is_valid = true;

        const PlanTemplate* plan = findPlan(plans, goal, level, place);

        if (plan == nullptr) {
          std::cout
              << "Для такой комбинации план не найден. Проверьте plans.csv\n";
          return 1;
        }

        printPlan(*plan);

      } catch (const std::exception& e) {
        std::cout << "\nОШИБКА: " << e.what() << "\n";

        std::cin.clear();
        std::cin.ignore(10000, '\n');

        std::cout << "Попробуйте еще раз!\n\n";
      }
    }

  } catch (const std::exception& e) {
    std::cout << "Критическая ошибка: " << e.what() << "\n";
  }

  std::cout << "\nНажмите Enter, чтобы выйти...";
  std::cin.ignore();
  std::cin.get();

  return 0;
}
