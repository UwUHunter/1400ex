#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	const double r = 6350.0;
	double h;
	cout << "Введите высоту";
	cin >> h;
	double d = sqrt(h * h + 2 + r * h);
	cout << "Расстояние до горизонта: " << d << endl;
}