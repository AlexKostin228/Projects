#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    string name;
    int age;
    cout << "Пожалуйста, введите своё имя: ";
    cin >> name;
    cout << name;

    return 0;
}
