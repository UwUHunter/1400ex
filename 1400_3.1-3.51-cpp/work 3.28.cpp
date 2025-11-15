#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int num;
	cout << "Введите четырёхзначное число: ";
	cin >> num;

	// a)
	int rev = 0;
	int temp = num;
	while (temp > 0) {
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	cout << "а) " << rev << endl;

	// b)
	int d1 = num / 1000;
	int d2 = (num / 100) % 10;
	int d3 = (num / 10) % 10;
	int d4 = num % 10;

	int swap = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
	cout << "b) " << swap << endl;

	// c)
	swap = d1 * 1000 + d3 * 100 + d2 * 10 + d4;
	cout << "с) " << swap << endl;

	// d)
	swap = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
	cout << "d) " << swap;

	return 0;
}