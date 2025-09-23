#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите количество жителей: " << endl;
    cin >> a;
    cout << "Введите площадь государства: " << endl;
    cin >> b;
    double z = a / b;
    cout << "Плотность начеления: " << z;
}

