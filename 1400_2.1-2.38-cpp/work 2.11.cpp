#include <iostream>
using namespace std;

int main() {
    double v, m;

    cout << "Введите объем: ";
    cin >> v;

    cout << "Введите массу: ";
    cin >> m;

    if (v == 0) {
        cout << "Объем не может быть равен нулю." << endl;
        return 1;
    }

    double d = m / v;

    cout << "Плотность материала: " << d << endl;

}

