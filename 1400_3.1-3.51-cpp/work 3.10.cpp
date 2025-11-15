#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int k, d, n;
    std::cout << "Введите k (1 ≤ k ≤ 365): ";
    std::cin >> k;

    std::cout << "Введите d (1 ≤ d ≤ 7): ";
    std::cin >> d;

    n = ((k + d - 2) % 7);
    if (n == 0) n = 7;

    std::cout << "День недели: " << n << std::endl;
    return 0;
}
