#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double x;
	cout << "Введите значение стороны квадрата: ";
	cin >> x;
	double y = x + x + x + x;
	cout << "Периметр квадрата равен: " << y << endl;
}