#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, a, b, c, x;
	cout << "Введите число n (10 <= n<= 999, число десятков не = 0): ";
	cin >> n;

	if (n < 10 || n > 999) {
		cout << "Ошибка: число должно быть в диапазоне.";
		return 1;
	}
	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;

	x = (n % 100) * 10 + a;
	cout << "Исходное число: " << x << endl;
	return 0;
}