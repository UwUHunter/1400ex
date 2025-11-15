#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите номер места (Всего 36 мест): " << endl;
    cin >> a;

    if (a == 1 | a == 2 | a == 3 | a == 4) {
        cout << "Ваше место в вагоне №1";
        return 1;
    }
    else if (a == 5 | a == 6 | a == 7 | a == 8) {
        cout << "Ваше место в вагоне №2";
        return 1;
    }
    else if (a == 9 | a == 10 | a == 11 | a == 12) {
        cout << "Ваше место в вагоне №3";
        return 1;
    }
    else if (a == 13 | a == 14 | a == 15 | a == 16) {
        cout << "Ваше место в вагоне №4";
        return 1;
    }
    else if (a == 17 | a == 18 | a == 19 | a == 20) {
        cout << "Ваше место в вагоне №5";
        return 1;
    }
    else if (a == 21 | a == 22 | a == 23 | a == 24) {
        cout << "Ваше место в вагоне №6";
        return 1;
    }
    else if (a == 25 | a ==  26 | a == 27 | a == 28) {
        cout << "Ваше место в вагоне №7";
        return 1;
    }
    else if (a == 29 | a == 30 | a == 31 | a == 32) {
        cout << "Ваше место в вагоне №4";
        return 1;
    }
    else if (a == 33 | a == 34 | a == 35 | a == 36) {
        cout << "Ваше место в вагоне №4";
        return 1;
    }
    else {
        cout << "Неверное число";
    }
    return 0;
}
