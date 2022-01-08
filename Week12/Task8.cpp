/*TASK 8
Напишете функция с прототип void truncate(char* src, int n), която скъсява подадения низ до низ с дължина n. Ако низът вече е по-къс от n, той не трябва да се модифицира

Пример:

truncate("The Dark Knight Rises", 15 ) => The Dark Knight*/
#include <iostream>
int strlen(char* str)
{
	return (*str == '\0' ? 0 : 1 + strlen(str + 1));
}

void truncate(char* str, int n)
{
	if (n < strlen(str))
	{
		str[n] = '\0';
		std::cout << str;
	}

}

int main() {
	char str[] = "The Dark Knight Rises";
	int n = 15;
	truncate(str, n);
	return 0;
}
