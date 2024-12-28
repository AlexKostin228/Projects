#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
 
int main(void) 
{ 
 	char str[20];
	unsigned char sym;
	int pos, i;  	
	printf(" Программа поиска символа в строке  \n"); 
 	printf("Введите строку символов\n ->");  
    scanf("%s", str);
 	printf("Введите символ\n ->");  
    scanf("%c", sym);  

	do{
		i++;
	}while(str[i] != sym);
	if(i < sizeof(str)){
		printf("Символ %c присутствует, находится на %d месте", sym, i);
	}
	else{
		printf("В строке нет такого символа");
	} 
 	printf("\nДля завершения нажмите любую клавишу");  	
    getch(); 
} 
