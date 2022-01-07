/*TASK 1
а) Напишете рекурсивна функция с прототип int recStrlen(const char*) , която връща като резултат дължината на подадения низ.
b) Напишете рекурсивна функция с прототип int countLetters(const char*) , която връща като резултат броя на буквите в един символен низ.
Пример:
countLetters("Happy new year") => 12*/
#include <iostream>
int recStrlen(const char* str) {
	if(*str == '\0') return 0;
	return 1 + recStrlen(++str);
}
int countLetters(const char* str) {
	if (*str == '\0') return 0;
	return (*str == ' ' ? 0 + countLetters(++str) : 1 + countLetters(++str));
}
int main() {
	char str[] = " im   fat";
	std::cout << recStrlen(str) << std::endl;
	std::cout << countLetters(str) << std::endl;
	return 0;
}
