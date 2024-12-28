#include <iostream> 
using namespace std; 
 
int main(){ 
 	string str[]= {"П","р","и","в","е","т"};

    cout<<"Знакомство с символьной строкой\n";  
    cout<<"Строка состоит из слова: " <<endl;
    
    for(int i = 0; i < sizeof(str); i++){
        std::cout << str[i];
    }
    cout<< endl;
    cout<<"Посимвольный вывод строки:\n"; 
    
    for(int i = 0; i < sizeof(str); i++){
        std::cout << str[i] << '\n';
    }


 	return 0; 
} 
