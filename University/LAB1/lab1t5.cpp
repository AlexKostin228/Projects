#include <iostream>

int main(){
    double r1, r2, r;
    std::cout << "***Программа расчета электрической цепи***\n";
    std::cout << "Введите исходные данные\n";
    std::cout << "Сопротивление R1: ";
    std::cin >> r1;
    std::cout << "Сопротивление R2: ";
    std::cin >> r2;
    r = (r1 * r2) / (r1 + r2);
    std::cout << "Результат вычисления R = " << r;


    return 0;
}