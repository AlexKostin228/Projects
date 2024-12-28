#include <iostream>

int main(){
    int students = 20;
//    students = students + 1;
//    students += 1;
//    students ++ ;

//    students = students - 1;
//    students -= 1;
//    students --;

//    students = students * 2;
//    students *= 2;

//    students = students / 3;
//    students /= 3;
    
// Остаток = студенты % 3 = 2   
    int remainder = students % 3;
    std::cout << remainder;

/*Чтобы узнать чётное(even) или нечётное(odd) число
Число % 2
Если остаток 0, то чётное, если 1, то нечётное
*/
    return 0;
}