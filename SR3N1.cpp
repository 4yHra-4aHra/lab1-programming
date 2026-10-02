#include <iomanip>
#include <iostream>

int main() {
  // Ввожу переменные высоты и веса
  double weight, height;
  double bmi;

  // Запрашиваю данные
  std::cout << "\nВведите свой вес(в кг): ";
  std::cin >> weight;

  std::cout << "Введите свой рост(в метрах): ";
  std::cin >> height;

  // Высчитываю ИМТ и вывожу
  bmi = weight / (height * height);
  std::cout << std::fixed << std::setprecision(1)
            << "Ваш индекс массы тела: " << bmi << "\n";

  // Вывожу диагноз пациента
  if (bmi < 18.5) {
    std::cout << "У вас дефицит массы тела!";
  }

  else if (bmi > 24.9) {
    std::cout << "У вас избыток массы тела!";
  }

  else {
    std::cout << "Ваша масса тела в норме.";
  }

  return 0;
}
