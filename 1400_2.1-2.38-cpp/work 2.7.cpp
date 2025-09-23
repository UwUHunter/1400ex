#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double a;
	cout << "Введите длину ребра куба: ";
	cin >> a;
	double v = a * a * a;
	double b = 4 * a * a;
	cout << "Объём: " << v << endl;
	cout << "Площадь боковой поверхности: " << b;
}