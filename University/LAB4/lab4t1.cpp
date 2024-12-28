#include <iostream> 
using namespace std; 

float vcil(float h, float r) 
{ 
 	return (3.14*r*r*h); 
} 
int main() 
{ 
 	float h, r, v; 
  	
    cout<<"Вычисление объема цилиндра";  	
    cout<<"\nВведите высоту и радиус основания\n ->"; 
 	cin >> h >> r; 
 
 	v=vcil(h,r); 
 	cout<<"Объем цилиндра равен: "<< v <<endl;  	
    system("pause"); 
} 
