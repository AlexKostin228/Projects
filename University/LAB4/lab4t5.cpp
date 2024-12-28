#include <iostream> 
using namespace std; 

float deposit(float sum, float percent, float days) 
{ 
    return (sum * (percent / 100) * (days / 365));
} 
int main() 
{ 
 	float sum, percent, days, profit; 

    cout<<"= Программа, вычисляющая доход по вкладу =\n";
    cout<<"Введите исходные данные\n";      	
    cout<<"Сумма вклада (руб.): ";  	
 	cin >> sum ; 
    cout << "Процентная ставка (годовых): ";
    cin >> percent;
    cout << "Срок вклада (дней): ";
    cin >> days;
    profit = deposit(sum, percent, days);
    cout << "Доход по вкладу (руб.) = " << profit << endl;
    system("pause"); 
} 
