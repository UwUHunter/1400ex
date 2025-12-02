#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double x, k, f;
	cout << "Введите значение х: ";
	cin >> x;

	if (sin(x) >= 0) {
		k = pow(x, 2);
	}
	else {
		k = abs(x);
	}
	if (x < k) {
		f = abs(x);
	}
	else {
		f = k * x;
	}
	cout << "x = " << x << endl;
	cout << "sin(x) = " << sin(x) << endl;
	cout << "k = " << k << endl;
	cout << "f(x) = " << f << endl;
	return 0;
}