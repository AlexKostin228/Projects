#include <iostream>
#include <fstream>
using namespace std;


int main(){
    cout << "What did you eat?: ";
    string food;
    cin >> food;

    ofstream file("foods.txt");
    file << food;
    file.close();

    system("pause");
}