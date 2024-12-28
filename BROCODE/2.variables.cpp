
#include <iostream>

int main(){

    //int = integer (whole number)

    int x; //declaration
    x = 5;  //assignment

    int y = 6;
    int sum = x + y;
    int age = 20;

    //double - number including decimal
    double price = 10.99;
    double temperature = 25.1;

    //char - single character
    char grade = 'A' ;
    char currency = '$';

    //boolean (true or false)

    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (objects that represent a sequence of text)
    std::string name = "Alex" ;
    std::string day = "Sunday";
    
    std::cout << "Hello " << name <<'\n';
    std::cout << "You are " << age << " years old" ;

    return 0;
}