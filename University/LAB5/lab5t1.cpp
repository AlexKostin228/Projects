#include <stdio.h> 
#include <conio.h> 
 
int main(void) 
{ 
 	FILE *stream;  	
    int i = 100;  	
    char c = 'C';  	
    float f = 1.234;  	
 	printf ("Программа, производящая запись данных в файл\n");  	
    printf ("Для записи нажмите любую клавишу"); 
 	getch(); 
 
 /* открытие файла для записи */  
    stream = fopen("File1.txt", "w+");  /* запись данных в файл */ 
 	fprintf(stream, "%d %c %f", i, c, f); 
 
 	/* закрытие файла */ 
 	fclose(stream); 
} 
