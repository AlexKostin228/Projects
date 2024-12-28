#include <iostream> 
#include <fstream> 
using namespace std;

int main (){

    float a1, a2, b1, b2, c1, c2, x, y;
    a1 = 2.8;
    a2 = 4.5;
    b1 = 8.3;
    b2 = 6.3;
    c1 = 16.25;
    c2 = 20.15;
    x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    string z = "\n";
    ofstream file("Reshenie.txt");

    file << x;
    file << z;
    file << y;

    file.close();
    return 0;
}