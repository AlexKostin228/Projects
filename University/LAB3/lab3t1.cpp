#include <iostream> 
using namespace std; 
#define SIZE 5

int main(){ 
 	int a[SIZE]; //Массив 
 	int min; //количество ненулевых элементов 
 	int i;  
 	cout<<"Поиск минимального элемента массива.\n";  	
    cout<<"Введите в одной строке элементы массива,\n";  	
    cout<< SIZE <<" целых чисел, и нажмите <Enter>\n->";  	
    for (i=0; i< SIZE; i++){  	 	
        cin>> a[i]; 
    }
 	min=0;
    //Предположим, что первый элемент минимальный 
//Сравним оставшиеся элементы с минимальным  for (i=1;i<SIZE;i++) 
 	 	if(a[i]<a[min]){	 	 	
        min=i; 
        }
 	cout<<"Минимальный элемент массива: " << a[min]<<endl;  	
    return 0; 
} 
