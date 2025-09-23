#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double e, f, g, h;

    cout << "Введите e: ";
    cin >> e;
    cout << "Введите f: ";
    cin >> f;
    cout << "Введите g: ";
    cin >> g;
    cout << "Введите h: ";
    cin >> h;

    if (f == 0) {
        cout << "Ошибка 0" << endl;
        return 1;
    }

    double dc = e * f - 3;
    if (dc == 0) {
        cout << "Ошибка 0" << endl;
        return 1;
    }

    double qw = e - 27.0 / f + g;
    if (qw < 0) {
        cout << "Ошибка 0" << endl;
        return 1;
    }
    double a = sqrt(qw);

    double b = sin(e) + pow(cos(h), 2);

    double c = 33 * g / dc;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
