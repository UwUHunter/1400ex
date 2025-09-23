#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    cout << "Сумма = " << x + y << endl;
    cout << "Разность = " << x - y << endl;
    cout << "Произведение = " << x * y << endl;
    if (y == 0) {
        cout << "Деление на 0 невозможно!";
        return 1;
    }
    else {
        cout << "Частное: " << x / y << endl;
    }
    
    
}