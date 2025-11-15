#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a;
    cout << "Введите номер квартиры: ";
    cin >> a;

    const int f = 5;
    const int q = 20 / f;

    int fr = (a - 1) / (q + 1);

    int qw = (a - 1) % q + 1;
    
    cout << "Кватрира находится на " << fr << " этаже" << endl;
    cout << "Номер квартиры на этаже: " << qw;
}
