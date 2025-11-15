#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a;
    std::cout << "Введите число: ";
    std::cin >> a;

    int b = a / 10;
    int c = a % 10;

    cout << "Число десятков: " << b << endl;
    cout << "Число единиц: " << c;

    return 0;
}
