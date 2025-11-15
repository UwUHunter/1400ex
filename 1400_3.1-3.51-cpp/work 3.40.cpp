#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int res, ld, tdn, fd, sd, x;
	res = 654;

	ld = res / 100;
	tdn = res % 100;
	sd = tdn / 10;
	fd = tdn % 10;

	x = sd * 100 + fd * 10 + ld;
	cout << "Исходное число: " << x << endl;
	return 0;
}