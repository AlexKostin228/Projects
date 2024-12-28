// Программа, записывающая строку символов в бинарном виде в файл  
// file2.txt, и считывающая строку на экран 
 
#include <stdio.h> 
#include <conio.h> 

int main(void) 
{ 	
 	FILE *stream; 
 	char msg[] = "Это проверочный текст";
 	char buf[25]; 
 	printf ("Программа, производящая запись бинарных данных в  файл\n"); 
 	printf ("Для запуска программы нажмите любую клавишу\n"); 
 	getch(); 
 	if ((stream = fopen("FILE2.TXT", "w+b")) 
 	 	 	 == NULL) 
 	{ 
 	 	 	fprintf(stderr, "Невозможно открыть файл.\n"); 
 	 	 	return 1; 
 	} 
 	/* Запись данных в файл */ 
 	fwrite(msg, 20+1, 2, stream); 
 	/* Установка указателя в начало файла */ 
 	fseek(stream, 0, SEEK_SET); 
 	/* Чтение данных в массив и вывод на экран */ 
 	fread(buf, 20+1, 2, stream); 
 	printf("%s\n", buf); 
 	printf ("\nДля завершения программы нажмите любую клавишу"); 
 	getch(); 
 	/* Закрытие файла */ 
 	fclose(stream); 
 	return 0;  
} 

