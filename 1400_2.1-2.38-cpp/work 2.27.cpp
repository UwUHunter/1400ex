#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, h;

    cout << "Введите длину нижнего основания a: ";
    cin >> a;
    cout << "Введите длину верхнего основания b: ";
    cin >> b;
    cout << "Введите высоту трапеции h: ";
    cin >> h;

    double s = sqrt(h * h + pow((a - b) / 2.0, 2));
    double p = a + b + 2 * s;
    cout << "Периметр равнобедренной трапеции: " << p << endl;
}
