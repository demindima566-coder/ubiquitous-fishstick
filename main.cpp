#include <iostream>

int main() {
    int x, i;
    std::cout << "Введите число x (0 < x < 10^9): ";
    std::cin >> x;
    std::cout << "Введите номер бита i (начиная с 0): ";
    std::cin >> i;

    int result = x | (1 << i);

    std::cout << "Число после установки " << i 
              << "-го бита в 1: " << result << std::endl;

    return 0;
}