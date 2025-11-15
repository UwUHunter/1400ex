#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int res, sd, tdn, fd, td, x;
	res = 456;
	sd = res % 10;
	tdn = res / 10;
	fd = tdn / 10;
	td = tdn % 10;
	x = fd * 100 + sd * 10 + td;
	cout << "Исходное число: " << x << endl;
	return 0;
}