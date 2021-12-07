// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
const int MATRIX_SIZE = 5;
void DrawMatrix(int arr[][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            std::cout << "Input Arr[" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
bool EqualDiagonalsOfSmallSquares(int arr[][MATRIX_SIZE]) {
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    int help = MATRIX_SIZE / 2; // 2
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            if (i < (MATRIX_SIZE / 2) && j == i)
            {
                sum1 += arr[i][j];
            }
            if (i < (MATRIX_SIZE / 2) && j == MATRIX_SIZE - help)
            {
                sum2 += arr[i][j];
            }
            if (i > MATRIX_SIZE / 2 && j == (i + MATRIX_SIZE / 2) - MATRIX_SIZE)
            {
                sum3 += arr[i][j];
            }
            if (i > MATRIX_SIZE / 2 && j == i)
            {
                sum4 += arr[i][j];
            }
        }
        help -= 1;
    }
    return(sum1 == sum2 && sum2 == sum3 && sum3 == sum4) ? true : false;
}
int main()
{
    int arr[MATRIX_SIZE][MATRIX_SIZE];
    DrawMatrix(arr);
    std::cout << EqualDiagonalsOfSmallSquares(arr);
    return 0;
}

