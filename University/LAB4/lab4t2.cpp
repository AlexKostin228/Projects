#include <iostream> 
using namespace std; 
int glasnaya (char mas[], char c) 
{ 
 		
    int i=0;  	
    while(mas[i]!=c){
 	 	i=i++;
    } 
 	if(i>12){  	 	
        return(1);
    } 
 	else{
        return (0); 
    }
} 
 
int main() 
{ 
 	char c; 
 	int a;
    char mas[] = {'A','a','E','e','I','i','O','o','U','u','Y','y'};   
 	cout<<"Программа проверки английский гласных символов\n";  	
    cout<<"Введите любой символ ->"; 
 	cin >> c;  	
    a=glasnaya(mas, c);  	
    if(a==0){  	 	
        cout<<"Символ гласный\n";
    }  	
    else{
        cout<<"Символ негласный\n";  
    }	
    return 0; 
} 
 
