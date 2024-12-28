#include <iostream>
#include <vector>

//По взаимному соглашению типы данных заканчиваются _t
//typedef std::vector<std::pait<std::string, int>> pairlist_t

//Есть два способа назвать тип данных

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

//    pairlist_t pairlist;

    text_t firstName = "Alex";
    number_t age = 20;

    std::cout << firstName << '\n';
    std::cout << "You are already " << age << " years old" ;

    return 0;
}