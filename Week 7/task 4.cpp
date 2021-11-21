/*
Програма чете символ c и масив от n[1;100] символи. Да се изчистят(заменят с 0) символите от масива съответстващи на с
*/
#include <iostream>
int n;
int c;
void Array(int array[100]) {
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the array's " << i << " element: ";
        std::cin >> array[i];
    }
}
void FilterC(int array[100]) {
    for (int i = 0; i < n; i++)
    {
        if (c == array[i])
        {
            array[i] = 0;
        }
        std::cout << array[i] << std::endl;
    }
}

int main()
{
    std::cout << "Enter num of elements of the array: ";
    std::cin >> n;
    std::cout << "Enter C: ";
    std::cin >> c;
    while (n < 1 || n > 100)
    {
        std::cin >> n;
    }
    int array[100] = {};
    Array(array);
    FilterC(array);

    return 0;
}