#include <iostream>
#include <cmath>

int main(){
    double x;
    double y;
    std::cout << "***Программа вычисления уравнения y=4.5x3-0.5x2-1.2x+0.67***\n";
    std::cout << "Введите значение параметра x: ";
    std::cin >> x;
    y = 4.5 * pow(x, 3) - 0.5 * pow(x, 2) - 1.2 * x + 0.67;
    std::cout << y;


    return 0;
}