#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int n, k;

    std::cout << "Введите количество школьников (N): ";
    std::cin >> n;
    std::cout << "Введите количество яблок (K): ";
    std::cin >> k;

    if (n <= 0) {
        std::cout << "Количество школьников должно быть больше нуля." << std::endl;
        return 1;
    }

    int q = k / n;
    int w = k % n;

    std::cout << "Каждому школьнику достанется: " << round(q * 1) / 1 << std::endl;
    std::cout << "Останется в корзине: " << round(w * 1) / 1 << std::endl;

    return 0;
}
