#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double a;
	cout << "Введите радиус окружности: " << endl;
	cin >> a;
	
	double d = a * 2;
	cout << "Диаметр:  " << d << endl;
}