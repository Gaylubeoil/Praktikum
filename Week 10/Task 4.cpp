/*Task 4
Да се напише функция, която по даден масив от дробни числа (и неговият размер) намира индекса на последния негов елемент, 
който е равен на средното аритметично от неговите съседни елементи 
(крайните елементи имат само по един съседен). Ако такъв елемент не съществува, да се връща 1. */

#include <iostream>
const int size = 5;
int seek(double* arr, const int* size) {
    if (*size < 1)
    {
        return 1;
    }
    if (arr[0] == arr[1])
    {
        return 0;
    }
    if (arr[*size - 1] == arr[*size - 2])
    {
        return *size - 1;
    }
    for (size_t i = 1; i < *size - 1; i++)
    {
        if (arr[i] == (arr[i - 1] + arr[i + 1]) / 2)
        {
            return i + 1;
            break;
        }
       
    }
    return 1;
}
int main() {

    double arr[size] = { 1,2,3,4,10 };
    std::cout << seek(arr, &size);
    return 0;
}
