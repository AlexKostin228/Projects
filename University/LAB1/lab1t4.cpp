#include <iostream>

int main(){
    int a, b, h, v;
    std::cout << "**Программа вычисления объема параллелепипеда***\n";
    std::cout << "Введите исходные данные\n";
    std::cout << "Длина (см): ";
    std::cin >> a;
    std::cout << "Ширина (см): ";
    std::cin >> b;
    std::cout << "Высота (см): ";
    std::cin >> h;
    v = a * b * h;
    std::cout << "Объём параллелепипеда = " << v << " куб.см";

    return 0;
}