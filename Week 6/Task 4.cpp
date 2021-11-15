// Praktikum4.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
int Matrix(int, int);
int main()
{
    int n, m;
    std::cout << "Enter rows and cols of the matrix: ";
    std::cin >> n >> m;
    std::cout << std::endl;
    Matrix(n, m);

    return 0;
}int Matrix(int n, int m){
    
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i-1; j++)
        {
            std::cout << i * j << "  ";
        }
        for (int j = i; j < i + 1; j++)
        {
            std::cout << n + i-1 << "  ";
        }
        for (int j = i + 1; j <= n; j++)
        {
            std::cout << j - i << "  ";
        }
        std::cout << std::endl;
    }
    return 0;
}
/*Задача 4.
Да се напише функция, която по дадени цели n и m числа създава и отпечатва матрица с n реда и m стълба. Матрицата се запълва по следния начин:
елементите по главния диагонал са равни на номера на реда, в който се намират

елементите над главния диагонал са равни на разликата на номера на стълба и номера на реда, в който се намират

елементите под главния диагонал са равни на произведението на номера на реда и номера на стълба, в който се намират
*/
