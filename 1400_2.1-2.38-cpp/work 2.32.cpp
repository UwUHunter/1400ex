#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c, d;
    cout << "введите стоимость монитора, системного блока, клавиатуры, мыши: ";
    cin >> a >> b >> c >> d;

    double q;
    cout << "Введите количество ПК: ";
    cin >> q;

    cout << "Стоимость 3 ПК: " << (a * 3) + (b * 3) + (c * 3) + (d * 3) << endl;
    cout << "Стоимость всей покупки: " << (a * q) + (b * q) + (c * q) + (d * q);
    
}
