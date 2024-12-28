#include <iostream> 
using namespace std; 
int main() { 
 	int i=0, b, sum=0;  	
 	cout<<"Программа, вычисляющая сумму первых 5 положительных  чисел\n"; 
 	do{ 
 	 	b=i+1;  	 	
        sum=sum+b;  	 	
        i++; 
 	} 
 	while(i<5); 
 	cout<<"\nСумма равна: "<< sum<<endl;  	
    system("pause"); 
