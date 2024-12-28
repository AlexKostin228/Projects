#include <iostream>

int main(){
    /* const используется, чтобы задавать значения, которые
    нельзя изменить (например, если кто-то залезет в код
    и попробует изменить, у него не выйдет) - будет ошибка
    
    Названия переменных в этом случае обязательно
    пишуться большими буквами
    */
    const double PI = 3.14159;
    const LIGHT_SPEED = 299792458;
    const WIDTH = 1920;
    const int HEIGHT = 1080;

    double radius = 10;
    double circumference = 2 * PI * radius;
    
    std::cout << circumference << " cm";

    return 0;
}