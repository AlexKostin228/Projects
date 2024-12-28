#include <iostream>

int main (){
// &&(AND) = check if two conditions are true (Логическое умножение, рез истина если оба истина, в остальных случаях ложь)
// ||(OR) = check if at least one of two conditions is true  (логическое сложение, ложь если оба ложь, в остальных ИСТИНА)
// !(NOT) = reverses the logical state of its operand (НЕ - отрицание)

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

/*    if (temp > 0 && temp < 30){
        std::cout << "The temperature is good";
    }
    else{
        std::cout << "The temperature is bad";
    }
*/

    if (temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad" << '\n';
    }
    else{
        std::cout << "The temperature is good" << '\n';
    } 

    bool sunny = true;
    if (!sunny){
        std::cout <<"It's cloudy outside!";
    }
    else
        std::cout << "It's sunny outside!";
    return 0;
}