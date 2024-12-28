#include <iostream>

int main(){
    int n, i = 1, f = 1;
    std::cout << "***Программа вычисления факториала***\n";
    std::cout << "Введите исходные данные\n";
    std::cout << "N = ";
    std::cin >> n;
    while(i <= n){
        f = f * i;
        i++;
    }
    std::cout << "Факториал числа " << n << " равен " << f;
    return 0;
} 

