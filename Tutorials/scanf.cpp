#include <stdio.h>
#include <conio.h>

int main(){

    int x = 7;
    printf("new x? ");
    scanf("%d", &x);
    printf("x = %d\n", x);

    printf("What is your name? ");
    char name[20];
    scanf("%s", name);
    printf("name = %s\n", name);
    return 0;
}