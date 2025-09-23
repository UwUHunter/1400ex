#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double v1, v2, s;
    cout << "Введите скорость первого автомобиля: ";
    cin >> v1;
    cout << "Введите скорость второго автомобиля: ";
    cin >> v2;
    
    if (v1 <= v2) {
        cout << "Ошибка v1 должна быть больше v2.";
        return 1;
    }
    
    cout << "Введите расстояние (км) на которое первый автомобиль опередил второй:";
    cin >> s;

    double time = 0.5;
    double dis = s + (v1 - v2) * time;

    cout << "Расстояние между автомобилями через 30 минут после опережения: " << dis << "км." << endl;
}
