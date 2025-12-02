#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int res, fd, sd, td, x;
	res = 654;
	fd = res / 100;
	sd = (res / 10) % 10;
	td = res % 10;

	x = td * 100 + sd * 10 + fd;
	cout << "Исходное число: " << x << endl;
	return 0;
}