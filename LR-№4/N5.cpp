#include <iostream>

int main() {
  // Создаю переменные и запрашиваю их значения
  double a, b;

  std::cout << "\n";
  std::cout << "1 number: ";
  std::cin >> a;

  std::cout << "2 number: ";
  std::cin >> b;

  // Ввожу переменную операции и даю пользователю на выбор любую из 4 операций
  char operation;
  std::cout << "Your operation is(+, -, *, /): ";
  std::cin >> operation;

  // С помощью "switch" вывожу результат выбранной операции
  switch (operation) {
    case '+':
      std::cout << a + b;
      break;

    case '-':
      std::cout << a - b;
      break;

    case '*':
      std::cout << a * b;
      break;

    case '/':
      if (b == 0) {
        std::cout << "Деление на 0!!!";
      } else {
        std::cout << a / b;
      }
      break;

    default:
      std::cout << "Неизвестная команда!";
  }

  std::cout << "\n";
  return 0;
}
