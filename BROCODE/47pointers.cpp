#include <iostream> 

int main(){

    // pointers = variable that stores a memory address of another variable 
    //            sometimes it's easier to work with an address 

    // & address-of operator 
    // * dereference operator 

    std::string name = "Sasha";
    int age = 20;

    std::string *pName = &name;
    int *pAge = &age;
    std::string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName<< '\n';
    std::cout << *pAge<< '\n';
    // use * dereference operator to access a value at that address
    std::cout << *pFreePizzas;

    return 0;
}