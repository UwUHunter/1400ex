#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите натуральное число n (n > 9): ";
	cin >> n;

	int u = n % 10;
	cout << "Число единиц: " << u << endl;

	int t = (n / 10) % 10;
	cout << "Число десятков: " << t;
	return 0;
}