#include <iostream>

int main (){
    int x, y;
    std::cout << "***Программа сравнения чисел***\n";
    std::cout << "Введите исходные данные\n";
    std::cout << "Первое число x: ";
    std::cin >> x;
    std::cout << "Второе число y: ";
    std::cin >> y;
    if(x > y){
        std::cout << "x > y";
    }
    else if(x = y){
        std::cout << "x = y";
    }
    else{
        std::cout << "x < y";
    }


    return 0;
}