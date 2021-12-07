// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const int MATRIX_SIZE = 100;
void ReadMatrix(char array[][MATRIX_SIZE], int col, int row) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << "Enter Matrix[" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }
    std::cout << std::endl;
}
void PrintMatrix(char arr[][MATRIX_SIZE], int col, int row, char symbol)
{
    int counter = 0;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (arr[i][j] != symbol)
                std::cout << arr[i][j] << " ";
            else
            {
                std::cout << "* ";
                counter += 1;
            }
        }
        std::cout << std::endl;
    }
    std::cout << "counter: "<< counter;
}
int main()
{
    int col, row;
    char symbol;
    std::cout << "Enter rows and cols of the matrix: ";
    std::cin >> col >> row;
    std::cout << "Enter char: ";
    std::cin >> symbol;
    char array[MATRIX_SIZE][MATRIX_SIZE];
    ReadMatrix(array, col, row);
    PrintMatrix(array, col, row, symbol);
    return 0;
}
//2. Да се напише програма, в която се въвеждат поредица символи. Да се изведе колко пъти се среща символът в низа и да се замени с '*'.
