// 2 task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int n;
void Array(int array[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the array's " << i << " element: ";
        std::cin >> array[i];
    }
}
void Filter(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = array[i];
        while (k > 0)
        {
            if (((array[i] % int(pow(10, j + 1))) / int(pow(10, j))) % 2 != 0)
            {
                sum += (array[i] % int(pow(10, j + 1))) / int(pow(10, j));
            }
            k /= 10;
            j++;
        }
    }
    std::cout << sum;
}

int main()
{
    int n;
    std::cout << "Enter the array's number of elements: ";
    std::cin >> n;
    while (n < 1 || n > 100)
    {
        std::cin >> n;
    }
    int array[100] = {};
    Array(array, n);
    Filter(array, n);
    return 0;
}
/*
ДНП, която приема число n[1;100] и масив от n числа. 
Използвайки функции числата да се преобразуват - филтрирайте само нечетните цифри на числото и полученото умножете по 2.
*/
