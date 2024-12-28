// Программа, считывающая значения трех переменных различных типов, 
// из файла с названием File1.txt и выводящая их на экран 
 
#include <stdio.h> 
#include <conio.h>  
 
int main(void) 
{ 
 	FILE *stream;  	
    int i;  	
    char c;  	
    float f; 
 	printf ("Программа, производящая чтение данных из файла"); 
 	/* открытие файла для чтения */  	
    stream = fopen("File1.txt", "r+");  	
    /* чтение данных из файла */  	
    fscanf(stream, "%d %c %f", &i, &c, &f);  	
    printf ("\ni=%d c=%c f=%f", i, c, f); 
 	printf ("\nДля завершения программы нажмите любую клавишу");  	
    getch(); 
 	/* закрытие файла */ 
 	fclose(stream); 
} 
