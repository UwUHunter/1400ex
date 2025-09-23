#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите число а: " << endl;
    cin >> a;
    cout << "Введите число b: " << endl;
    cin >> b;

    double ar = (a + b) / 2;
    double geom = sqrt(static_cast<double>(a) * b);

    cout << "Среднее арифметическое: " << ar << endl;
    cout << "Среднее геометрическое: " << geom;
}

