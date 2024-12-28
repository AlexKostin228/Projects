#include <iostream>
int main() 
{
    std::string name;
    int age;

// function to read a string with spaces

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    getline(std::cin >> std::ws, name);
// ws will eliminate any new line characters or white spaces
//before any user input    

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
   return 0;
}