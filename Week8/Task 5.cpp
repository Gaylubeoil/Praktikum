// Task 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
const int arraymax = 100;
void readArray(int array[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter array [" << i << "]: ";
        std::cin >> array[i];
    }
}
void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}
void sort(int arr[], int n)
{
    bool swap;
    int temp;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            while (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            temp = 0;
        }
    }
}
void printSortedArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout <<arr[i] << " ";
    }
}

int main()
{
    int n;
    std::cin >> n;
    int array[arraymax];
    readArray(array, n);
    printArray(array, n);
    sort(array, n);
    printSortedArray(array, n);
    return 0;
}

//5. Да се напише функция, която въвежда едномерен масив от целочислени числа и да ги сортира във възходящ ред.
