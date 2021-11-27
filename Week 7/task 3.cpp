#include <iostream>

void Array(int array[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the array's " << i << " element: ";
        std::cin >> array[i];
    }
}
void FilterN(int array[], int n, int f) {
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
    int n, f;
    std::cout << "Enter array num of elements: ";
    std::cin >> n;
    std::cout << "Enter F: ";
    std::cin >> f;
    while (n < 1 || n > 100)
    {
        std::cin >> n;
    }
    int array[100] = {};
    Array(array, n, f);
    FilterN(array, n, f);

    return 0;
}
/*
Програма приема число f, n[1;100] и n числа. Чрез функция да се определи колко пъти се среща числото f в масива и да се изведат съответните позиции
*/


