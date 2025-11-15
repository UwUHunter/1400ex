#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int a;

    std::cout << "Введите номер билета: ";
    std::cin >> a;

    if (a < 1 || a > 300) {
        std::cout << "Номер билета должен быть в диапазоне от 1 до 300." << std::endl;
        return 1;
    }

    int b = (a - 1) / 15 + 1;

    std::cout << "Место с номером " << a << " находится в ряду: " << b << std::endl;

    return 0;
}
