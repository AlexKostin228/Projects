#include <iostream>

int main(){
    int code, time;
    double cost;
    std::cout << "***Программа вычисления стоимости телефонного разговора***\n";
    std::cout << "Введите исходные данные\n";
    std::cout << "Код города -> ";
    std::cin >> code;
    std::cout << "Время разговора(мин)-> ";
    std::cin >> time;
    
    switch(code){
        case 423:
            cost = time * 3.2;
            std::cout << "вы разговаривали с городом: Владивосток\n";
            std::cout << "Стоимость разговора: " << cost << " рублей";   
            break; 
        case 495:
            cost = time * 10.2;
            std::cout << "вы разговаривали с городом: Москва\n";
            std::cout << "Стоимость разговора: " << cost << " рублей";
            break;
        case 812:
            cost = time * 10.9;
            std::cout << "вы разговаривали с городом: Санкт-Петербург\n";
            std::cout << "Стоимость разговора: " << cost << " рублей";
            break;
        case 815:
            cost = time * 11.3;
            std::cout << "вы разговаривали с городом: Мурманск\n";
            std::cout << "Стоимость разговора: " << cost << " рублей";
            break;
        case 846:
            cost = time * 8.4;
            std::cout << "вы разговаривали с городом: Самара\n";
            std::cout << "Стоимость разговора: " << cost << " рублей";
            break;
        default:
            std::cout << "Код города набран неправильно";
    }


    return 0;
}
