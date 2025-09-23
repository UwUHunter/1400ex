#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;

    cout << "Введите а ( не 0 ): " << endl;
    cin >> a;
    if (a == 0) {
        cout << "а не должно быть равно 0" << endl;
        return 1;
    }
    cout << "Введите b" << endl;
    cin >> b;
    double x = -b / a;

    cout << "Значение выражения: " << x;

}

