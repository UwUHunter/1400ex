#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double f;

    cout << "Введите температуру в градусах Цельсия: ";
    cin >> f;

    double c = (f - 32) / 1.8;

    cout << "В градусах Цельсия: " << c;
    
}
