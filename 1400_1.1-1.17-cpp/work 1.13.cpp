#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "RU");
	int a;
	std::cout << "Введите число - ";
	std::cin >> a;
	std::cout << "Следущее за числом " << a << " число - " << a+1 << std::endl;
	std::cout << "Для числа " << a << " предыдущее число - " << a-1;
	
	
}