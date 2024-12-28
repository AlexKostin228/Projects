#include <iostream>
struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);
int main (){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 1969;
    car1.color = "black";

    car2.model = "Skyline";
    car2.year = 1999;
    car2.color = "blue";



    paintCar(car1, "silver");
    paintCar(car2, "red");

    std::cout << &car1 << '\n';

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color){
    car.color = color;
}