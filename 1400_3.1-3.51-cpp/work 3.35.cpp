#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, buf, buf1, num;
	cout << "Введите число (1 <= n <= 999): ";
	cin >> n;

	while (n < 1 || n > 999) {
		cout << "Ошибка: число должно быть в диапазоне.";
		cin >> n;
	}
	buf = n / 10;
	buf1 = n % 10;

	num = buf1 * 100 + buf;
	cout << "Исходное число: " << num << endl;
	return 0;
}