#include <iostream>

int main() 
{
    int N;
    std::cout << "Введите код ошибки (целое число): ";
    if (!(std::cin >> N)) {
        std::cerr << "Некорректный ввод: введите целое число.\n";
        return 1;
    }

    switch (N) 
    {
        case 0: std::cout << "все хорошо\n";
            break;
        case 1: std::cout << "ошибка чтения файла\n";
            break;
        case 2: std::cout << "ошибка записи файла\n";
            break;
        case 3: std::cout << "не все поля определены\n";
            break;

        default: std::cout << "Неизвестный код ошибки: " << N << "\n";
            break;
    }
    return 0;
}