//Въведете символен низ, пребройте колко пъти се среща символ въведен от потребителския вход
//task 1
#include <iostream>
void cinarr(char* arr, const int* size) 
{
	for (int i = 0; i < *size; i++)
	{
		std::cin >> arr[i];
		if (arr[i] == *size - 1)
		{
			arr[i] = '\0';
		}
	}
}

int counter(char* arr, const int* size, const char* n)
{
	int count = 0;
	for (int i=0; i < *size; i++) {
		if (arr[i] == *n)
		{
			count++;
		}
	}
	return count;
}


int main() {
	int size;
	char n;
  
	std::cout << "size: ";
	std::cin >> size;
	char* str = new char[size + 1];
	std::cout << "character: ";
	std::cin >> n;
	std::cout << "array: ";
  
	cinarr(str, &size);
	std::cout<<counter(str, &size, &n);
  
  delete[] str;
	return 0;
}
