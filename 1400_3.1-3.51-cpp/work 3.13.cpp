#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите порядковый номер значения: ";
    cin >> n;

    const int cl = 5;
    int row = (n - 1) / cl + 2;

    cout << "Значение с порядковым номером " << n << " находится в строке " << row << ".";

    return 0;
}
