#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double a, b;

    std::cout << "Дан прямоугольник с размерами 543×130 мм. " << endl;
    a = 543;
    b = 130;

    double c = a / 130;
    cout << "Целых квадратов со стороной 130: " << round(c * 1) / 1;
    

    return 0;
}
