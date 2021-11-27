#include <iostream>
void Array(char array[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the array's " << i << " element: ";
        std::cin >> array[i];
    }
}
void FilterC(char array[], char n, char c) {
    for (char i = 0; i < n; i++)
    {
        if (c == array[i])
        {
            array[i] = '0';
        }
        std::cout << array[i] << std::endl;
    }
}
int main()
{
    int n;
    char c;
    std::cout << "Enter num of elements of the array: ";
    std::cin >> n;
    std::cout << "Enter C: ";
    std::cin >> c;
    while (n < 1 || n > 100)
    {
        std::cin >> n;
    }
    char array[100] = {};
    Array(array, n);
    FilterC(array, n, c);
    return 0;
}
/*
Програма чете символ c и масив от n[1;100] символи. Да се изчистят(заменят с 0) символите от масива съответстващи на с
*/
