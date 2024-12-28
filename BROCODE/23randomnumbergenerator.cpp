#include <iostream>
#include <ctime>

int main (){

//pseudo-random
    srand(time(NULL));
    int num1 = (rand() % 20) + 1;
    int num2 = (rand() % 20) + 1;
    int num3 = (rand() % 20) + 1;
// rand % 20 - gives random number between 0 and 19
// rand will generate a random number between 0 and 32767
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}