#include <iostream>

/*namespaces are used to give each entity (variable)
various values
*/
namespace first{

    int x = 1;
}
namespace second {

    int x = 2;
}
int main(){
    using namespace first;

    std::cout << second::x;
/*Если явно не указать, какой namespace нам нужен
х останется со значение из int main()
std::cout << first::x;
*/



    return 0;
}