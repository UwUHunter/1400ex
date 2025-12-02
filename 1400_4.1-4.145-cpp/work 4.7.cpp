#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double x, k, f;
	cout << "Введите значение х: ";
	cin >> x;

	if (sin(x) <0) {
		k = pow(x, 2);
	}
	else {
		k = abs(x);
	}
	if (k < x) {
		f = k * x;
	}
	else {
		f = k + x;
	}
	cout << "sin(x) = " << sin(x) << endl;
	cout << "k = " << k << endl;
	cout << "f(x) = " << f << endl;
	return 0;
}