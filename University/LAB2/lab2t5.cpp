#include <iostream>

int main(){
    int amount, b, sum = 0;
    std::cout << "***Программа вычисления суммы***\n";
    std::cout << "Введите исходные данные:\n";
    std::cout << "Количество чисел: ";
    std::cin >> amount;
    for(int i = 1; i < amount * 2; i+=2){
        sum = sum + i;
    }
    std::cout << "Сумма " << amount << " чисел равна "<< sum;
    return 0;
}