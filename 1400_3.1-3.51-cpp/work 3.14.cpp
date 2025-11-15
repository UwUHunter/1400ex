#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int an;
    cout << "Введите порядковый номер значения: ";
    cin >> an;

    const int frs = 9;
    const int apf = 6;
    const int ape = frs * apf;

    int ent = (an - 1) / ape + 1;
    int fl = ((an - 1) % ape) / apf + 1;
    int aof = ((an - 1) % ape) / apf + 1;

    cout << "Подъезд: " << ent << endl;
    cout << "Этаж: " << fl << endl;
    cout << "Номер квартиры на этаже: " << aof;
    
    return 0;
}
