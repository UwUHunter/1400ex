#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите а: " << endl;
    cin >> a;
    cout << "Введите b: " << endl;
    cin >> b;
    double c = sqrt(a * a + b * b);
    double p = a + b + c;
    cout << "Периметр равен: " << p;
}

