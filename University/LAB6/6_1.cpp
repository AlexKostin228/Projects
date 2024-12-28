// Программа для расчета кода введенного символа 
#include <stdio.h> 
#include <conio.h>
int main() 
{ 
 	unsigned char ch;  
 	printf("Программа для вывода кода символа\n"); 
 	printf("Введите символы\nДля завершения нажмите точку (.)\n");  	
    do {  	 	
        ch=getch(); 
	 	printf("Символ: %c Код: %d\n", ch, ch); 
 	} 
 	while (ch!='.'); 
 	printf("Для завершения нажмите любую клавишу");  	
    getch(); 
} 
