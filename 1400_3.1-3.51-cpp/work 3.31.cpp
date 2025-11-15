#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите натуральное число n (n > 999): ";
	cin >> n;

	int u = (n / 100) % 10;
	cout << "Число сотен: " << u << endl;

	int t = (n / 1000) % 10;
	cout << "Число тысяч: " << t;
	return 0;
}