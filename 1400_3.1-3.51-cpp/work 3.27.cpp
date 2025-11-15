#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    // Для 4-значного числа
    int n4, s4 = 0;
    std::cout << "Введите 4 значное число: ";
    std::cin >> n4;

    while (n4 != 0) {
        s4 += n4 % 10;
        n4 /= 10;
    }

    std::cout << "Сумма цифр числа: " << s4 << std::endl;

    // Для 5-значного числа
    int n5, s5 = 0;
    std::cout << "Введите 5 значное число: ";
    std::cin >> n5;

    while (n5 != 0) {
        s5 += n5 % 10;
        n5 /= 10;
    }

    std::cout << "Сумма цифр числа: " << s5 << std::endl;

    return 0;
}
