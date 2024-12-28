#include <iostream>
#include <string>
#include <array>
#include <deque>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    string foods[3];
    ifstream file("foods2.txt");

    string food;
    for(int i = 0; i < 3; i++){
        file >> foods [i];
        cout << foods[i] << endl;
    }
    file.close();

    system("pause");
    return 0;
}