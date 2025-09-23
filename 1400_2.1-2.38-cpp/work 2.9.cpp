#include <iostream>
#include <cmath>
using namespace std;

/*int main() {
	setlocale(LC_ALL, "RU");
	double x, y;
	cout << "Введите х: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	double z = 2 * x * x * x - 3.44 * x * y + 2.3 * x * x - 7.1 * y + 2;
	cout << "Значение выражения: " << z;

}*/
int main() {
	setlocale(LC_ALL, "RU");
	double a, b;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	double x = 3.14 * ((a + b)*(a + b)*(a + b)) + 2.75 * b * b - 12.7 * a - 4.1;
	cout << "Значение выражения: " << x;
}