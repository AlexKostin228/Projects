#include <iostream> 
using namespace std; 
int checkVowels (char vow[], char c) 
{ 
 		
    int i=0;  	
    while(vow[i]!= c){
 	 	i++;
    } 
 	if(i>11){  	 	
        return(1);
    } 
 	else{
        return (0); 
    }
} 
int checkCons(char cons[], char c) 
{ 	
    int i=0;  	
    while(cons[i]!= c){
 	 	i++;
    } 
 	if(i>39){  	 	
        return(3);
    } 
 	else{
        return (2); 
    }
}
 
int main() 
{ 
 	char c; 
 	int a;
    int b;
    char vow[] = {'A','a','E','e','I','i','O','o','U','u','Y','y'}; 
    char cons[] = {'B','b','C','c','D','d','F','f','G','g','H','h',
    'J','j','K','k','L','l','M','m','N','n','P','p','Q','q','R',
    'r','S','s','T','t','V','v','W','w','X','x','Z','z'};  

 	cout<<"Программа проверки английский гласных символов\n";  	
    cout<<"Введите любой символ -> "; 
 	cin >> c;  	
    a=checkVowels(vow, c); 
    if(a==0){  	 	
        cout<<"Символ гласный\n";
    }  	
    else{
        a = checkCons(cons, c);
    }
        
    if(a == 2){
        cout << "Символ согласный";
    }
    else if(a == 3){
        cout << "Символ другой";
    }
    return 0; 
} 
 



 
