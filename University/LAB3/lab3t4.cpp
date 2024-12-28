#include <iostream>
using namespace std;
void elements(int count);

int main(){ 
 	int a[5], count = 0; 
 	cout<<"***Поиск ненулевых элементов массива***\n";  	  	
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        cout << "Введите элемент №" << i + 1 << " ";
        cin >> a[i];
    }
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        if(a[i] != 0){
            count++;
    }
    }
    elements(count);
    return 0; 
}
void elements(int count){
    if (count == 1){
 	    cout<<"В массиве " << count << " ненулевой элемент"; 	
    }
    else if(count == 0 || count == 5){
        cout << "В массиве " << count << " ненулевых элементов"; 
    }
    else{
        cout << "В массиве " << count << " ненулевых элемента";
    }
}