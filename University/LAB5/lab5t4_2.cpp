#include <stdio.h> 
#include <stdlib.h> 
using namespace std;

int main(){

/*    float a1, a2, b1, b2, c1, c2, x, y;
    a1 = 2.8;
    a2 = 4.5;
    b1 = 8.3;
    b2 = 6.3;
    c1 = 16.25;
    c2 = 20.15;
    unsigned short x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    unsigned short y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
*/

    FILE* bin_file = fopen("binary.dat", "wb");

    if(bin_file == NULL){
        printf("Could not locate file\n");
        exit(-1);
    }
    int number = 32;
    fwrite(&number, sizeof(int), 1, bin_file);

    return 0;
}