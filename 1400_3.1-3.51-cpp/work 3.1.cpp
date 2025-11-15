#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;

    cout << "Введите число: ";
    cin >> a;

    double b = a / 100;
    cout << "В метрах (целоя часть): " << round(b * 1) / 1 << endl;
}
