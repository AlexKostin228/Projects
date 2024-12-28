#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("foods.txt");
    string food;
    file >> food;

    cout << "You ate " << food << endl;
    file.close();

    system("pause");
}