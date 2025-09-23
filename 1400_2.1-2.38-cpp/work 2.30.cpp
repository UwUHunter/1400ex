#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double pi = 3.14159265;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "Введите координаты вершины: ";
    cin >> x1 >> y1;
    cout << "Введите координаты вершины: ";
    cin >> x2 >> y2;
    cout << "Введите координаты вершины: ";
    cin >> x3 >> y3;
    cout << "Введите координаты вершины: ";
    cin >> x4 >> y4;

    double area1 = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    double area2 = 0.5 * fabs(x1 * (y3 - y4) + x3 * (y4 - y1) + x4 * (y1 - y3));

    double arar = area1 + area2;

    cout << "Площадь четырёхугольника: " << arar;

}
