/*TASK 5
Да се напише рекурсивна функция bool areEqual(char* str1, char* str2), която проверява дали двата стринга са равни.(Да се игнорират главни и малки букви)
Пример:
areEqual("", "") -> true
areEqual("", "Hi") -> false
areEqual("Hello","HellO") -> true
areEqual("Hello", "hellu") -> false*/
#include <iostream>
int strlen(char* str)
{
	return (*str == '\0' ? 0 : 1 + strlen(str + 1));
}
bool areEqual(char* str1, char* str2) {
	if (*str1 == '\0' && *str2 == '\0') return 1;
	if (strlen(str1) != strlen(str2)) return 0;
	if (*str1 != *str2 && *str1 + 32 != *str2 && *str1 - 32 != *str2) return 0;
	return areEqual(++str1, ++str2);
}
int main() {
	char str1[] = "imfat";
	char str2[] = "imbat";
	std::cout << areEqual(str1, str2);
	return 0;
}
