#include <iostream>

int n, f;
void Array(int array[100]) {
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the array's " << i << " element: ";
        std::cin >> array[i];
    }
}
void FilterN(int array[100]) {
    int counter = 0;
    std::cout << "index: ";
    for (int i = 0; i < n; i++)
    {
        if (f == array[i])
        {
            counter += 1;
            std::cout << i << " ";
        }
    }
    std::cout << std::endl << counter << " times. ";
}

int main()
{   
    std::cout << "Enter array num of elements: ";
    std::cin >> n;
    std::cout << "Enter F: ";
    std::cin >> f;
    while (n < 1 || n > 100)
    {
        std::cin >> n;
    }
    int array[100] = {};
    Array(array);
    FilterN(array);

    return 0;
}
/*
Програма приема число f, n[1;100] и n числа. Чрез функция да се определи колко пъти се среща числото f в масива и да се изведат съответните позиции
*/


