#include <iostream>

int main(){
    // memory address = a location where data is stored
    // a memory address can be accessed with & (address of operator)

    std::string name = "Alex";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
//address is hexidecimal (шестнадцатеричный)
    return 0;
}