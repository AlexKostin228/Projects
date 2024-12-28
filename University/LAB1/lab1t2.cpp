#include <iostream>  

int main(){ 
    int n = 0;  
    int a, b, c; 
 	std::cout << "Программа разбиения числа на разряды\n";  	
    std::cout << "Введите трехзначное число:\n->"; 
 	std::cin >> n;  	
    a = n / 100;  	
    b = (n % 100) / 10; 
 	c = n % 10; 
 	std::cout << "Разряды числа: " << a << "_" << b << "_" << c << std::endl;  	
    return 0; 
} 
