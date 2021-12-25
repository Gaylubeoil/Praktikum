/*
Task 2
Да се напише функция, която по подадени указатели към два сортирани масива и съответните им размери и подаден трети масив, 
слива първите два масива в третия, така че полученият масив отново да е сортиран, без да се прилага допълнително сорнитане. Приемаме, че масивите са от цели числа.
*/
#include <iostream>
const int size = 3;
const int newsize = size * 2;
void mixArrays(int* arr1, const int* size, int* arr2, int* arr3, const int* newsize)
{
    for (int i = 0; i < *size; i++)
    {
        for (int j = 0; j < *size; j++)
        {
            for (int k = 0; k < *newsize; k++)
            {
                if (arr1[i] < arr2[j])
                {
                    arr3[k] = arr1[i];
                    j++;
                    i++;
                }
                else if (arr1[i] >= arr2[j])
                {
                    arr3[k] = arr2[j];
                }
                while (k >= *size && k < *newsize)
                {
                    for (int n = 0; n < *size; n++)
                    {
                        arr3[k] = arr2[n];
                        k++;
                    }
                    break;
                }
            }
        }
    }
    std::cout << std::endl << std::endl;
    for (int i = 0; i < *newsize; i++)
    {
        std::cout << arr3[i] << ' ';

    }
}
int main() {

    int arr1[size] = { 1,2,3};
    int arr2[size] = {3,4,5};
    int arr3[newsize];
    mixArrays(arr1, &size, arr2, arr3, &newsize);
    return 0;
}
