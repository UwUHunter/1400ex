#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int a;
    std::cout << "Введите количество секунд: ";
    std::cin >> a;

    int h = a / 3600;

    int m = (a % 3600) / 60;

    int s = a % 60;

    std::cout << "Полных часов: " << h << std::endl;
    std::cout << "Полных минут с начала последнего часа: " << m << std::endl;
    std::cout << "Секунд с начала последней минуты: " << s << std::endl;

    return 0;
}