#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double c;

    cout << "Введите температуру в градусах Цельсия: ";
    cin >> c;

    double f = c * 1.8 + 32;
    double k = c + 237.15;

    cout << "В градусах фаренгейта: " << f << endl;
    cout << "В градусах Кельвина: " << k;
    
    
}
