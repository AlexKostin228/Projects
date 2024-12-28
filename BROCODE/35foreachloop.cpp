#include <iostream>

int main(){

    // foreach loop = loop that eases the traversal over an
    //                iterable data set
    int grades[] = {65, 72, 81, 93};

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    for(int grade : grades){
        std::cout << grade << '\n';
    }

    for(std::string student : students){
        std::cout << student << '\n';
    }

    return 0;
}