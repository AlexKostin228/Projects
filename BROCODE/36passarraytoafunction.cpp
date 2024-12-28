#include <iostream>
double getTotal (double prices[], int size);
int main(){

    double prices[] = {49.99, 50.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}
/*When we pass an array through a function, it becomes
a pointer to an original address of that array, so the
function doesn't the size of the array.
We can declare the size explicitly*/
double getTotal(double prices[], int size){
    double total = 0;

    for (int i = 0; i < size; i++){
//        total = total + prices[i];
        total += prices[i];
    }

    return total;
} 