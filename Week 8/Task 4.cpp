// Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintMatrix(int arr[][MATRIX_SIZE], int col, int row)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void checkX(int arr[][MATRIX_SIZE], int col, int row, int x)
{
    int counter = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == x)
            {
                counter++;
                std::cout << "Position:[" << i  << "][" << j <<"] "<< std::endl;
                arr[i][j] *= 10;
            }
        }
    }
    if (counter == 0)
    {
        std::cout << "X wasn't found in the matrix." << std::endl;
    }
}

int main()
{
    int col, row, x;
    std::cout << "Enter rows and cols of the matrix: ";
    std::cin >> row >> col;
    std::cout << "Enter X: ";
    std::cin >> x;
    int array[MATRIX_SIZE][MATRIX_SIZE];
    ReadMatrix(array, col, row);
    PrintMatrix(array, col, row);
    checkX(array, col, row, x);

    return 0;
}
/*
4. Да се напише функция, която въвежда цяло число х, да се провери дали х е елемент на матрицата,
и ако е - да се изведе позицията на елемнта в матрицата и елемента да се умножи по 10,
а ако не е елемент на матрицата да се изведе подходящо съобщение.
*/
