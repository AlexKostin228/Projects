#include <iostream>
void swap(std::string &x, std::string &y);
int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';


    return 0;
}
//When you pass value to a function you pass a copy of that value
//For a swap we can pass by a reference (a memory address)
void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}