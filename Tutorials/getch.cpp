#include <conio.h>
#include <stdio.h>

int main(){
// getch() and getche() should not be used because these are very old functions
// from <conio.h> and are only compatible with Windows
    int c = getche();
//    int c = getc(stdin); for standard input
//            getchar(); - exactly the same
    printf("Printed char: %c", c);

    return 0;
}