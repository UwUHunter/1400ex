#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int y = 237;
	int num = y / 100;
	int priv = y % 100;
	int x = priv * 10 + num;
	cout << "Исходное число х: " << x;
	return 0;
}