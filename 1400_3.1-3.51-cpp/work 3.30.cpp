#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите натуральное число n (n > 99): ";
	cin >> n;

	int u = (n / 10) % 10;
	cout << "Число десятков: " << u << endl;

	int t = (n / 100) % 10;
	cout << "Число сотен: " << t;
	return 0;
}