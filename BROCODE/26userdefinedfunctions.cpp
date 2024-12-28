#include <iostream>
void happyBirthday(std::string name, int age);

int main (){
// function = a block of reusable code
    std::string name = "Alex";
    int age = 21;
    happyBirthday(name, age);


    return 0;
}
//you can define a function after the main funciton
//just declare it before the main function
void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";
}
