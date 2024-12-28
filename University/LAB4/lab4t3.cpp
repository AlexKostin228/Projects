#include <iostream> 
using namespace std; 

float vpar(float h, float a, float b) 
{ 
 	return (a * b * h); 
} 
int main() 
{ 
 	float a, b, h, v; 
  	
    cout<<"Вычисление объема параллелепипеда";  	
    cout<<"\nВведите данные\n"; 
    cout << "Введите высоту: ";
 	cin >> h;
    cout << "Введите длину: ";
 	cin >> a;
    cout << "Введите ширину: ";
 	cin >> b;

 	v=vpar(h, a, b); 
 	cout<<"Объем параллелепипеда равен: "<< v <<endl;  	
    system("pause"); 
} 
