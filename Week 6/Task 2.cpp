// Praktikum2.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
bool PrimeNumber(int, int);
bool TwinPrimes(int, int);
int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    PrimeNumber(num1, num2);
    std::cout << std::boolalpha << TwinPrimes(num1, num2);
    return 0;
}
bool PrimeNumber(int num1, int num2) {
    if (num1 / 1 == num1 && num1 / num1 == 1 && num2 / 1 == num2 && num2 / num2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TwinPrimes(int num1, int num2) {
    while (PrimeNumber(num1, num2) == true)
    {
        if (num1 + 2 == num2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

/*
Задача 2.
Да се напише функция, която по подадени две естествени числа, връща истина, ако са сдвоени прости. Числата a и b са сдвоени прости ако са прости и a + 2 = b. 
Проверката за просто число да се направи в отделна функция!
Вход: 11 13
Изход: True

Вход: 11 14
Изход: False
*/
