#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int pn;
    std::cout << "Введите номер места: ";
    std::cin >> pn;

    const int ppt = 15;
    const int ss = 8;
    int s = (pn - 1) % ss + 1;

    int tier = ((pn - 1) / ppt) % 10 + 1;

    std::cout << "Секция: " << s << ", Ярус: " << tier << std::endl;

    return 0;
}
