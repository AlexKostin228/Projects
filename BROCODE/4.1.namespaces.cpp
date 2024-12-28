#include <iostream>

int main(){

/*using namespace Используется, чтобы не писать std:: ,
но надо быть осторожным, потому что этот нэймспэйс содержит
сотни тысяч разных переменных, что может вызвать конфликты
*/
    using std::cout;
    using std::string;
//Более безопасная альтернатива
    string name = "Alex" ;
    cout << name;

    return 0;
}