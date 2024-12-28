#include <iostream>
#include <string>
#include <array>
#include <deque>
#include <fstream>
using namespace std;

int main(){

    string foods[] = {"lemons", "cheesecake", "salmon"};

    ofstream file("foods2.txt");

    for (string food : foods){
        file << food << endl;
    }
    file.close();

    return 0;
}