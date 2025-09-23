#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите первое число" << endl;
    cin >> x;
    cout << "Введите второе число" << endl;
    cin >> y;

    double ax = fabs(x);
    double ay = fabs(y);

    double ar = (ax + ay) /5;
    double geom = sqrt(ax + ay);

    cout << "Среднее арифметическое: " << ar << endl;
    cout << "Среднее геометрическое: " << geom;
}