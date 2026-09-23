#include "iostream"
#include <string>

auto square(int x) -> int{
    return x * x;
}

int main() {
    std::cout << "Hello World!!!" << std::endl;
    
    std::string name = "Ярославлев Игорь";
    std::cout << "Студент: " << name << std::endl;
    
    std::cout << "Дата: 2026-09-10" << std::endl;

    auto number{15};

    auto result = square(number);

    std::cout << "\n" << std::endl;
    std::cout << "Число: " << number << std::endl;
    std::cout << "Результат:" << result << std::endl;

    return 0;
}