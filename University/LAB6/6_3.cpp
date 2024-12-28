#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
 
int main(void) 
{ 
 	char str[20], mas[20];  	
	printf("Программа копирования строки \n"); 
 	printf("Введите строку не более 19 символов и нажмите <Enter>\n");  
    scanf("%s", str); 
 
 	strcpy(mas, str);//Перезапись строки в массив  	printf("Массив 2 содержит строку: %s", mas); 
 	printf("\nДля завершения нажмите любую клавишу");  	
    getch(); 
} 
