#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;

    cout << "Введите возраст Тани: ";
    cin >> x;
    cout << "Введите возраст Мити: ";
    cin >> y;

    double m = (x + y) / 2.0;
    double dx = x - m;
    double dy = y - m;

    cout << "Средний возраст: " << m << endl;
    cout << "возраста Тани отличается от среднего на: " << fabs(dx) << endl;
    cout << "Возраста Мити отличается от среднего на: " << fabs(dy) << endl;

}
