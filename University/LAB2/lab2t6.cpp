#include <iostream>
#include <cmath>

int main(){
    double y;
    double x;
    double i = -2;
    std::cout << "***Программа вычисления функции y = -2.4x^2+5x-3***\n";

    while(i <= 2){
        x = i;
        std::cout << "x = " << x << "; ";
        y = - 2.4 * pow(x, 2) + 5 * x - 3;
        std::cout << "y = " << y << " \n";
        i += 0.5;
    }

    return 0;
}