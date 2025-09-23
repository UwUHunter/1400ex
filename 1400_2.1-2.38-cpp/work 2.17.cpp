#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, h;
    cout << "Введите нижнее основание a: " << endl;
    cin >> a;
    cout << "Введите верхнее основание b: " << endl;
    cin >> b;
    cout << "Введите высоту h: ";
    cin >> h;
    if (a < b) {
        cout << "Нижнее основание должно быть больше или равно верхнему";
        return 1;
    }
    double side = sqrt(h * h + ((a - b) / 2) * ((a - b) / 2));
    double p = a + b + 2 * side;
    cout << "Периметр равнобедренной трапеции: " << p;
}

