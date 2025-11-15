#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a = 234;

    double b = a / 7;
    cout << "В неделях (целоя часть): " << round(b * 1) / 1 << endl;
}
