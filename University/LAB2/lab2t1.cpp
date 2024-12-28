#include <iostream> 
using namespace std; 
 
int main() { 
 	int year; 
 	cout<<"В каком году началась 2 мировая война?\n"; 
 	cout<<"Введите число и нажмите <Enter>\n->"; 
 	cin>>year; 
 	if (year==1939)  	 	cout<<"Правильно\n"; 
 	else 
 	{ 
 	 	cout<<"Вы ошиблись,"; 
 	 	cout<<" 2 мировая война началась в 1939 году\n"; 
 	} 
 	return 0; 
} 
