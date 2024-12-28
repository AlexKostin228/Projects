#include <iostream>

int myNum = 3;
//Global variable

void printNum();
int main(){
//Local variables = declared inside a function or block{}
//Global variables = declared outside of all functions
    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n';
// :: - scope resolution operator to use the global version
    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n';
}