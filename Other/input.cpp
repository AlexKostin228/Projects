#include <iostream>

using namespace std;
int main (){
    
    string name;
    setlocale(LC_ALL, "Russian");   
    cout << "Enter your name : " ;
    getline(cin,name);
    cout << "Hello " << name<<endl;

    return 0;
}