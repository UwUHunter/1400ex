#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, x, fd, ld, md, tdn;
	cout << "Введите число n (100 <= n <= 999): ";
	cin >> n;

	if (n < 100 || n > 999) {
		cout << "Ошибка: число должно быть в диапазоне.";
		return 1;
	}
	ld = n % 10;
	tdn = n / 10;
	fd = tdn / 10;
	md = tdn % 10;

	x = fd * 100 + ld * 10 + md;
	cout << "Исходное число: " << x << endl;
	return 0;
}