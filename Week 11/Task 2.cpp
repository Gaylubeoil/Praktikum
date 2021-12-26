#include <iostream>
// По въведен символен низ, преобразувайте го като всяка малка буква стане главна и обратно, а символите ",.!? в $.
// task2
void cinarr(char* arr, const int* size)
{
	int i = 0;
	for ( ; i < *size; i++)
	{
		std::cin >> arr[i];
	}
	arr[i] = '\0';
}
void letterTransformer(char* arr) {
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] -= 32;
		}
		else if (arr[i] <= 90 && arr[i] >= 65)
		{
			arr[i] += 32;
		}
		switch (arr[i])
		{
		case ',': case '.': case '!': case '?': arr[i] = '$'; break;
		default: break;
		}
		i++;
	}

	std::cout << arr;
}

int main() {
	int size;

	std::cout << "size: ";
	std::cin >> size;

	char* str = new char[size + 1];

	std::cout << "array: ";
	cinarr(str, &size);

	letterTransformer(str);

	delete[] str;
	return 0;
}
