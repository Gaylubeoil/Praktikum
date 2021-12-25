/* Task 4
Да се напише функция, която по даден масив от цели числа ( и неговият размер ) и цяло число n, премахмва от масива всички срещания на даденото число. 
Ако има премахнати елементи, функцията връща true, в противен случай, ако елементът със стойност n не се среща в дадения масив, функцията връща false.
*/
#include <iostream>
const int size = 5;
bool removed(int* arr, const int* size, const int* n) {
	bool removed = false;
	for (size_t i = 0; i < *size; i++)
	{
		if (arr[i] == *n)
		{
			removed = true;
		}
	}
	return removed;
}
void shrinkArr(int* arr, const int* size, const int* n) {
	int newsize = *size;
	for (size_t i = 0; i < *size; i++)
	{
		if (arr[i] == *n)
		{
			newsize--;
			arr[i] = arr[i + 1];
			for (int j = 1; j < newsize; j++)
			{
				arr[i + j] = arr[i + j + 1];
			}
		}
	}
	for (int i = 0; i < newsize; i++)
	{
		std::cout << arr[i] << ' ';
	}
}

int main()
{
	int arr[size] = { 1,2,3,4,5 };
	int n = 2;
	if (removed(arr, &size, &n))
		{
			shrinkArr(arr, &size, &n);
		}
	return 0;
}
