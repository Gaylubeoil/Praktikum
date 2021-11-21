
#include <iostream>
int n;
void ArrayMaxMinIndex(int array[99]) { 
    for (int i = 0; i < n; i++) {
        std::cout << "Enter the array's " << i << " element: ";
        std::cin >> array[i];
    }
    int max = 0;
    int indexMax = 0;
    int indexMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            indexMax = i;
        }
    }
    int min = array[1];
    for (int i = 0; i < n; i++)
    {

        if (min > array[i])
        {
            min = array[i];
            indexMin = i;
        }
    }
    std::cout << "Max element: " << max << " with index: " << indexMax << std:: endl;
    std::cout << "Min element: " << min << " with index: " << indexMin << std::endl;
}
int main()
{
    std::cin >> n;
    while (n < 2 || n > 100)
    {
        std::cin >> n;
    }
    int array[99] = {};
    ArrayMaxMinIndex(array);
}
/*
ДНП, в която се въвежда число n[2;100] и масив от n числа. Използвайки функции да се изведат най-голямото и най-малкото число от редицата.
Да се изведат и позициите им
*/
