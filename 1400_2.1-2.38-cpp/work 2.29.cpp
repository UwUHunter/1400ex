#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double pi = 3.14159265;
    double x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты вершины: ";
    cin >> x1 >> y1;
    cout << "Введите координаты вершины: ";
    cin >> x2 >> y2;
    cout << "Введите координаты вершины: ";
    cin >> x3 >> y3;

    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    double per = a + b + c;
    double p = per / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "P: " << per << endl;
    cout << "S: " << area;

}
