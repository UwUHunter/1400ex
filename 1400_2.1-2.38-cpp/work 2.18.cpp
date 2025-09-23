#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите х: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    if (x == 0) {
        cout << "х не должен быть равен 0";
        return 1;
    }
    double n = x + (2 + y) / (x * x);
    double d = y + 1 / sqrt(x * x + 10);
    double z = n / d;

    double q = 7.75 * sin(x) - fabs(y);
    
    cout << "z = " << z << endl;
    cout << "q = " << q;
}

