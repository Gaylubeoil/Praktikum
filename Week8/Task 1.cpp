// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const int MATRIX_SIZE = 100;
void ReadMatrix(int array[][MATRIX_SIZE], int col, int row) {
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
void PrintMatrix(int array[][MATRIX_SIZE], int col, int row) {
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void MultiplyMatrix(int array[][MATRIX_SIZE], int col, int row) {
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << array[i][j] * 2 << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
int main()
{
    int col, row;
    std::cout << "Enter rows and cols of the matrix: ";
    std::cin >> col >> row;
    int array[MATRIX_SIZE][MATRIX_SIZE];
    ReadMatrix(array, col, row);
    PrintMatrix(array, col, row);
    MultiplyMatrix(array, col, row);
    return 0;
}

//да се напише функция, която по подаден двумерен масив трябва да го изведе на екрана.
//да се обходи матрицата и всяко число да се удвои