#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h> 

using namespace std;

int main(){
    char s[10], n[10], p[10]; 

    printf("Введите фамилию\n->");
    scanf("%10s", s);
    printf("Введите имя\n->");
    scanf("%10s", n);
    printf("Введите отчество\n->");
    scanf("%10s", p);

    printf("Здравствуй %s %s %s", s, n, p);

    return 0;
}