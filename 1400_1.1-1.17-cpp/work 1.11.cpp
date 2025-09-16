#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "RU");
	std::string a;
	std::cout << "Введите имя - ";
	std::getline(std::cin, a);
	std::cout << a << " - это чемпион!";
	
}