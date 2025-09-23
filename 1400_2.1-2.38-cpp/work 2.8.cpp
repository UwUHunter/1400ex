#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const double p = 3.1415926535;
	double r;
	cout << "Введите радиус окружности";
	cin >> r;
	double a = 2 * p * r;
	double f = p * r * r;
	cout << "Длина: " << a << endl;
	cout << "Площадь: " << f;

}