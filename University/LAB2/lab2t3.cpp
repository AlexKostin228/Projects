#include <iostream> 
using namespace std; 
 
int main() 
{ 
 	int day; 
    cout<<"Введите номер дня недели и нажмите <Enter>\n->";  
    cin>>day;  
    switch (day) { 
 	 	case 1: 
 	 	 	cout<<"Понедельник\n"; 
 	 	 	break;  	 	
        case 2:  	 	 	
            cout<<"Вторник\n"; 
 	 	 	break;  	 	
        case 3:  	 	 	
            cout<<"Среда\n"; 
 	 	 	break;  	 	
        case 4:  	 	 	
            cout<<"Четверг\n"; 
 	 	 	break;  	 	
        case 5:  	 	 	
            cout<<"Пятница\n"; 
 	 	 	break;  	 	
        case 6:  	 	 	
            cout<<"Суббота\n"; 
 	 	 	break;  	 	
        case 7: 
 	 	 	cout<<"Воскресенье\n"; 
 	 	 	break;  	 	
        default: 
 	 	 	cout<<"Число должно быть в диапазоне 1...7\n"; 
 	} 
 	system("pause"); 
} 
