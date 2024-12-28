#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 
 	double a[10];
    double arith; 
    double sum = 0;
    double amount = 0;
 	cout << "***Вычисление среднего арифметического элементов массива***\n";  	  	
    for(int i = 0; i < 10; i++){
        cout << "Введите элемент №" << i + 1 << " ";
        cin >> a[i];
    }
    for(int i = 0; i < 10; i++){
        if(a[i] != *min_element(a, a + 10) || *max_element(a, a + 10)){
            sum = sum + a[i];
            amount++;
        }
    } 
    arith = sum / amount;
    cout << "Минимальный элемент массива А[] = " << *min_element(a, a + 10) << endl;
    cout << "Максимальный элемент массива А[] = " << *max_element(a, a + 10) << endl;
    cout << "Среднее арифметическое: " << arith;

    return 0; 
} 