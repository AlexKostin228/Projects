#include <iostream>

int main (){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
/*
    if (name.length() > 12){
        std::cout << "Your name can't be over 12 characters";
    }
    else{
        std::cout << "Welcome " << name;
    }
*/
    if(name.empty()){
        std::cout << "You didn't enter your name";
    }
    else {
        std::cout << "Welcome " << name << '\n';
    }
//    name.clear(); - clears the string
//    std::cout << "Hello " << name;

//    name.append("@gmail.com");
//    std::cout << "your mail is " << name;

//    std::cout << name.at(0); - gives character at given position

//    name.insert(0, "@"); - inserts a string at given position
//    std::cout << name;

//    std::cout << name.find (' '); - gives an index of a char
//    return 0;
    name.erase(0, 6);
    std::cout << name;
}