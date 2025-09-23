#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, as;
    double p = 3.14159265;

    cout << "Введите длину a: ";
    cin >> a;
    cout << "Введите длинну b: ";
    cin >> b;
    cout << "Введите угол при большем основании: ";
    cin >> as;

    double af = as * p / 180;
    double h = (a - b) * tan(af);
    double ad = (a + b) / 2 * h;

    cout << "Площадь: " << ad << endl;

}
