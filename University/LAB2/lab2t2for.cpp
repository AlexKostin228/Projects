#include <iostream> 
#include <locale.h> 
using namespace std; 
 
int main(){ 
 	int i=0, b, sum=0;  	
 	cout<<"Программа, вычисляющая сумму первых 5 положительных  чисел\n"; 
 	for(i=0; i<5; i++){ 
 	 	b=i+1;  	 	
        sum=sum+b; 
 	} 
 	cout<<"\nСумма равна: "<< sum << endl;  	
    system("pause"); 
} 
