/*
BONUS: Task 6
Да се напише функция, която по даден масив от цели числа(и неговия размер) и цяло число, търси(по възможност двоично)
числото в масива и ако го намери, връща указател към първото му срещане, в противен случай връща NULL. */

#include <iostream>
const int size = 5;
void search(int* arr, const int* size, const double* n) {
	bool found = false;
	int temp;
	for (size_t i = 0; i < *size; i++)
	{
		if (arr[i] == *n)
		{
			temp = i;
			found = true;
		}
	}
	std::cout << (found ? &arr[temp] : NULL);
}
int main() {
	int arr[size] = { 1,2,3,4,5 };
	double n = 4;
	search(arr, &size, &n);
	return 0; 
}
