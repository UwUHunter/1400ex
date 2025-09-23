#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double v1, v2, s;
    cout << "Введите скорость первого автомобиля: ";
    cin >> v1;
    cout << "Введите скорость второго автомобиля: ";
    cin >> v2;
    cout << "Введите расстояние между автомобилями (км): ";
    cin >> s;

    if (v1 + v2 == 0) {
        cout << "Скорость равна 0" << endl;
    }
    else {
        double t = s / (v1 + v2);
        cout << "Время до встречи автомобилей: " << t << "часов." << endl;
    }

    

}
