#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    double d = sqrt(b + (a + b) / 2);
    if (d == 0) {
        cout << "Ошибка 0" << endl;
        return 1;
    }
    if (a == 0) {
        cout << "Ошибка 0" << endl;
        return 1;
    }
    double x = ((a * a) / 2 + 25) / d;
    double y = (fabs(a) + 2 * sin(b)) / (5.5 * a);
    cout << "x = " << x << endl;
    cout << "y = " << y;
}

