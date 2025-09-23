#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;

    double v = a * b * c;
    double qw = 2 * (a * c + b * c);

    cout << "Объём: " << v << endl;
    cout << "Площадь боковой поверхности: " << qw;
}