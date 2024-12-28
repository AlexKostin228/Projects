#include <iostream>
class Human{
    public:
        std::string name = "Rick";
        std::string occupation = "Scientist";
        int age = 70;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink (){
            std::cout << "This person is drinking\n";
        }
        void sleep (){
            std::cout << "This person is sleeping\n";
        }
};

int main (){
    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print".
    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 15;

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();
}