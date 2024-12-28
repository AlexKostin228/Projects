#include <iostream> 
using namespace std;
 
int main(){ 
    float l,w,s; 
 
    cout<<"Программа вычисления площади треугольника\n";  	
    cout<<"Введите исходные данные:\n->";  	
    cout<<"Длина (см.):";  	
    cin>>l;  	
    cout<<"Ширина (см.):";  	
    cin>>w; 
    s = l * w; 
    cout<< "Площадь прямоугольника: " << s << endl;  
    return 0; 
} 
