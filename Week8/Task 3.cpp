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
void SumOfEachRow(int arr[][MATRIX_SIZE], int col, int row) {

    for (int i = 0; i < row; ++i)
    {
        int sum = 0;
        for (int j = 0; j < col; ++j)
        {
            sum += arr[i][j];
        }
        std::cout << "Sum of " << i+1 << " row: " << sum;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void SumOfEachCol(int arr[][MATRIX_SIZE], int col, int row) {

    for (int i = 0; i <col; ++i)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        std::cout << "Sum of " << i + 1 << " col: " << sum;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void SumMainDiagonal(int arr[][MATRIX_SIZE], int col, int row) {

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
    }
    std::cout << "Diagonal sum: " << sum << std::endl;
}

void SecondaryDiagonalSum(int arr[][MATRIX_SIZE], int col, int row)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][col - i - 1];
    }
    std::cout << "Secondary diagonal sum: " << sum << std::endl;
}
void SumAboveAndBelowMainDiagonal(int arr[][MATRIX_SIZE], int col, int row) 
{
    int sumAbove = 0;
    int sumBelow = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++) {
        if (j > i)
        {
            sumAbove += arr[i][j];
        }
        else if (i > j)
        {
            sumBelow += arr[i][j];
        }
    }
}
std::cout << "Sum of elements above main diagonal: " << sumAbove << std::endl;
std::cout << "Sum of elements below main diagonal: " << sumBelow << std::endl;
}

void sumAboveAndBelowSecDiagonal(int arr[][MATRIX_SIZE], int col, int row)
{
    int sumAbove = 0;
    int sumBelow = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            if (col - j - 1 > i) {
                sumAbove += arr[i][j];
            }

            else if (col - j - 1 < i)
            {
                sumBelow += arr[i][j];
            }
        }
    }
std::cout << "Sum of elements above secondary diagonal: " << sumAbove << std::endl;
std::cout << "Sum of elements below secondary diagonal: " << sumBelow << std::endl;
}
int main()
{
    int col, row;
    std::cout << "Enter rows and cols of the matrix: ";
    std::cin >> row >> col;
    int array[MATRIX_SIZE][MATRIX_SIZE];
    ReadMatrix(array, col, row);
    PrintMatrix(array, col, row);
    SumOfEachRow(array, col, row);
    SumOfEachCol(array, col, row);
    if (col >= row)
    {
        SumMainDiagonal(array, col, row);
        SecondaryDiagonalSum(array, col, row);
        SumAboveAndBelowMainDiagonal(array, col, row);
        sumAboveAndBelowSecDiagonal(array, col, row);
    }

    return 0;
}
/*
3. Програмата да намира и извежда сумата от елементите на квадратна матрица на:
* всеки ред
* всеки стълб
* главния диагонал
* вторичния диагонал
* под главния диагонал
* над главния диагонал
* под вторичния диагонал
* над вторичния диагонал
*/
