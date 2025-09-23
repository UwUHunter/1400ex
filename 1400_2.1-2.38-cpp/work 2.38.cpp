#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;

    cout << "Введите два числа: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        return 1;
    }

    cout << a << " + " << b << " = " << (a + b) << "; ";
    cout << a << " - " << b << " = " << (a - b) << "; ";
    cout << a << " * " << b << " = " << (a * b) << "; ";
    cout << a << " / " << b << " = " << (a / b) << "; ";
    cout << "( " << a << " + " << b << " ) / 2 = " << ((a + b) / 2) << endl;
}
