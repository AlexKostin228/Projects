#include <iostream>

int main(){
    int p_n, a_n, p_p, a_p, total;
    std::cout << "***Программа вычисления стоимости покупки***\n";
    std::cout << "Введите исходные данные\n";
    std::cout << "Цена тетради (руб): ";
    std::cin >> p_n;
    std::cout << "Количество тетрадей: ";
    std::cin >> a_n;
    std::cout << "Цена карандаша (руб): ";
    std::cin >> p_p;
    std::cout << "Количество карандашей: ";
    std::cin >> a_p;
    total = p_n * a_n + p_p * a_p;
    std::cout << "Стоимость покупки: " << total << " рублей";

    return 0;
}