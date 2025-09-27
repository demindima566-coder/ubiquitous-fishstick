#include <iostream>

int main() {
    long long A, B, C;
    std::cout << "Введите натуральные A, B и C \n";

    std::cin >> A >> B >> C;

    if (A <= 0 || B <= 0 || C <= 0) {
        std::cout << "A, B и C должны быть натуральными \n";
        return 1;
    }

    long long sum = A + B;
    
    if (sum % C == 0) {
        if (C % B == 0) {
            long long result = (sum / C) - (C / B);
            std::cout << result << "\n";
        } else {
            long long result = (sum / C) + (B * C);
            std::cout << result << "\n";
        }
    } else {
        long long result = A - B + C;
        std::cout << result << "\n";
    }
    return 0;
}
//хотел объединить 16 и 17 строчки, поставив между ними &&, но вылетела ошибка.
