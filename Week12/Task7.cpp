/*TASK 7
Напишете рекурсивна функция с прототип bool swapcase(char*), която променя всяка голяма буква на малка и всяка малка на голяма в подадения низ
Пример:
swapcase("Yellow Submarine") => yELLOW sUBMARINE*/
#include <iostream>
bool swapcase(char* str) {
	if (*str != '\0') {
		if (*str >= 65 && *str <= 90) *str += 32;
		else if (*str >= 97 && *str <= 122) *str -= 32;
		swapcase(++str);
	}
	return 1;
}
int main() {
	char str[] = "I AM ReallY FAt";
	swapcase(str);
	std::cout << str;
	return 0;
}
