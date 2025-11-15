#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int res = 546;
	int b = res / 100;
	int ac = res % 100;
	int a = ac / 10;
	int c = ac % 10;

	int x = a * 100 + b * 10 + c;
	cout << "Исходное число: " << x << endl;
	return 0;
}