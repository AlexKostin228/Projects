#include <iostream>

int main (){
  // sizeof() = determines the size in bytes of a:
  //            variable, data type, class, objects, etc.
    std::string name = "Alex";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A','B','C','D','F'};
    std::string students [] = {"James", "Vova","Bruce"};

    std::cout << sizeof(grades) << " bytes\n";
// trick to find a number of elements in an array
    std::cout << sizeof(grades)/sizeof(char) << " elements\n"; 
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}