#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a;
    std::cout << "Введите двухзначное число: ";
    std::cin >> a;

    int b = (a / 10);
    int c = (a % 10);

    cout << "Число: " << c << b << endl;

    return 0;
}