#include <iostream>

int main (){

    //fill () = Fills a range of elements with a specified value
    //          fill(begining address, ending address, value)

    const int SIZE = 99;
    std::string foods[SIZE];
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3) *2, "hamburgers");
    fill(foods + (SIZE/3) * 2, foods + SIZE, "hotdogs");
    for(std::string food: foods){
        std:: cout << food << '\n';
    }
    for

    return 0;
}