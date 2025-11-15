#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num;

    cout << "Введите трехзначное число: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Число должно быть трехзначным!" << endl;
        return 1;
    }

    int h = num / 100;         // Сотни
    int t = (num / 10) % 10;       // Десятки
    int u = num % 10;             // Единицы

    if (h == t || h == u || t == u) {
        cout << "Цифры числа должны быть различны!" << endl;
        return 1;
    }

    cout << "Все возможные перестановки: " << endl;
    cout << h * 100 + t * 10 + u << endl;
    cout << h * 100 + u * 10 + t << endl;
    cout << t * 100 + h * 10 + u << endl;
    cout << t * 100 + u * 10 + h << endl;
    cout << u * 100 + h * 10 + t << endl;
    cout << u * 100 + t * 10 + h;

    return 0;
}