#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a;
    std::cout << "Введите двухзначное число: ";
    std::cin >> a;

    int b = (a / 100); //сотни
    int c = (a % 10); //единицы
    int d = (a / 10) % 10; //десятки

    cout << "Числа: " << b << ", " << d << ", " << c << endl;

    return 0;
}