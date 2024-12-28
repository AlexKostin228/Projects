#include <stdio.h> 
#include <conio.h>
void swap(char &ch){

    switch(ch){
        case 'A':
            ch = 'a';
            break;
        case 'B':
            ch = 'b';
            break;
        case 'C':
            ch = 'c';
            break;
        case 'D':
            ch = 'd';
            break;
        case 'E':
            ch = 'e';
            break;
        case 'F':
            ch = 'f';
            break;
        case 'G':
            ch = 'g';
            break;
        case 'H':
            ch = 'h';
            break;
        case 'I':
            ch = 'i';
            break;
        case 'J':
            ch = 'j';
            break;
        case 'K':
            ch = 'k';
            break;
        case 'L':
            ch = 'l';
            break;
        case 'M':
            ch = 'm';
            break;
        case 'N':
            ch = 'n';
            break;
        case 'O':
            ch = 'o';
            break;
        case 'P':
            ch = 'p';
            break;
        case 'Q':
            ch = 'q';
            break;
        case 'R':
            ch = 'r';
            break;
        case 'S':
            ch = 's';
            break;
        case 'T':
            ch = 't';
            break;
        case 'U':
            ch = 'u';
            break;
        case 'V':
            ch = 'v';
            break;
        case 'W':
            ch = 'w';
            break;
        case 'X':
            ch = 'x';
            break;
        case 'Y':
            ch = 'y';
            break;
        case 'Z':
            ch = 'z';

    }
}
int main() 
{ 
 	char ch;  
 	printf("Программа для вывода кода символа\n"); 
 	printf("Введите символы, для завершения (.)\n->");  	
    do {  	
        printf("Введите символ\n->"); 	
        ch=getche(); 
        swap(ch);
	 	printf("\n%c \n", ch);
 	} 
 	while (ch!='.'); 
 	printf("Для завершения нажмите любую клавишу");  	
    getch(); 
} 
