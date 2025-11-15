#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n = 564;
	int x;
	x = (n % 10) * 100 + (n / 10);
	cout << "Исходное число х: " << x << endl;
	return 0;
}