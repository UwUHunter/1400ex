#include <iostream>
#include <cmath>
using namespace std;

/*int main() {
	setlocale(LC_ALL, "RU");
	double a;
	cout << "Введите значение х: ";
	cin >> a;
	double y = sqrt((2 * a + sin(fabs(3 * a))) / 3.56);
	cout << "Значение выражения = " << y << endl;
}*/
int main() {
	setlocale(LC_ALL, "RU");
	double x;
	cout << "Введите значение х: ";
	cin >> x;
	double y = sin((3.2 + sqrt(1 + x)) / (fabs(5 * x)));
	cout << "Значение выражения = " << y << endl;
}