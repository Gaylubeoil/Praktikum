/*Task 2
Да се напише функция, която приема като аргументи указател към масив и размера на масива и го обръща. Например, а ={1, 2, 3, 4, 5} → reverse(a, 5) → a : 5, 4, 3, 2, 1.
*/
#include <iostream>
const int size = 5;
void reverse(int* arr, const int* size)
{
    int temp = 0; // arr 1, 2, 3, 4, 5
    for (int i = 0 ; i < *size/2; i++)
    {
        temp = arr[*size - i - 1]; 
        arr[*size - i - 1] = arr[i]; 
        arr[i] = temp;        
    }
    for (int i = 0; i < *size; i++)
    {
        std::cout << arr[i]<< " ";
    }
}


int main() {
    int arr[size] = {1, 2, 3, 4, 5};    
    reverse(arr, &size);    
}
