#include <iostream>

int main(){

    double temp;
    char unit;
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert in? ";
    std::cin >> unit;

    if(unit == 'f' || unit == 'F'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is " << temp << " degrees Fahrenheit";
    }
    else if(unit == 'c' || unit == 'C'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is " << temp << " degrees Celsius";
    }
    else{
        std::cout << "Please enter in only C or F";
    }
    
    return 0;
}