#include <iostream>

int main() 
{
    int x;
    std::cout << "Введите x (должен быть -1 или 1): ";
    std::cin >> x;
        

    if (x == -1) 
    {
        std::cout << "Negative number\n";
    }
    if (x == 1)
    {
        std::cout << "Positive number\n";
    } 
    else {
        std::cout << "Неправильное значение x: ожидалось -1 или 1, получили " << x << "\n";
    }
    return 0;
}
// сделал так, т.к этот вариант самый простой.