#include <iostream>

int main(){

    std::string name;

//    while(1==1){
//        std::cout << "HELP! I'M STUCK IN AN INFINITE LOOP!!!";
//    }
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);


    }
    std::cout << "Hello " << name;

    return 0;
}