// praktikum3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
double Discount(double, double);

int main()
{
    double price, discount;
    std::cin >> price >> discount; 
    std::cout << Discount(price, discount) << "lv. \n";
    
    return 0;
}
double Discount(double price, double discount) {
    return  (price - (price * discount / 100));
}

/*
Задача 3.
Да се напише функция, която по подадени реални положителни числа, които съответстват на цена и процент отстъпка, връща като резултат намалената цена.
Вход: 100 50
Изход: 50lv.

Вход: 40 10
Изход: 36lv.
*/