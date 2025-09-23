#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "введите стоимость в кг - конфет, печенья, яблок: ";
    cin >> a >> b >> c;

    double q, w, e;
    cout << "Введите количество в кг - конфет, печенья, яблок: ";
    cin >> q >> w >> e;

    cout << "Стоимость всей покупки: " << (a * q) + (b * w) + (c * e);
    


}
