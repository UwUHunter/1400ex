#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x1, y1, x2, y2;
    cout << "Введите координаты первой точки: " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки: " << endl;
    cin >> x2 >> y2;

    double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Расстояние: " << dis;
    
}