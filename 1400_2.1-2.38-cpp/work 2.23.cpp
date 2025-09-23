#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите длинну а: " << endl;
    cin >> a;
    cout << "Введите длинну b: " << endl;
    cin >> b;

    double p = 2 * (a + b);
    double d = sqrt(a * a + b * b);

    cout << "Периметр: " << p << endl;
    cout << "Диагональ: " << d;
    
}