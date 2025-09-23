#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double a;
	cout << "Введите значение х: ";
	cin >> a;
	
	double y1 = (a * a + 10)/(sqrt(a * a + 1));
	cout << "y =  " << y1 << endl;
}