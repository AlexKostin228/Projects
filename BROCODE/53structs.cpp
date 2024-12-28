#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main (){
    //struct = A structure that group related variables under one name
    //         structs can contain many different data types (string, int, double, bool etc)
    //         variables in a struct are known as "members"
    //         members can be access with . "Class Member Access Operator"
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
//    student1.enrolled = true;
    student student2;
    student1.name = "Patrick";
    student1.gpa = 1.5;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    
    
    return 0;
}