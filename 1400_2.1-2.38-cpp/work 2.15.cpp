#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double p = 3.1415926535;
    double R, r;
    cout << "Введите R: " << endl;
    cin >> R;
    cout << "Введите r: " << endl;
    cin >> r;
    if (R <= r) {
        cout << "Внешний радиус должен быть больше внутреннего";
        return 1;
    }
    double area = p * (R * R - r * r);
    cout << "Площадь: " << area << endl;
}

