#include <iostream>

int main(){
// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression 2

//    int grade = 75;
//    grade >= 60 ? std::cout << "You pass" : std::cout << "You fail!";

//    int num = 9;
//    num % 2 == 0 ? std::cout << "This number is even" : std::cout << "This number is odd";      
    bool hungry = false;
//    hungry ? std::cout << "Get some to eat" : std::cout << "nice";
// hungry ? - hungry == true ?
    std::cout << (hungry ? "Get some to eat": "nice");
    return 0;
}  