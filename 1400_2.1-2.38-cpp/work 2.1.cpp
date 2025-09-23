#include <iostream>
using namespace std;

/*int main() {
	setlocale(LC_ALL, "RU");
	double x;
	cout << "Введите значение х: ";
	cin >> x;
	double y1 = 17 * x * x - 6 * x + 13;
	cout << "y = 17x^2 - 6x + 13 = " << y1 << endl;
}*/
int main() {
	setlocale(LC_ALL, "RU");
	double a;
	cout << "Введите значение х: ";
	cin >> a;
	double y1 = 17 * a * a + 5 * a - 21;
	cout << "y = 17a^2 + 5a - 21 = " << y1 << endl;
}