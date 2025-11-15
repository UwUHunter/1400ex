#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество месяцев: ";
    cin >> n;

    int x = (n % 12) + 1;
    cout << "Номер месяца: " << x;
    return 0;
}
