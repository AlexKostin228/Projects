#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;
    vector <int> :: iterator it;
    vector <int> :: reverse_iterator it1;
    for (int i = 0; i < 10; i++);
        vec.push_back(i);
    for (it = vec.begin(); it < vec.end(); it++){
        cout << *it << " ";
        cout << endl;
    }
    return 0;
}